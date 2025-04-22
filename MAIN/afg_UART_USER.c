
//******************************************a
// afg_UART_USER.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_UART_USER.c \n"
//***********************************************d

//********************************j
//* 01 Prototypes

void UART_USER_Int_Transmit();

// kann ich dann wieder löschen !
uint32_t I2C_MAS_0_WRITE(uint8_t ui8_Ori_SlaveAddr, uint8_t *pui8_Ori_Array, uint8_t ui8_Ori_Length);

#ifdef I2C_MAS_0_HERE
void I2C_MAS_0_INIT();
#endif

#ifdef PCA9535D_PIO_0_HERE
void PCA9535D_PIO_0_INIT();
#endif

//*******************************************************************b
//* UART_USER_UART_INIT(); //weh_function
#ifdef UART_USER_HERE
// Initialize the UART_USER Interface
// Clock Pins Baudrate (not the Interrupt !)
//*******************************************************************c
void UART_USER_UART_INIT() {
// Parts used from: uart_ui.c
// Auth: M. Fras, Electronics Division, MPI for Physics, Munich

#pragma weh_all3 "UART_USER_UART_INIT  UART_USER_UART_BASE is : "
#pragma weh_all3 UART_USER_UART_BASE
#pragma weh_all3 " ist: "
#pragma weh_all3 UART3_BASE
#pragma weh_all3 ".\n"

// Output of Uart Base
#ifdef PRAGMA_MESSAGES_HERE
//Message 1
#pragma message("*** UART_USER_UART_BASE  " VAR_NAME_VALUE(UART_USER_UART_BASE))

//Message 2
#undef MESSAGE_VAL
#define MESSAGE_VAL UART_USER_UART_BASE
#undef MESSAGE_STR
#define MESSAGE_STR "UART_USER_UART_BASE"
#pragma message("*** " MESSAGE_STR "   " VAR_NAME_VALUE(MESSAGE_VAL))
#endif //(PRAGMA_MESSAGES_HERE)

// Initialize the UART Clock
// ui32_Uart_User_Src_Clock = ui32SysClock;

// Enable GPIO Port used by the UART
   MAP_SysCtlPeripheralEnable(UART_USER_SYSCTL_PERIPH_PORT);

// Configure GPIO pins as UART Pins for UART mode
   MAP_GPIOPinConfigure(UART_USER_PIN_RXD);
   MAP_GPIOPinConfigure(UART_USER_PIN_TXD);

   MAP_GPIOPinTypeUART (UART_USER_PORT_BASE, UART_USER_PIN_NO_RXD | UART_USER_PIN_NO_TXD);

// Set UART peripheral
   MAP_SysCtlPeripheralDisable(UART_USER_PERIPH_UART_NO);
   MAP_SysCtlPeripheralReset  (UART_USER_PERIPH_UART_NO);
   MAP_SysCtlPeripheralEnable (UART_USER_PERIPH_UART_NO);

// Set UART Settings
   MAP_UARTConfigSetExpClk(UART_USER_UART_BASE, ui32SysClock, UART_USER_BAUD_RATE,
                          (UART_USER_BITS_DATA | UART_USER_BITS_STOP | UART_USER_PARYTY));

// Enalble Dissable built in Fifo Level
#if (UART_USER_SYS_FIFOS_ON == true)
   MAP_UARTFIFOEnable  (UART_USER_UART_BASE);
#else
   MAP_UARTFIFODisable (UART_USER_UART_BASE);
#endif

} //end function
#endif //(UART_USER_HERE)

//*******************************************************************b
//* DO_NOTHING         Default Empty Function for UART Monitors
#ifdef F_DO_NOTHING
//*******************************************************************c
void DO_NOTHING(void) {

   // LED cpl damit die Funkt nicht wegoptimiert wird
   //SYS_LED_WORK_CPL(); //weh_function

} //end function
#endif //(F_DO_NOTHING)

//*******************************************************************b
//* P_UART_USER_DAT (uint8_t ui8_Ori_Value); //weh function
#ifdef F_P_UART_USER_DAT
// Print one Data Byte to Uart Buffer or send it direct
//*******************************************************************c
void P_UART_USER_DAT(uint8_t ui8_Ori_Value) {

// Uart Buffer is here
#ifdef UART_USER_BUFFER_TX_HERE

   // Disable TX Interrupt Damit pointer nicht von INT verändert werden
   // eigentlich schon nötig wenn ich Buffer_Full teste !!!
   // dann werden aber keine Daten mehr gesendet !
   //"- still to be revised -"
   // MAP_UARTIntDisable(UART_USER_UART_BASE, UART_INT_TX);

// Test if Buffer Full
   while (UART_USER_BUFFER_TX_FULL) {
      // UART_USER Interrupt is still enabled
      // MAP_UARTIntEnable(UART_USER_UART_BASE, UART_INT_TX);

      ui16_Uart_User_TX_Wait_Counter ++;

      // warte hier damit weitere Daten gesendet werden können
      if (ui16_Uart_User_TX_Wait_Counter >= 10) {
         ui16_Uart_User_TX_Wait_Counter = 0;
         b_Uart_TX_Wait_Error = true;

         // hartes Senden auf die UART per "Hand" !
         // war: UARTPrimeTransmit(t_UartUSER.ui32UartBase);
         UART_USER_Int_Transmit();
      }
   }

   // Disable TX Interrupt Damit pointer nicht von INT verändert werden
   MAP_UARTIntDisable(UART_USER_UART_BASE, UART_INT_TX);

   // Buffer sollte jetzt nicht mehr full sein
   if(!UART_USER_BUFFER_TX_FULL) {
   // HERE: Buffer not full
   // schreibe ein Byte ins array
      aui8_Uart_User_TxBuffer[ui32_Uart_User_TxBuffer_WriteIndex] = ui8_Ori_Value;
      // setze die Pointer auf den nächste Stelle im Buffer
      UART_USER_ADVANCE_BUFFER_TX_INDEX(ui32_Uart_User_TxBuffer_WriteIndex);
   }
   else {
   // sollte nicht vorkomen !
   // Fehlerfall !
   // HERE: Buffer is full - discard remaining characters and return.
   //break;
   }

// Enable TXD Interrupt
   MAP_UARTIntEnable(UART_USER_UART_BASE, UART_INT_TX);

#endif //(UART_USER_BUFFER_TX_HERE)

// else ... NO Uart Buffer is here    Send Direkt to UART
#ifndef UART_USER_BUFFER_TX_HERE
//HERE: No UART Buffer here

// see: The difference between function(UARTCharPutNonBlocking) and (UARTCharPut) .jpg
#ifdef UART_USER_REC_BLOCKING_MODE
   MAP_UARTCharPut(UART_USER_UART_BASE,ui8_Ori_Value);
#else //(UART_USER_REC_BLOCKING_MODE)
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,ui8_Ori_Value);
#endif //(UART_USER_REC_BLOCKING_MODE)

#endif //NOT (UART_USER_BUFFER_TX_HERE)

} //end function
#endif //(F_P_UART_USER_DAT)

//*******************************************************************b
//* P_UART_USER_DAT_DIRECT (uint8_t ui8_Ori_Value) //weh function
#ifdef F_P_UART_USER_DAT_DIRECT
// Print Dat Value (1 Byte) direct to RS232 (without Buffer)
//*******************************************************************c
void P_UART_USER_DAT_DIRECT(uint8_t ui8_Ori_Value) {

// see: The difference between function(UARTCharPutNonBlocking) and (UARTCharPut) .jpg
#ifdef UART_USER_REC_BLOCKING_MODE
   MAP_UARTCharPut(UART_USER_UART_BASE,ui8_Ori_Value);
#else //(UART_USER_REC_BLOCKING_MODE)
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,ui8_Ori_Value);
#endif //(UART_USER_REC_BLOCKING_MODE)

} //end function
#endif //(F_P_UART_USER_DAT_DIRECT)

//*******************************************************************b
//* P_UART_USER_STR (uint8_t ui8_Ori_Value) //weh function
#ifdef F_P_UART_USER_STR
// Print String to P_UART_USER_DAT (then to RS232 Interface)
//*******************************************************************c
void P_UART_USER_STR(char *pac_Ori_Array) {   //pointer to array char

   // first element in string array = 0
   ui8_i = 0;
   // get first token in buffer
   ui8_A = pac_Ori_Array[ui8_i];

//   while (ui8_A != NULL) {
   while (ui8_A != '\0') {
      //HERE: token is not 0

      // actual token in buffer
      P_UART_USER_DAT(ui8_A); // A in buffer
      // inc position
      ui8_i++;
      // get next token
      ui8_A = pac_Ori_Array[ui8_i];  //cast
   } //end while
} //end function
#endif //(F_P_UART_USER_STR)

//*******************************************************************b
//* P_UART_USER_HEX_1B (Buffer); //weh function
#ifdef F_P_UART_USER_HEX_1B
// Send 1 byte hex to Uart
//*******************************************************************c
void P_UART_USER_HEX_1B(uint8_t ui8_Ori_Value) {
   // shift High Nibble to Low Nibble position
   ui8_A = (ui8_Ori_Value & 0x0f0) >> 4;
   // actual token as hex in buffer
   P_UART_USER_DAT(HEX2ASC(ui8_A));
   // get Low Nibble
   ui8_A = (ui8_Ori_Value & 0x00f);
   // actual token as hex in buffer
   P_UART_USER_DAT(HEX2ASC(ui8_A));
} //end function
#endif //(F_P_UART_USER_HEX_1B)

//*******************************************************************b
//* P_UART_USER_HEX_2B Send byte hex to Uart (Buffer)
#ifdef F_P_UART_USER_HEX_2B
//*******************************************************************c
void P_UART_USER_HEX_2B(uint16_t ui16_Ori_Value) {
   // shift High Byte to Low Byte position
   ui8_A = (ui16_Ori_Value & 0x0ff00) >> 8;
   // print higher byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
   ui8_A = (ui16_Ori_Value & 0x000ff);
   // print lower byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
} //end function
#endif //(F_P_UART_USER_HEX_2B)

//*******************************************************************b
//* P_UART_USER_HEX_4B Send byte hex to Uart (Buffer)
#ifdef F_P_UART_USER_HEX_4B
//*******************************************************************c
void P_UART_USER_HEX_4B(uint32_t ui32_Ori_Value) {
   // shift High Byte to Low Byte position
   ui8_A = (ui32_Ori_Value & 0x0ff000000) >> 24;
   // print higher byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
   ui8_A = (ui32_Ori_Value & 0x000ff0000) >> 16;
   // print next byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
   ui8_A = (ui32_Ori_Value & 0x00000ff00) >> 8;
   // print next byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
   ui8_A = (ui32_Ori_Value & 0x0000000ff);
   // print lower byte
   P_UART_USER_HEX_1B(ui8_A); //weh function
} //end function
#endif //(F_P_UART_USER_HEX_4B)

//*******************************************************************b
//* P_UART_USER_DEZ_4B(uint32_t ui32_Ori_Value, uint8_t ui8_Ori_Stellen, uint8_t ui8_Ori_Token);  //weh_function
#ifdef F_P_UART_USER_DEZ_4B
// Send up to 4 byte dez to Uart
// 32 Bit value      Stellen die immer ausgegeben werden       Füllzeichen für Stellen vor erster Zahl > 0
//*******************************************************************c
void P_UART_USER_DEZ_4B(uint32_t ui32_Ori_Value, uint8_t ui8_Ori_Stellen, uint8_t ui8_Ori_Token) {

uint8_t ui8_Value_Stelle;
uint8_t i;                  //local
uint32_t ui32_Value_Rest;
bool b_GNullHere;           // grössere Zahl wie null war hier

   // es war noch keine Zahl grösser Null hier
   b_GNullHere = false;
   ui32_Value_Rest = ui32_Ori_Value;

   for (i = 0; i < INT32_MPOS; i++) {     // Stelle = 10 : 0..9   ->  kui8_MaxStellen -1 - i : 9..0
      ui8_Value_Stelle = (ui32_Value_Rest  / CALC_10EXP(INT32_MPOS-1 - i));     // 9..0
      
      if (ui8_Value_Stelle > 0) b_GNullHere = true;
      
      if (b_GNullHere) {
         ui32_Value_Rest -= (ui8_Value_Stelle * CALC_10EXP(INT32_MPOS- 1 - i));     // A = A - n * calc
         // einzelne Stelle plus Token Null = '0'
         ui8_Value_Stelle += '0';   
         // print Token 0..9 to Uart
         P_UART_USER_DAT(ui8_Value_Stelle);
      }   

      if ((ui8_Value_Stelle == 0) && (!b_GNullHere) && (INT32_MPOS-1 - i <= ui8_Ori_Stellen-1)) {
         // print Fill_Token ZERO or SPACE or ...
         ui8_Value_Stelle = ui8_Ori_Token;   
         // print Fill Token to Uart
         P_UART_USER_DAT(ui8_Value_Stelle);
      }      
      
   }  
} //end function
#endif //(F_P_UART_USER_DEZ_4B)

//*******************************************************************b
//* UART_USER_SEND_INC() ;//weh function
#ifdef F_UART_USER_SEND_INC
// sendet bei aufruf ein increment Token    Mit Test Funktionen
//*******************************************************************c
void UART_USER_SEND_INC() {

// INC Byte Variable
   ui8_UART_USER_SEND_INC_BYTE ++;

// immer wenn hier zu viele Daten in den UART Buffer geschrieben werden dann stürzt die MCU ab !!!!!!!!!!!!!!

// send value to UART
// print Token
   P_UART_USER_DAT('*');
   P_UART_USER_DAT('v');
// print dez 4 Stelle Aufgefüll mit Spaces
   P_UART_USER_DEZ_4B(ui8_UART_USER_SEND_INC_BYTE,4,T_SPACE); //weh_function
   P_UART_USER_DAT(':');
   P_UART_USER_DAT(ui8_UART_USER_SEND_INC_BYTE); // inc value in buffer = Print Value
   P_UART_USER_DAT(' ');
   P_UART_USER_HEX_1B(ui8_UART_USER_SEND_INC_BYTE); // Print Hex
// print
   P_UART_USER_STR (ac_Text_hex_n);


#ifdef NO

// send value to I2C device
//   I2CTestWeh(&t_I2C0,PCF8574_PIO_0_ADR,ui8_UART_USER_SEND_INC_BYTE); //weh function
   I2CTestWeh(&t_I2C0,PCF8574_PIO_0_ADR,0x07e); //weh function

// read I2C
   I2C_MAS_0_READ(PCF8574_PIO_0_ADR, 1);
   ui8_A = ui8_I2C_MAS_0_Array[0];
   P_UART_USER_HEX_1B(ui8_A); // Print Hex
// P_UART_USER_DAT(ui8_A);

#endif


// lösche den Error
#ifdef UART_USER_BUFFER_TX_HERE
   b_Uart_TX_Wait_Error = false;
#endif

// lösche LED weil vorher cpl war
   SYS_LED_ERROR_OFF(); //weh_function

} //end function
#endif //(F_UART_USER_SEND_INC)

//*******************************************************************b
//* UART_USER_TEST_2() ;//weh function
#ifdef F_UART_USER_TEST_2
// Test 0 Function
//*******************************************************************c
void UART_USER_TEST_2() {
   
uint8_t Zahl;
uint32_t Erg;


   P_UART_USER_DAT(T_NEWLINE); //weh function
   P_UART_USER_STR("Enter Number : "); //weh function

   P_UART_USER_DAT('0'); //weh function
   P_UART_USER_DAT('x'); //weh function

   Zahl = 10;
   P_UART_USER_DAT(Zahl+'0'); //weh function

   
   P_UART_USER_DAT(T_NEWLINE); //weh function
   Erg = CALC_10EXP(Zahl); //weh function

   P_UART_USER_DEZ_4B(Erg,6,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE); //weh function
   P_UART_USER_HEX_4B(Erg);   
   P_UART_USER_DAT(T_NEWLINE); //weh function

   P_UART_USER_DAT(T_NEWLINE); //weh function
   P_UART_USER_DEZ_4B(1,10,T_SPACE);
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(12,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(1034,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(10345,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103456,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(1034567,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(10345678,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103456789,10,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(4294967295,10,T_SPACE);   

   P_UART_USER_DAT(T_NEWLINE);   

   P_UART_USER_DAT(T_NEWLINE); //weh function
   P_UART_USER_DEZ_4B(1,10,T_NULL);
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(12,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(1034,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(10345,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103456,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(1034567,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(10345678,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(103456789,10,T_NULL);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(4294967295,10,T_NULL);   

   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(95,10,'.');   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(95,5,'.');   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(95,3,'_');   

   P_UART_USER_DAT(T_NEWLINE);   



   P_UART_USER_DEZ_4B(1,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(12,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(120,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(1204,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(12045,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(120456,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(120567,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(12045678,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(123450789,0,T_SPACE);   
   P_UART_USER_DAT(T_NEWLINE);   
   P_UART_USER_DEZ_4B(4294967295,0,T_SPACE);   

   P_UART_USER_DAT(T_NEWLINE);   

   P_UART_USER_HEX_4B(4294967295-1);   
   P_UART_USER_DAT(T_NEWLINE); //weh function
   P_UART_USER_HEX_4B(4294967295);   
   P_UART_USER_DAT(T_NEWLINE); //weh function



   P_UART_USER_DAT(T_NEWLINE); //weh function



} //end function
#endif //(F_UART_USER_TEST_2)


//*******************************************************************b
//* UART_USER_F1B_TEST_0() ;//weh function
#ifdef F_UART_USER_F1B_TEST_0
// 1 Byte Test 0 Function
//*******************************************************************c
void UART_USER_F1B_TEST_0() {
   P_UART_USER_DAT(ui8_Monitor_0_PROTOTOKEN);   
//   P_UART_USER_DAT(T_SPACE);   
   P_UART_USER_DAT('-');   
   P_UART_USER_HEX_1B(ui8_Monitor_0_BYTE0);   
   P_UART_USER_DAT(T_NEWLINE); //weh function

#ifdef PCA9535D_PIO_0_HERE
   ui8_PCA9535D_PIO_0_VAL_P0_WR = ui8_Monitor_0_BYTE0;
   ui8_PCA9535D_PIO_0_VAL_P1_WR = ui8_Monitor_0_BYTE0;

   ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_OUTP0;       //First Output goes to P0
   ui8_I2C_MAS_0_Array[1] = ui8_PCA9535D_PIO_0_VAL_P0_WR;   //Actual Value for P0
   ui8_I2C_MAS_0_Array[2] = ui8_PCA9535D_PIO_0_VAL_P1_WR;   //Actual Value for P1
   I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 3);
#endif //(PCA9535D_PIO_0_HERE)


} //end function
#endif //(F_UART_USER_F1B_TEST_0)


//*******************************************************************b
//* UART_USER_RECEIVE_DAT(); //weh function
#ifdef F_UART_USER_RECEIVE_DAT
//befindet sich an 2 Stellen   in MAIN      (bei direkt poll)
//                             in UART_USER_IntHandler
// holt ein Token aus der UART und ruft die Verarbeitungs Routinen auf
//*******************************************************************c
void UART_USER_RECEIVE_DAT() {

// if datas here
   if (UARTCharsAvail(UART_USER_UART_BASE)) {

// Read a character
// see: The difference between function(UARTCharPutNonBlocking) and (UARTCharPut) .jpg
#ifdef UART_USER_REC_BLOCKING_MODE
      ui8_UART_USER_PROTO_BYTE = (uint8_t) MAP_UARTCharGet(UART_USER_UART_BASE) & 0x0ff;
#else //(UART_USER_REC_BLOCKING_MODE)
      ui8_UART_USER_PROTO_BYTE = (uint8_t) MAP_UARTCharGetNonBlocking(UART_USER_UART_BASE) & 0x0ff;
#endif //(UART_USER_REC_BLOCKING_MODE)


// Start or Restart Timeout Timer at each Token (= not Good)
// ui8_TIMER_TIMEOUT_MONITOR_0_REG = TIMER_TIMEOUT_MONITOR_0_TIM_VAL;
// b_TIMER_TIMEOUT_MONITOR_0_RUN_BIT = true;


// direct echo = send immediately
#ifdef UART_USER_DIRECT_ECHO
      P_UART_USER_DAT (ui8_UART_USER_PROTO_BYTE); //weh function
#endif //UART_USER_DIRECT_ECHO)

//***************************k
// Auswerten der Protokolle
#ifdef MONITOR_0_AT_UART_USER

// Festlegen der nötigen Anzahl von Bytes
#ifdef MONITOR_0_PROTO_NOH_REC

   // bei NOH teste erstes Zeichen
   if(ui8_MONITOR_0_PROTO_PLACE == 0) {

      switch(ui8_UART_USER_PROTO_BYTE) {

//* UART_USER_RECEIVE_DAT(); F0B      
         case MONITOR_0_F0B_TEST_0_TOK         : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_TEST_0_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_TEST_1_TOK         : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_TEST_1_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_TEST_2_TOK         : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_TEST_2_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_LOOP_WHILE1_TOK    : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_LOOP_WHILE1_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_NO_LOOP_WHILE1_TOK : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_NO_LOOP_WHILE1_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_SEND_INC_TOK       : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_SEND_INC_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
         case MONITOR_0_F0B_AUTO_SEND_TOK      : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F0B_AUTO_SEND_BYTES;
              //START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
//* UART_USER_RECEIVE_DAT(); F1B      
         case MONITOR_0_F1B_TEST_0_TOK         : ui8_Monitor_0_P_SOLL_Bytes =  MONITOR_0_F1B_TEST_0_BYTES;
              START_TIMER_TIMEOUT_MONITOR_0(); //weh function
              break;
      } //end switch
   } //(if(ui8_MONITOR_0_PROTO_PLACE == 0))

#endif //(MONITOR_0_PROTO_NOH_REC)

// if Full Header
//#ifdef MONITOR_0_PROTO_FULLH_REC
      // Auswerten der Protokolle und Bits setzen (Aktion dann in MAIN)
      MONITOR_0_BUILD_PROTO_SET_BITS(ui8_UART_USER_PROTO_BYTE); //weh_function
//#endif //(MONITOR_0_PROTO_FULLH_REC)

// if No   Header
#ifdef MONITOR_0_PROTO_NOH_REC
      // Auswerten der Protokolle DIRECT (hier: auch wenn die MAIN hängt !)
      MONITOR_0_INTERPRET_PROTO_DIRECT(ui8_UART_USER_PROTO_BYTE); //weh_function
#endif //(MONITOR_0_PROTO_NOH_REC)

      
#endif //(MONITOR_0_AT_UART_USER)
//***************************k

   } //end (if (UARTCharsAvail(UART_USER_UART_BASE)))
} //end function
#endif //(F_UART_USER_RECEIVE_DAT)



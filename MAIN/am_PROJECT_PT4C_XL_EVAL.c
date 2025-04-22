
//******************************************a
// am_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

// am_File  : Is been included in the MAIN Loop
// no RET or JMP necessary !

#ifdef NO //DOKU

die Funktion enthält angelehnt zum ASM File
nur die Funktionen in der MAIN Loop

#endif //(NO //DOKU)


// 00 Echo Begin
#pragma weh_all3 "File:      am_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d

//*******************************************************************b
//* TIMER_0_READY_BIT (in MAIN)
#ifdef TIMER_0_HERE
//*******************************************************************c
   if (b_TIMER_0_READY_BIT == true) {
      //;HERE: Timer is ready
      //TIMER_0_RUN_BIT ist schon von T0INT geloescht worden
      b_TIMER_0_READY_BIT = false;

//******
// TIMER_0 INFO: 
//******

   SYS_SPEAKER_0_OFF();    //weh_function
   }
#endif //(TIMER_0_HERE)

//*******************************************************************b
//* DOPULSE_0 (in MAIN)                 Write to Uart_User Sensor Read
#ifdef DOPULSE_0_HERE
//*******************************************************************c
#pragma weh_all3 "      DOPULSE_0 (in MAIN) Write to Uart_User Sensor Read\n"

   if (b_DOPULSE_0_DOTI_BIT) {
       b_DOPULSE_0_DOTI_BIT = false;
      //HERE:  DOPULSE_0 : 


   if (b_AutoSend_0_On) {

   // Write value to the UART
   // wenn Fifo disable dann sendet er nur AW  
   // viele Uart Ausgaben TEST
#ifdef NO
#ifdef UART_USER_HERE
   //   UartSendValue(&t_UartUSER,'A'); DELME

      P_UART_USER_DAT('a'); // 1 in buffer
      P_UART_USER_DAT('b'); // 2
      P_UART_USER_DAT('c'); // 3
      P_UART_USER_DAT('d'); // 4
      P_UART_USER_DAT('e'); // 5
      P_UART_USER_DAT('f'); // 6
      P_UART_USER_DAT('g'); // 7
      P_UART_USER_DAT('h'); // 8
      P_UART_USER_DAT('i'); // 9
      P_UART_USER_DAT('j'); // 10
      P_UART_USER_DAT('k'); // 11
      P_UART_USER_DAT('l'); // 12
      P_UART_USER_DAT('m'); // 13
      P_UART_USER_DAT('n'); // 14
      P_UART_USER_DAT('o'); // 15 das sendet er noch bei Buffer Size 0x010
      P_UART_USER_DAT('p');         // ein zeichen zu viel und der Buffer ist full und die While schleife hängt !!!
      P_UART_USER_DAT('q');
      P_UART_USER_DAT('r');
      P_UART_USER_DAT('s');
      P_UART_USER_DAT('t');
      P_UART_USER_DAT('u');
      P_UART_USER_DAT('v');
      P_UART_USER_DAT('w');
      P_UART_USER_DAT('0');
      P_UART_USER_DAT('1');
      P_UART_USER_DAT('2');
      P_UART_USER_DAT('3');
      P_UART_USER_DAT('4');
      P_UART_USER_DAT('5');
      P_UART_USER_DAT('6');
      P_UART_USER_DAT('7');
      P_UART_USER_DAT('8');
      P_UART_USER_DAT('9');
      P_UART_USER_DAT('0');
      P_UART_USER_DAT('_');
      P_UART_USER_DAT('_');
      P_UART_USER_DAT('_');
      P_UART_USER_DAT('_');
      P_UART_USER_DAT('_');
      P_UART_USER_DAT('_');

#endif //(UARTUSER_HERE)
#endif //(NO)

   //* OPT3001_LIGHTSENS_0 Read (in DOPULSE_0)
#ifdef OPT3001_LIGHTSENS_0_HERE

   // I2C read
   // die Part Adresse wurde mit dem letzten write im device gespeichert
   I2C_MAS_0_READ(&t_I2C0,OPT3001_LIGHTSENS_0_ADR,ui8_I2C_MAS_0_Array, 2);
   // zerst MSB = 0 dann LSB = [1]

   // Berechne Lumi_Val
#undef KLAPPE0
// Exponent Obere 4 Bits vom High Byte und nach unten schieben
   ui8_Lumi_Exp = ui8_I2C_MAS_0_Array[0] & 0x0f0;
   ui8_Lumi_Exp = ui8_Lumi_Exp >> 4;

// Mantisse Mantissa untere 4 Bits vom High Byte und 8 Bits von Low Byte
   Lumi_Val_L = ui8_I2C_MAS_0_Array[1];
   
   ui32_Lumi_Val = (ui8_I2C_MAS_0_Array[0] & 0x00f);     // High 4 Bit in VAL
   Lumi_Val_H = ui32_Lumi_Val;
   ui32_Lumi_Val = ui32_Lumi_Val << 8;          // nach oben schieben
   ui32_Lumi_Val = ui32_Lumi_Val | ui8_I2C_MAS_0_Array[1];    // Low 8 Bits dazu
   // Berechnung : eigentlich  fIlluminance = (float) ui32IlluminanceMantissa * 0.01 * (1 << ui32IlluminanceExponent)
// ui32_Lumi_Val = ui32_Lumi_Val * 0,01 * (1 << ui8_Lumi_Exp);
   ui32_Lumi_Val = ui32_Lumi_Val * (1 << ui8_Lumi_Exp);  // mal 1 statt 0,01
#undef KLAPPE1
   

   // print if error
//   if (Lumi_Val_H == 0 && Lumi_Val_L == 0) {
//   if (Lumi_Val_L == 0) {
   if (true) {     //immer
   
// P_UART_USER_DEZ_4B(aui8_I2C_MAS_0_Array[0],4,,T_SPACE); //weh_function
   P_UART_USER_DAT('\r');   // \r = new line
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[0]); //weh_function
   P_UART_USER_DAT('\t');   // \t = tab
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[1]); //weh_function
   P_UART_USER_DAT('\t');   // \t = tab
   P_UART_USER_DEZ_4B(Lumi_Val,6,T_SPACE); //weh_function
   }
   else {
   P_UART_USER_DAT('.');   // \r = new line
   }


// test with speaker_0. Töne bei sehr hoher Helligkeit (Sonne / Taschenlampe)
#ifdef NO
// calculated const in register
   ui16_SPEAKER_0_VALREG_H = Lumi_Val / 10000; 
   ui16_SPEAKER_0_VALREG_L = Lumi_Val / 10000;

// calculated time for sound
   ui8_TIMER_SPEAKER_0_REG = 0x0ff;  // 1 = 5 ms

   b_SPEAKER_0_RUN_BIT = true;
   b_TIMER_SPEAKER_0_RUN_BIT = true;
#endif

#endif //(OPT3001_LIGHTSENS_0_HERE)

//* PCF8574_PIO_0 Read (in DOPULSE_0)
#ifdef PCF8574_PIO_0_HERE
   // read I2C Beweg Input geht !   Output : fe	00
   I2C_MAS_0_READ(&t_I2C0, PCF8574_PIO_0_ADR, ui8_I2C_MAS_0_Array, 1);

   //MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_RECEIVE_FINISH);
   //MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_RECEIVE_ERROR_STOP);

   // Send One Value Byte to Uart User
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[0]); //weh_function
   P_UART_USER_DAT('\r');   // \r = new line

#endif //(PCF8574_PIO_0_HERE)

// toggle Test Line von PIO (in DOPULSE_0)
#ifdef PCA9535D_PIO_0_HERE
   // invert one Bit ^= exor
   ui8_PCA9535D_PIO_0_VAL_P0_WR ^= PCA9535D_PIO_0_TEST_OUT;  // das bit x wir invertiert
           
   //set "DO Bit" for write 2 Bytes to PIO_0
   b_PCA9535D_PIO_0_DO_WR_OUT_VAL = true;
#endif //(PCA9535D_PIO_0_HERE)


   } //end (if (b_AutoSend_0_On))

   } //end (if (b_DOPULSE_0_DOTI_BIT))
#endif //(DOPULSE_0_HERE)

//*******************************************************************b
//* DOPULSE_1 (in MAIN)                 Read PIO_0
#ifdef DOPULSE_1_HERE
//*******************************************************************c
#pragma weh_all3 "      DOPULSE_1 (in MAIN) Read PIO_0\n"

   if (b_DOPULSE_1_DOTI_BIT) {
       b_DOPULSE_1_DOTI_BIT = false;
       //HERE:  DOPULSE_1 : 

       //* PCA9535D_PIO_0 Read (in DOPULSE_1)
#ifdef PCA9535D_PIO_0_HERE

      // zuerst write commandbyte
      ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_INP0;
      I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 1);

      // read I2C two values beginning with PCA9535D_PIO_COM_INP0
      I2C_MAS_0_READ(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 2);

      // Store Values in PIO_0 Variables
      ui8_PCA9535D_PIO_0_VAL_P0_RD = ui8_I2C_MAS_0_Array[0];
      ui8_PCA9535D_PIO_0_VAL_P1_RD = ui8_I2C_MAS_0_Array[1];

      // jetzt noch fest auf OK setzen
      // To Change warum ?
      //"Set NVH "New Value Here" Bit"
      b_PCA9535D_PIO_0_NVH = true;

#endif //(PCA9535D_PIO_0_HERE)

     
   } //end (b_DOPULSE_1_DOTI_BIT)
#endif //(DOPULSE_1_HERE)

//*******************************************************************b
//* DOPULSE_MCP3428_ADC_0_CH_3 (in MAIN)         Read ADC 0 CH 3
#ifdef DOPULSE_MCP3428_ADC_0_CH_3_HERE
//*******************************************************************c
#pragma weh_all3 "      DOPULSE_MCP3428_ADC_0_CH_3_HERE (in MAIN) Read ADC 0 CH 3\n"

   if (b_DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT) {
       b_DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT = false;
       //HERE:  DOPULSE_MCP3428_ADC_0_CH_3 : 

       // MCP3428_ADC_0 Read
#ifdef MCP3428_ADC_0_HERE

      // jetzt immer vorher Config device
      ui8_I2C_MAS_0_Array[0] = MCP3428_ADC_CONF_WR_CH3_ONE_16BIT_G1;
      I2C_MAS_0_WRITE(MCP3428_ADC_0_ADR, ui8_I2C_MAS_0_Array, 1);

      // I2C read
      I2C_MAS_0_READ(MCP3428_ADC_0_ADR, ui8_I2C_MAS_0_Array, 2);

      // jetzt noch fest auf OK setzen
      // To Change warum ... wann ?
      //"Set NVH "New Value Here" Bit"
      b_MCP3428_ADC_0_CH_3_NVH = true;

      // Store Values in ADC_0_CH_3 Variables
      ui8_MCP3428_ADC_0_CH_3_VAL_H = ui8_I2C_MAS_0_Array[0];
      ui8_MCP3428_ADC_0_CH_3_VAL_L = ui8_I2C_MAS_0_Array[1];

#endif //(MCP3428_ADC_0_HERE)


   } // (end  b_DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT)
#endif //(DOPULSE_MCP3428_ADC_0_CH_3_HERE)

//*******************************************************************b
//* I2C Read Bewegungsmelder (in MAIN)
#ifdef BEWEG_0_HERE
//*******************************************************************c
#ifdef PCF8574_PIO_0_HERE

// read I2C Beweg Input
   I2C_MAS_0_READ(&t_I2C0,PCF8574_PIO_0_ADR, aui8_I2C_MAS_0_Array, 1);
   
//   b_Beweg0_Now = aui8_I2C_MAS_0_Array[0] & 0x02 >> 2;

//#ifdef NO
   if ((aui8_I2C_MAS_0_Array[0] & 0x02) == 0) {
//   SPEAKER_0_TONHIGH(); //weh_function
     b_Beweg0_Now = false;
   }
   else {
//   SYS_SPEAKER_0_OFF(); //weh_function
     b_Beweg0_Now = true;
   }
//#endif   

     
//Check if: Beweg ACTIVE Edge detected
   if (!b_Beweg0_Now && b_Beweg0_Old) {
      // Beep      
         SPEAKER_0_TONHIGH(); //weh_function

      // save actual Value   
         ui32_Beweg_is_Active_Counter_Val = ui32_Timing_Counter_T0INT_Grund;  
         
         b_Bewegung_was_Here = true;
   
      // write values to UART = passive Time
         P_UART_USER_DAT('P');   // \r = new line
         P_UART_USER_DAT('\t');   // \r = new line
         P_UART_USER_DEZ_4B(ui32_Beweg_is_Active_Counter_Val - ui32_Beweg_is_Passive_Counter_Val,6,T_SPACE); //weh_function 
         //P_UART_USER_DAT('\r');   // \r = new line
   }

//Check if: Beweg PASSIVE Edge detected
   if (b_Beweg0_Now && !b_Beweg0_Old) {
      // Beep      
      //   SPEAKER_0_TONHIGH(); //weh_function
         
      // save actual Value   
         ui32_Beweg_is_Passive_Counter_Val = ui32_Timing_Counter_T0INT_Grund;  

         b_Bewegung_was_Here = true;
         
      // write values to UART = active Time
         P_UART_USER_DAT('\t');   // \r = new line
         P_UART_USER_DAT('A');   // \r = new line
         P_UART_USER_DAT('\t');   // \r = new line
         P_UART_USER_DEZ_4B(ui32_Beweg_is_Passive_Counter_Val - ui32_Beweg_is_Active_Counter_Val,6,T_SPACE); //weh_function 
         P_UART_USER_DAT('\r');   // \r = new line
         
   }

//always:
   b_Beweg0_Old = b_Beweg0_Now;

   if (b_Bewegung_was_Here) {
      b_Bewegung_was_Here = false; 
      // pro bewegung 2 mal rising und falling !!!
      //SPEAKER_0_TONHIGH(); //weh_function
//      P_UART_USER_DAT('\r');   // \r = new line
   }

#endif //(PCF8574_PIO_0_HERE)
#endif //(BEWEG_0_HERE)

//* MCP3428_ADC_0 Check (in MAIN)
//*******************************************************************b
#ifdef MCP3428_ADC_0_HERE
// Check UTD up to date Variable
//*******************************************************************c
   if (b_MCP3428_ADC_0_CH_3_NVH) {
      // Clr
      b_MCP3428_ADC_0_CH_3_NVH = false;

#ifdef MCP3428_ADC_0_CD_3_PRINT2UU   
      // Send to UartUser
      P_UART_USER_HEX_1B(ui8_MCP3428_ADC_0_CH_3_VAL_H); //weh_function
      P_UART_USER_DAT('\t');   // \t = tab
      P_UART_USER_HEX_1B(ui8_MCP3428_ADC_0_CH_3_VAL_L); //weh_function
      P_UART_USER_DAT('\r');   // \r = new line
#endif      

#ifdef SYS_SPEAKER_0_HERE

      // merge to 16 Bit Values in Variables
      ui16_A = ui8_MCP3428_ADC_0_CH_3_VAL_H  * 256 + ui8_MCP3428_ADC_0_CH_3_VAL_L;
      // merge to 16 Bit Constants
      ui16_B = kui8_MCP3428_ADC_0_CH_3_THR_H * 256 + kui8_MCP3428_ADC_0_CH_3_THR_L;

if (ui8_MCP3428_ADC_0_CH_3_VAL_H >= 0x25) {

   // Store Values in SPEAK_VALREG Variables
   ui16_SPEAKER_0_VALREG_H = ui16_A / 100; 
   ui16_SPEAKER_0_VALREG_L = ui16_A / 100;

// calculated time for sound
   ui8_TIMER_SPEAKER_0_REG = SPEAKER_0_T_HIGH_TIM_VAL;

   b_SPEAKER_0_RUN_BIT = true;
   b_TIMER_SPEAKER_0_RUN_BIT = true;
}   

//#ifdef NO
// teste ob ADC Value über treshold
      if (ui16_A >= ui16_B) {
         //SPEAKER_0_TONHIGH(); //weh function

// clr display 7 Segment
#ifdef PCA9535D_PIO_0_HERE
         // clr one Bit &= ~ and with invertet bit x
         ui8_PCA9535D_PIO_0_VAL_P1_WR &= ~PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_A;

         //set "DO Bit" for write 2 Bytes to PIO_0
         b_PCA9535D_PIO_0_DO_WR_OUT_VAL = true;
#endif //(PCA9535D_PIO_0_HERE)
      }   
//#endif //(NO)


//      else {   
//         SPEAKER_0_OFF(); //weh_function
//      }   
#endif //(SYS_SPEAKER_0_HERE)
         
   }

#endif //(MCP3428_ADC_0_HERE)

//*******************************************************************b
//* PCA9535D_PIO_0 NVH "New Value Here" Send to UartUser Check KEY_0 (in MAIN)
#ifdef PCA9535D_PIO_0_HERE
//*******************************************************************c
   //"Check NVH "New Value Here" Bit"

   if (b_PCA9535D_PIO_0_NVH) {
      b_PCA9535D_PIO_0_NVH = false;
      //HERE: PCA9535D_PIO_0 a new Value is in PIO_0 Array
   
      // Send Message to UartUser
#ifdef PCA9535D_PIO_0_PRINT2UU   
      P_UART_USER_HEX_1B(ui8_PCA9535D_PIO_0_VAL_P0_RD); //weh_function
      P_UART_USER_DAT('\t');   // \t = tab
      P_UART_USER_HEX_1B(ui8_PCA9535D_PIO_0_VAL_P1_RD); //weh_function
      P_UART_USER_DAT('\r');   // \r = new line
#endif      

      // Check if Key was pressed and then Speaker Signal
#ifdef SYS_SPEAKER_0_HERE
      if ((ui8_PCA9535D_PIO_0_VAL_P0_RD & PCA9535D_PIO_0_KEY0) == ZERO) {
      // HERE: Sensortaste ist LOW   
         
         // Ton
         SPEAKER_0_TONHIGH(); //weh function
         
         // Sieben Segment LED Anzeige
         // Invert one Bit ^= exor Das bit BCD Driver 0 Input Line A wir invertiert
         ui8_PCA9535D_PIO_0_VAL_P1_WR ^= PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_A;
           
         // Set "DO Bit" for write 2 Bytes to PIO_0
         b_PCA9535D_PIO_0_DO_WR_OUT_VAL = true;
      }   
#endif
         
  } //(UTD up to date Variable)
#endif //(PCA9535D_PIO_0_HERE)



//******************************************a
// fr1_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

wird nur einmal ausgefuehrt **** ANFANG 

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      fr1_ALL_B.c \n"

//***********************************************d

//*******************************************************************b
//* T0INT_HERE (in fr1_ALL_B)
#ifdef T0INT_HERE
//*******************************************************************c
#pragma weh_all3 "   T0INT_HERE                  (in fr1_ALL_B)\n"

// init T0INT Counter
// ui8_T0INTCOU_P = T0INTA_G_F_Z_SOLL / T0INTA_N_F_Z_SOLL;
   ui8_T0INTCOU_P = 1;
   ui8_T0INTCOU_P00A = 1;
   ui8_T0INTCOU_P00A00B = 1;
   ui8_T0INTCOU_P00A00B00C = 1;
   ui8_T0INTCOU_P00A00B00C00D = 1;
   ui8_T0INTCOU_P00A00B00C00D00E = 1;
#endif //(T0INT_HERE)


//*******************************************************************b
// print first Tokens to UART (in fr1_ALL_B)
#ifdef UART_USER_BUFFER_TX_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER_BUFFER_TX_HERE    Send FIRST Token to start TX Interrupt ! \n"

   // send first Value direct to UART
   // wichtig wegen ersten TX Interrupt

   // write / fill first Token in Buffer
   //P_UART_USER_DAT('§');
   P_UART_USER_DAT(T_SPACE);

   // then
   // sendet one Token direct to start TYD Interrupt machinery
   
   // die nächsten Zeichen werden aber wieder in den Buffer schrieben und erst gesendet wenn der einmal voll ist
   // MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'&');
   // MAP_UARTCharPut(UART_USER_UART_BASE,'&');
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,T_SPACE);
    
//#endif //(UART_USER_BUFFER_TX_HERE)
#else
#pragma weh_all3 "NO UART_USER_BUFFER_TX_HERE    NO FIRST Token for start TX Interrupt ! \n"
#endif //(UART_USER_BUFFER_TX_HERE)


//*******************************************************************b
//* MONITOR Init (in fr1_PROJECT_PT4C_XL_EVAL)
#ifdef MONITOR_0_HERE
//*******************************************************************c
#pragma weh_all3 "   MONITOR_0_HERE \n"

//#ifdef MONITOR_0_PROTO_FULLH_REC
   ui8_MONITOR_0_PROTO_PLACE = 0;
//#endif //(MONITOR_0_PROTO_FULLH_REC)

#else
#pragma weh_all3 "NO MONITOR_0_HERE \n"
#endif //(MONITOR_0_HERE)

//*******************************************************************b
//* BLINK_MAIN_HERE (in fr1_ALL_B)
#ifdef BLINK_MAIN_HERE
//*******************************************************************c
   // init
   ui32_Blink_Main_Counter = BLINK_MAIN_VAL;
#endif //(BLINK_MAIN_HERE)

//*******************************************************************b
//* SYS_LED_WORK_OO_HERE               On Off Bit set
#ifdef SYS_LED_WORK_OO_HERE
//*******************************************************************c
   b_SYS_LED_WORK_OO_ON_BIT = true;
#endif //(SYS_LED_WORK_OO_HERE)

//*******************************************************************b
//* do SPEAKER_0_BEEP_AT_START (in fr1_ALL_B)    do Beep
#ifdef SPEAKER_0_BEEP_AT_START
//*******************************************************************c
#ifdef SYS_SPEAKER_0_HERE
#pragma weh_all3 "   SPEAKER_0_BEEP_AT_START     (in fr1_ALL_B)\n"
   SPEAKER_0_TONHIGH();
   //SPEAKER_0_TONLOW();

#else
#pragma weh_all3 "NO SPEAKER_0_BEEP_AT_START \n"
#endif //(SYS_SPEAKER_0_HERE)
#endif //(SPEAKER_0_BEEP_AT_START)

//*******************************************************************b
//* do SPEAKER_1_BEEP_AT_START (in fr1_ALL_B)    do Beep
#ifdef SPEAKER_1_BEEP_AT_START
//*******************************************************************c
#ifdef SYS_SPEAKER_1_HERE
#pragma weh_all3 "   SPEAKER_1_BEEP_AT_START     (in fr1_ALL_B)\n"
   SPEAKER_1_TONHIGH();
   //SPEAKER_1_TONLOW();
#else
#pragma weh_all3 "NO SPEAKER_1_BEEP_AT_START \n"
#endif //(SYS_SPEAKER_1_HERE)
#endif //(SPEAKER_1_BEEP_AT_START)

//*******************************************************************b
//* Speaker Line 0 OFF
#ifdef SYS_SPEAKER_0_HERE
//*******************************************************************c
   SYS_SPEAKER_0_OFF(); //weh_function
#endif //(SYS_SPEAKER_0_HERE)

//*******************************************************************b
//* Speaker Line 1 OFF
#ifdef SYS_SPEAKER_1_HERE
//*******************************************************************c
   SYS_SPEAKER_1_OFF(); //weh_function
#endif //(SYS_SPEAKER_1_HERE)


//******************************************a
// am_ALL_B.c
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
#pragma weh_all3 "File:      am_ALL_B.c \n"
//***********************************************d

// Programm in Main
#undef KLAPPE0

#ifdef NO
;* MAIN_TEST_OUTPUT_LINE (bevore RESET in MAIN)
#ifdef MAIN_TEST_OUTPUT
         cpl MAIN_TEST_OUTPUT_LINE
#endif ;(MAIN_TEST_OUTPUT)

;* NOP_TEST_OUTPUT_LINE (bevore RESET in MAIN)
#ifdef NOP_TEST_OUTPUT
         setb NOP_TEST_OUTPUT_LINE
         nop
         clr NOP_TEST_OUTPUT_LINE
#endif ;(NOP_TEST_OUTPUT)

;* WATCHDOG (bevore RESET in MAIN)
#ifdef WATCHDOG
         lcall WDOG
#endif ;(WATCHDOG)


;***********************************************d
;"- always necessary ! -"       allways includet
; It contains everything that is executed AFTER the RESET in MAIN
; all am_xxx.asm Files (was fa Files !)
; am_File  : Is been included in the MAIN Loop (like fa)
;.echo " include am_RESET_DELCOU.asm \n"
.include "..//MAIN/am_RESET_DELCOU.asm"

; *** HINWEIS ***
; in am_RESET_DELCOU.asm weden alle am_xxx.asm includiert
; und zwar NACH dem RESET !!!
; d.h. alle am_xxx.asm werden erst ausgefuehrt wenn der RESET abgeschlossen ist
; Wenn der Reset Delay Counter nicht vorhanden ist wird das am_xxx.asm auch includiert
;***********************************************d

#endif //(NO)



#ifdef LOOP_MAIN_WHILE1_HERE

      LOOP_MAIN_WHILE1(); //weh_function

#endif //(LOOP_MAIN_WHILE1_HERE)


//*******************************************************************b
//* MONITOR_0 Receive BY_MAINPOLL (in MAIN)
#ifdef UART_USER_REC_BY_MAINPOLL
//*******************************************************************b
   // Read a character and Do something
// Read a character
   if (UARTCharsAvail(UART_USER_UART_BASE)) {
   UART_USER_RECEIVE_DAT(); //weh function in MAIN
   }
   
#endif //(UART_USER_REC_BY_MAINPOLL)

//*******************************************************************b
//* Monitor No Header MONITOR_0_P_NOH_PROTO_SINGLE (in MAIN)
#ifdef MONITOR_0_P_NOH_PROTO_SINGLE
//*******************************************************************c
// schaue ob ein neues Proto da ist
   if (b_Monitor_0_PROTO_SINGLE_HERE) {

// init pointer variables to "nothing"
   p_To_Funct = DO_NOTHING;            //default weh_function
   pac_UartText = ac_Text_No_Text;      // no text

// Interpret Proto    Ändert p_To_Funct und pac_UartText
   MONITOR_0_INTERPRET_PROTO_IN_MAIN(ui8_Monitor_0_PROTOTOKEN);   //weh_function  (Auswerten der Proto Info)

// print the UART Monitor Text
#ifdef PRINT_UART_USER_STRING
   P_UART_USER_STR (pac_UartText);
#endif

// call to function "void function void"
   p_To_Funct(); //pointer call to weh_function

   } //end (if (b_Monitor_0_PROTO_SINGLE_HERE))

#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)

//*******************************************************************b
//* TX_Wait_Error (in MAIN)
#ifdef UART_USER_BUFFER_TX_HERE
//*******************************************************************c
   if (b_Uart_TX_Wait_Error) {
      // ich muss eine andere LED wählen ! Ich mach das jetzt so weil es mir das sonst raushaut !
      // ich muss das bit mit Timer wieder abschalten !
      // man merkt an der Geschwindigkeit von MAIN wenn diese LED CPL wird 
      // LED cpl
      SYS_LED_ERROR_CPL(); //weh_function
//      SYS_LED_ERROR_CPL(); //weh_function
//      SYS_LED_ERROR_CPL(); //weh_function
//      SYS_LED_ERROR_CPL(); //weh_function
//      SYS_LED_ERROR_CPL(); //weh_function
   } 
#endif //(UART_USER_BUFFER_TX_HERE)
        
//*******************************************************************b
//* TIMER_SPEAKER_0_DOTI_BIT (in MAIN)
#ifdef TIMER_SPEAKER_0_HERE
//*******************************************************************c
#ifdef TIMER_SPEAKER_0_DOTI_IN_MAIN  // do steered by bit in main
   if (b_TIMER_SPEAKER_0_DOTI_BIT == true) {
      b_TIMER_SPEAKER_0_DOTI_BIT = false;
      
      // evtl die Timer doti_Funct direkt hier einbauen !
      TIMER_SPEAKER_0_DOTI_FUNKT();
   }   
#endif //(TIMER_SPEAKER_0_DOINC_IN_MAIN)
#endif //(TIMER_SPEAKER_0_HERE)

//*******************************************************************b
//* TIMER_SPEAKER_0_READY_BIT (in MAIN)
#ifdef TIMER_SPEAKER_0_HERE
//*******************************************************************c
   if (b_TIMER_SPEAKER_0_READY_BIT == true) {
   //;HERE: Timer is ready
   //TIMER_SPEAKER_0_RUN_BIT ist schon von T0INT geloescht worden
   b_TIMER_SPEAKER_0_READY_BIT = false;
         
//******
// TIMER_SPEAKER_0 INFO: Speaker Ton abschalten
//******
// speaker Ton abschalten

#ifdef SYS_SPEAKER_0_HERE
   SPEAKER_0_OFF(); //weh_function
#endif
   } //(if (b_TIMER_SPEAKER_0_READY_BIT == true))
#endif //(TIMER_SPEAKER_0_HERE)

//*******************************************************************b
//* TIMER_TIMEOUT_MONITOR_0_DOTI_BIT (in MAIN)
#ifdef TIMER_TIMEOUT_MONITOR_0_HERE
//*******************************************************************c
#ifdef TIMER_TIMEOUT_MONITOR_0_DOTI_IN_MAIN  // do steered by bit in main
   if (b_TIMER_TIMEOUT_MONITOR_0_DOTI_BIT == true) {
      b_TIMER_TIMEOUT_MONITOR_0_DOTI_BIT = false;
      
      // evtl die Timer doti_Funct direkt hier einbauen !
      TIMER_TIMEOUT_MONITOR_0_DOTI_FUNKT();
   }   
#endif //(TIMER_TIMEOUT_MONITOR_0_DOINC_IN_MAIN)
#endif //(TIMER_TIMEOUT_MONITOR_0_HERE)

//*******************************************************************b
//* TIMER_TIMEOUT_MONITOR_0_READY_BIT (in MAIN)
#ifdef TIMER_TIMEOUT_MONITOR_0_HERE
//*******************************************************************c
   if (b_TIMER_TIMEOUT_MONITOR_0_READY_BIT == true) {
   //;HERE: Timer is ready
   //TIMER_TIMEOUT_MONITOR_0_RUN_BIT ist schon von T0INT geloescht worden
   b_TIMER_TIMEOUT_MONITOR_0_READY_BIT = false;
         
//******
// TIMER_TIMEOUT_MONITOR_0 INFO:       evtl. Speaker Ton
//******                               Protokoll Beenden
//                                     evtl. Protokoll End Token ausgeben

#ifdef SYS_SPEAKER_0_HERE
   SPEAKER_0_TONHIGH(); //weh function
#endif

// Print Token
   P_UART_USER_DAT (TIMEOUT_MONITOR_0_TOKEN); //weh function
   
   MONITOR_0_DELPROTO(); //weh_function
   
   } //(if (b_TIMER_SPEAKER_0_READY_BIT == true))
#endif //(TIMER_SPEAKER_0_HERE)




//*******************************************************************b
//* BLINK_INT_HERE (in MAIN)
#ifdef BLINK_INT_HERE
//*******************************************************************c
#ifdef BLINKINT_DOTI_IN_MAIN          //in der Timer_INT Routine wird nur ein Umschaltbit gesetzt
#pragma weh_all3 "      BLINK_INT_HERE  (in MAIN) \n"

   if (b_SYS_LED_WORK_OO_ON_BIT) {   
      
      if (b_BLINKINT_DOTI_BIT == true) {
         b_BLINKINT_DOTI_BIT = false;
     
         // LED cpl
         SYS_LED_WORK_CPL(); //weh_function
      }   
   }      
#endif //(BLINKINT_DOTI_IN_MAIN)
#endif //(BLINK_INT_HERE)
        
//*******************************************************************b
//* BLINK_MAIN_HERE (in MAIN)
#ifdef BLINK_MAIN_HERE
//*******************************************************************c
#pragma weh_all3 "      BLINK_MAIN_HERE (in MAIN) \n"
   
   ui32_Blink_Main_Counter --;

   if (b_SYS_LED_WORK_OO_ON_BIT) {   

      if (ui32_Blink_Main_Counter == 0) {
         ui32_Blink_Main_Counter = BLINK_MAIN_VAL;
            
         // LED cpl
         SYS_LED_WORK_CPL(); //weh_function
      }   
   }
#endif //(BLINK_MAIN_HERE)

//*******************************************************************b
//* DOPULSE_TIMCOUMMAIN (in MAIN) print Timing Counter Main
#ifdef DOPULSE_TIMCOUMMAIN_HERE
//*******************************************************************c
#pragma weh_all3 "      DOPULSE_TIMCOUMMAIN_HERE (in MAIN)\n"

   if (b_DOPULSE_TIMCOUMMAIN_DOTI_BIT) {
       b_DOPULSE_TIMCOUMMAIN_DOTI_BIT = false;
      //HERE:  DOPULSE_TIMCOUMMAIN

//* TIMING_COUNTER_MAIN Print (in DOPULSE_TIMCOUMMAIN)
#ifdef TIMING_COUNTER_MAIN_IN_DOPULSE_TIMCOUMMAIN

   // Send to UART
#ifdef UART_USER_HERE
   // sende den Main Timing counter zum schauen wie oft
   // die Main Schleife in dem Zeitraum von DOPULSE_TIMCOUMMAIN durchlaufen wird
   P_UART_USER_DEZ_4B(ui32_Timing_Counter_Main,6,T_SPACE); //weh_function 
   P_UART_USER_DAT('\r');   // \r = new line
#endif //(UART_USER_HERE)
   
   // reset counter
   ui32_Timing_Counter_Main = 0;
#endif //(TIMING_COUNTER_MAIN_IN_DOPULSE_TIMCOUMMAIN)
     
   } // (end  b_DOPULSE_TIMCOUMMAIN_DOTI_BIT)
#endif //(DOPULSE_TIMCOUMMAIN_HERE)

//*******************************************************************b
//* TIMING_COUNTER_MAIN Inc (in MAIN)  Inc Timing Counter
#ifdef TIMING_COUNTER_MAIN_HERE
//*******************************************************************c
   //inc Timing_Counter_Main
   ui32_Timing_Counter_Main ++;
#endif //(TIMING_COUNTER_MAIN_HERE)

//*******************************************************************b
//* T0INT_COU_TEST (in MAIN)
#ifdef T0INT_COU_TEST
//*******************************************************************c
   if (b_T0INT_COU_TEST_DOTI_BIT) {
//      P_UART_USER_DAT('\r');   // \r = new line
//      P_UART_USER_DAT('P');   // \r = new line
//      P_UART_USER_HEX_1B(ui8_T0INTCOU_P); //weh_function 
//      P_UART_USER_DAT('\r');   // \r = new line
//      P_UART_USER_DAT('A');   // \r = new line
//      P_UART_USER_HEX_1B(ui8_T0INTCOU_P00A); //weh_function 
      P_UART_USER_DAT('\r');   // \r = new line
      P_UART_USER_DAT('B');   // \r = new line
      P_UART_USER_HEX_1B(ui8_T0INTCOU_P00A00B); //weh_function 
      P_UART_USER_DAT('\r');   // \r = new line
      P_UART_USER_DAT('C');   // \r = new line
      P_UART_USER_HEX_1B(ui8_T0INTCOU_P00A00B00C); //weh_function 
      P_UART_USER_DAT('\r');   // \r = new line
      P_UART_USER_DAT('D');   // \r = new line
      P_UART_USER_HEX_1B(ui8_T0INTCOU_P00A00B00C00D); //weh_function 
      P_UART_USER_DAT('\r');   // \r = new line
      P_UART_USER_DAT('E');   // \r = new line
      P_UART_USER_HEX_1B(ui8_T0INTCOU_P00A00B00C00D00E); //weh_function 
      P_UART_USER_DAT('\r');   // \r = new line
   }
#endif //(T0INT_COU_TEST)



//*******************************************************************b
//* PCA9535D_PIO_0 WIRTE (in MAIN)     If "DO Bit" is On
#ifdef PCA9535D_PIO_0_HERE
//*******************************************************************c
   // Check "DO Bit" Bit
   if (b_PCA9535D_PIO_0_DO_WR_OUT_VAL) {
      b_PCA9535D_PIO_0_DO_WR_OUT_VAL = false;

      // write two output Bytes
      ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_OUTP0;       //First Output goes to P0
      ui8_I2C_MAS_0_Array[1] = ui8_PCA9535D_PIO_0_VAL_P0_WR;   //Actual Value for P0
      ui8_I2C_MAS_0_Array[2] = ui8_PCA9535D_PIO_0_VAL_P1_WR;   //Actual Value for P1
      I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 3);
   }
#endif //(PCA9535D_PIO_0_HERE)



//end
//***************************k
#undef KLAPPE1




//******************************************a
// afg_MONITOR_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_MONITOR_0.c \n"
//***********************************************d

//********************************j
//* Prototypes

void UART_USER_SEND_INC();
void UART_USER_TEST_2();
void UART_USER_F1B_TEST_0();


//*******************************************************************b
//* MONITOR_0_DELPROTO(); //weh_function
void MONITOR_0_DELPROTO(void) {
//*******************************************************************c

//#ifdef MONITOR_0_PROTO_FULLH_REC
// auch bei NOH ! Auch bei Proto_SIngle
   ui8_MONITOR_0_PROTO_PLACE = 0;
//#endif //(MONITOR_0_PROTO_FULLH_REC)

#ifdef MONITOR_0_P_NOH_PROTO_SINGLE   
   b_Monitor_0_PROTO_SINGLE_HERE = false;
#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)

#ifdef MONITOR_0_P_NOH_PROTO_1BYTE
   b_Monitor_0_PROTO_1BYTE_HERE = false;
#endif //(MONITOR_0_P_NOH_PROTO_1BYTE)

#ifdef MONITOR_0_P_NOH_PROTO_2BYTE
   b_Monitor_0_PROTO_2BYTE_HERE = false;
#endif //(MONITOR_0_P_NOH_PROTO_2BYTE)

} //end function

//*******************************************************************b
//* MONITOR_0_PROTO_DONE(); //weh_function
#ifdef F_MONITOR_0_PROTO_DONE
// am ende eines fertigen protokolls
// macht auch DELPROTO
//*******************************************************************c
void MONITOR_0_PROTO_DONE() {

// switch off Timeout Timer
   b_TIMER_TIMEOUT_MONITOR_0_RUN_BIT = false;

// Print Token
   P_UART_USER_DAT (DONE_MONITOR_0_TOKEN); //weh function

// lösche Proto Info weil Prot abgearbeitet wurde
   MONITOR_0_DELPROTO(); //weh_function

} //end function
#endif //(F_MONITOR_0_PROTO_DONE)

//*******************************************************************b
//* MONITOR_0_BUILD_PROTO_SET_BITS(uint8_t ui8_Ori_Value) //weh_function  (Set Bits auswerten dann in MAIN)
#ifdef F_MONITOR_0_BUILD_PROTO_SET_BITS
//*******************************************************************c
void MONITOR_0_BUILD_PROTO_SET_BITS(uint8_t ui8_Ori_Value) {

//#IFDEF PROTO_REC_TIME_ERR
// immer wenn ein Zeichen da ist wird der Counter mit default geladen
//         mov TIMER_REC_PROTO_COUNTER,#SER_R_TIMEO_LAB_L_0  ;reset the timer after every token
//#ENDIF ;(PROTO_REC_TIME_ERR)

   // token is in ui8_Ori_Value

// Built Protocol (with Goto)
#undef KLAPPE0
//***************************k
   //HERE: PROTO_PLACE = 0
#ifdef MONITOR_0_P_NOH_PROTO_SINGLE   
   if(ui8_MONITOR_0_PROTO_PLACE == 0) {
      ui8_Monitor_0_PROTOTOKEN = ui8_Ori_Value;
      if(ui8_Monitor_0_P_SOLL_Bytes == 0) { 
         b_Monitor_0_PROTO_SINGLE_HERE = true;
         ui8_MONITOR_0_PROTO_PLACE = 0;
         goto END_OF_PROTO_DECODE;
      }
   }
#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)

#ifdef MONITOR_0_P_NOH_PROTO_1BYTE
   if(ui8_MONITOR_0_PROTO_PLACE == 1) {
      ui8_Monitor_0_BYTE0 = ui8_Ori_Value;
      if(ui8_Monitor_0_P_SOLL_Bytes == 1) { 
         b_Monitor_0_PROTO_1BYTE_HERE = true;
         ui8_MONITOR_0_PROTO_PLACE = 0;
         goto END_OF_PROTO_DECODE;
      }
   }
#endif //(MONITOR_0_P_NOH_PROTO_1BYTE)

#ifdef MONITOR_0_P_NOH_PROTO_2BYTE
   if(ui8_MONITOR_0_PROTO_PLACE == 2) {
      ui8_Monitor_0_BYTE1 = ui8_Ori_Value;
      if(ui8_Monitor_0_P_SOLL_Bytes == 2) { 
         b_Monitor_0_PROTO_2BYTE_HERE = true;
         ui8_MONITOR_0_PROTO_PLACE = 0;
         goto END_OF_PROTO_DECODE;
      }
   }
#endif //(MONITOR_0_P_NOH_PROTO_2BYTE)

// korrigiere PROTO_PLACE  
   if(ui8_MONITOR_0_PROTO_PLACE > ui8_Monitor_0_P_SOLL_Bytes) { 
      ui8_MONITOR_0_PROTO_PLACE = 0;
      goto END_OF_PROTO_DECODE;
   }
   
// Nur wenn KEIN Proto gefunden wurde Inc PROTO_PLACE
   ui8_MONITOR_0_PROTO_PLACE ++;

// sprungmarke
END_OF_PROTO_DECODE:;

//***************************k
#undef KLAPPE1


#ifdef V_SREC_SUM          //varialble (reg) Pruefsumme empfangene Bytes
         //SREC_SUM = ui8_Value;    //erste Zahl der Pruefsumme
         SREC_SUM = ui8_Ori_Value;    //erste Zahl der Pruefsumme
#endif //(V_SREC_SUM)


} //end function
#endif //(F_MONITOR_0_BUILD_PROTO_SET_BITS)

//*******************************************************************b
//* MONITOR_0_INTERPRET_PROTO_DIRECT(uint8_t ui8_Ori_Value)   //weh_function  (Auswerten Direkt)
#ifdef F_MONITOR_0_INTERPRET_PROTO_DIRECT
// auswerten direkt in der Interrupt Routine
// geht auch wenn Main hängt
// oder
// auswerten direkt in der Main Routine
// wenn UA..RT_USER_RECEIVE_DAT beim Pollen verwendet wird
//*******************************************************************c
void MONITOR_0_INTERPRET_PROTO_DIRECT(uint8_t ui8_Ori_Value) {

// Auswerten der Protokolle (hier: auch wenn die MAIN hängt !)

//* Befehle 0 Byte
#ifdef MONITOR_0_P_NOH_PROTO_SINGLE

   if(b_Monitor_0_PROTO_SINGLE_HERE) {
  
//***********************************************d
#ifdef MONITOR_0_F0B_LOOP_WHILE1_DIRECT
      if (ui8_Monitor_0_PROTOTOKEN == MONITOR_0_F0B_LOOP_WHILE1_TOK) {
         MONITOR_0_PROTO_DONE(); //weh_function

         //LOOP_MAIN_WHILE1(); //weh_function
         b_LoopMainWhile1 = true;
      }
#endif //(MONITOR_0_F0B_LOOP_WHILE1_DIRECT)
   
//***********************************************d
#ifdef MONITOR_0_F0B_NO_LOOP_WHILE1_DIRECT
      if (ui8_Monitor_0_PROTOTOKEN == MONITOR_0_F0B_NO_LOOP_WHILE1_TOK) {
         MONITOR_0_PROTO_DONE(); //weh_function

         b_LoopMainWhile1 = false;
         //SPEAKER_0_TONHIGH(); //weh function
      }
#endif //(MONITOR_0_F0B_NO_LOOP_WHILE1_DIRECT)
   
//***********************************************d
#ifdef MONITOR_0_F0B_SEND_INC_DIRECT
      if (ui8_Monitor_0_PROTOTOKEN == MONITOR_0_F0B_SEND_INC_TOK) {
         MONITOR_0_PROTO_DONE(); //weh_function

         UART_USER_SEND_INC(); //weh_function
      }
#endif //(MONITOR_0_F0B_SEND_INC_DIRECT)
   
//***********************************************d
#ifdef MONITOR_0_F0B_TEST_2_DIRECT
      if (ui8_Monitor_0_PROTOTOKEN == MONITOR_0_F0B_TEST_2_TOK) {
         MONITOR_0_PROTO_DONE(); //weh_function

         UART_USER_TEST_2(); //weh_function
      }
#endif //(MONITOR_0_F0B_TEST_2_DIRECT)
  
//end
//***************************k
      
   } //(if(b_Monitor_0_PROTO_SINGLE_HERE))   
#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)

//* Befehle 1 Byte
#ifdef MONITOR_0_P_NOH_PROTO_1BYTE

   if(b_Monitor_0_PROTO_1BYTE_HERE) {

//***********************************************d
#ifdef MONITOR_0_F1B_TEST_0_DIRECT
      if (ui8_Monitor_0_PROTOTOKEN == MONITOR_0_F1B_TEST_0_TOK) {
         MONITOR_0_PROTO_DONE(); //weh_function
         
         UART_USER_F1B_TEST_0(); //weh_function
      }
#endif //(MONITOR_0_F1B_TEST_0_DIRECT)

//end
//***************************k

   } //(   if(b_Monitor_0_PROTO_1BYTE_HERE))
#endif //(MONITOR_0_P_NOH_PROTO_1BYTE)

} //end function
#endif //(F_MONITOR_0_INTERPRET_PROTO_DIRECT)

//*******************************************************************b
//* MONITOR_0_INTERPRET_PROTO_IN_MAIN(uint8_t ui8_Ori_Value);   //weh_function  (Auswerten der Proto Info)
#ifdef F_MONITOR_0_INTERPRET_PROTO_IN_MAIN
// auswerten der Proto Info in Main
// wird in Main aufgerufen
//*******************************************************************c
void MONITOR_0_INTERPRET_PROTO_IN_MAIN(uint8_t ui8_Ori_Value) {

// Auswerten der Protokolle (in MAIN)
#undef KLAPPE0
//***********************************************d
#ifdef MONITOR_0_F0B_TEST_0_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_TEST_0_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function

      pac_UartText = ac_Text_Test_0; //Pointer auf String
#ifdef SYS_SPEAKER_0_HERE
      p_To_Funct = SPEAKER_0_TONHIGH; //weh_function
#endif //(SYS_SPEAKER_0_HERE)
   }
#endif //(MONITOR_0_F0B_TEST_0_BBIT)

//***********************************************d
#ifdef MONITOR_0_F0B_TEST_1_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_TEST_1_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function

      pac_UartText = ac_Text_Test_1;

#ifdef SYS_SPEAKER_0_HERE
      p_To_Funct = SPEAKER_0_TONLOW; //weh_function
#endif //(SYS_SPEAKER_0_HERE)
   }
#endif //(MONITOR_0_F0B_TEST_1_BBIT)

//***********************************************d
#ifdef MONITOR_0_F0B_LOOP_WHILE1_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_LOOP_WHILE1_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function

      p_To_Funct = LOOP_MAIN_WHILE1; //weh_function
   }
#endif //(MONITOR_0_F0B_LOOP_WHILE1_BBIT)

//***********************************************d
#ifdef MONITOR_0_F0B_NO_LOOP_WHILE1_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_NO_LOOP_WHILE1_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function

      b_LoopMainWhile1 = false;
   }
#endif //(MONITOR_0_F0B_NO_LOOP_WHILE1_BBIT)

//***********************************************d
#ifdef MONITOR_0_F0B_SEND_INC_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_SEND_INC_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function

      p_To_Funct = UART_USER_SEND_INC; //weh_function
   }
#endif //(MONITOR_0_F0B_SEND_INC_BBIT)

//***********************************************d
#ifdef MONITOR_0_F0B_AUTO_SEND_BBIT
   if (ui8_Ori_Value == MONITOR_0_F0B_AUTO_SEND_TOK) {
      MONITOR_0_PROTO_DONE(); //weh_function
     
#ifdef UART_USER_HERE
      b_AutoSend_0_On = !b_AutoSend_0_On;
#endif
   }
#endif //(MONITOR_0_F0B_AUTO_SEND_BBIT)

#undef KLAPPE1

//end
//***************************k


} //end function
#endif //(F_MONITOR_0_INTERPRET_PROTO_IN_MAIN)


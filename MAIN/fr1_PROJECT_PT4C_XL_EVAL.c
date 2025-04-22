
//******************************************a
// fr1_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

// frx_File  : Is been included in the MAIN Loop
// no RET or JMP necessary !

// wird nur einmal aufgeführt

#ifdef NO //Doku

   srand(time(NULL));

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      fr1_PROJECT_PT4C_XL_EVAL.c \n"

//***********************************************d


//*******************************************************************b
//* Tests SYS_LEDs ON OFF (in fr1_PROJECT_PT4C_XL_EVAL)
#undef KLAPPE0 
//*******************************************************************c
#pragma weh_all3 "   SYS_LED_WORK_HERE           (in fr1_xxx_B)\n"

#ifdef SYS_LED_WORK_HERE

   SYS_LED_WORK_ON();   //als hier on war ist nichts mehr gegangen :-O
                        // jetzt habe ich hier off und die LED_WORK blinkt wieder via T0INT
                        // wow
                        // wie wenn das ON den T0INT Zustand überschreibt ????
                        // jetzt habe ich da wieder ON und alles geht :-O
                        // wow komisch 
                        // und wieso blinkt die überhaupt ??? der Timer Int ist doch aus !
                        // ah ... Blinkmain ist ON !
                        // komisch ... jetzt geht wieder alles obwohl ich hier nur einmal OFF und dann wieder ON hatte :-O
                        
// leds OFF 
   SYS_LED_WORK_OFF();     //weh_function

#endif //(SYS_LED_WORK_HERE)

#ifdef SYS_LED_USER_HERE
   SYS_LED_USER_OFF();     //weh_function
#endif //(SYS_LED_USER_HERE)

#ifdef SYS_LED_ERROR_HERE
   SYS_LED_ERROR_OFF();    //weh_function
#endif //(SYS_LED_ERROR_HERE)

#undef KLAPPE1

//*******************************************************************b
//* AUTOSEND Init (in fr1_PROJECT_PT4C_XL_EVAL)
#ifdef AUTOSEND_0_HERE
//*******************************************************************c
#pragma weh_all3 "   AUTOSEND_0_HERE   ON        (in fr1_xxx_B)\n"
// b_AutoSend_0_On = false;
   b_AutoSend_0_On = true;
#endif   

//*******************************************************************b
// print Tokens to UART (in fr1_PROJECT_PT4C_XL_EVAL)
#ifdef UART_USER_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER_HERE    Send Test Tokens \n"
   
   P_UART_USER_DAT('S');
   P_UART_USER_DAT('P');
   P_UART_USER_DAT('U');
   P_UART_USER_DAT(0x56);  //= 'V'

// sendet auch direkt an UART (ohne Puffer)
#ifdef F_P_UART_USER_DAT_DIRECT
    P_UART_USER_DAT_DIRECT('W');
#else //(F_P_UART_USER_DAT_DIRECT)
   P_UART_USER_DAT('W');
#endif //(F_P_UART_USER_DAT_DIRECT)

   P_UART_USER_DAT(T_NEWLINE);
    
#endif //(UART_USER_HERE)

//*******************************************************************b
// BEWEG_0_HERE (in fr1_PROJECT_PT4C_XL_EVAL)
#ifdef BEWEG_0_HERE
//*******************************************************************c
    b_Bewegung_was_Here = false;
#endif //( BEWEG_0_HERE)

//*******************************************************************b
//* do Print TEXTE_AT_PROG_START_ON_UART_USER (in fr1_PROJECT_PT4C_XL_EVAL)
#ifdef TEXTE_AT_PROG_START_ON_UART_USER
#ifdef UART_USER_HERE
//*******************************************************************c
#pragma weh_all3 "   TEXTE_AT_PROG_START    Send Text \n"

   P_UART_USER_STR (s_Text_Newline); 
   
   P_UART_USER_STR (s_Text_Software_For);
   P_UART_USER_STR (s_Text_Project);
   P_UART_USER_STR (s_Text_Author);
   P_UART_USER_STR (s_Text_VersionDate);

   P_UART_USER_STR (s_Text_Newline); 

   
   P_UART_USER_STR (s_Text_VARI_TEXT1);
   P_UART_USER_DAT('\t');   // \r = new line

   P_UART_USER_DEZ_4B(T0INTA_D_VAL_G_TO_P,6,T_SPACE); //weh_function 
//   P_UART_USER_STR (s_Text_Newline); 
   P_UART_USER_DAT('\r');   // \r = new line

// evtl. ausgeben: T0INT_FREQ_DIVISOR  ui32SysClock / T0INTA_G_F_SOLL
// Defines Teiler für T0INT Stufe G to P
// D_VAL_G_TO_P T0INTA_G_F_Z_SOLL / T0INTA_P_F_Z_SOLL
   
#endif //(UART_USER_HERE)
#endif //(TEXTE_AT_PROG_START_ON_UART_USER)


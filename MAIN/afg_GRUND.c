
//******************************************a
// afg_GRUND.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_GRUND.c \n"
//***********************************************d


//*******************************************************************b
//* LOOP_MAIN_WHILE1         Controlled Killing of the program
#ifdef F_LOOP_MAIN_WHILE1
//*******************************************************************c
void LOOP_MAIN_WHILE1(void) { //;  //weh_function
// die Funktion hängt sich gesteuert auf
// fuer MAIN und INT Test
   //b_LoopMainWhile1 = true;

   while(b_LoopMainWhile1) {
   //diese Dauerschleife kann nur beendet werden wenn
   //mindestens eine funktion darin steht !
   //wenn keine Funktion darin steht dann hängt sich anscheinend
   //die MAIN komplett auf
   //SERINT geht dann auch nicht mehr
   //der SPEAKER_0_TONHIGH() wird nicht mehr abgeschaltet !!!
   //d.h. T0INT geht noch !
   //steht nur eine Funktion in der Dauerschleife
   //wird diese richtig verlassen MAIN läuft weiter und
   //SPEAKER_0_TONHIGH() wird normal beendet
   SYS_LED_ERROR_ON(); //weh_function
   SYS_LED_ERROR_OFF(); //weh_function
   }

} //end function
#endif //(F_LOOP_MAIN_WHILE1)

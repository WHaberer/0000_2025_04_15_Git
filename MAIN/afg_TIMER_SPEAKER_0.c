
//******************************************a
// afg_TIMER_SPEAKER_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

aus ASM
#i..fdef TIMER_SPEAKER_0_START_IN_INT    //das Geraet wird auch erst in der INT Routine gestartet
         jnb TIMER_SPEAKER_0_START_BIT,_A  ;wenn bit = 1 dann soll der Timer im naechsten INT eingeschaltet werden
         ;HERE: TIMERx_START_BIT = 1 Geraet soll eingeschaltet und Timer gestartet werden
         clr TIMER_SPEAKER_0_START_BIT      ;wenn bit = 1 dann soll der Timer im naechsten INT eingeschaltet werden
         setb TIMER_SPEAKER_0_SWITCH_ON_BIT  ;wird von der INT Routine gesetzt. Geraet kann eingeschaltet werden.
                                    ;dann muss von Hand das Geraet eingeschaltet werden
                                    ;und TIMERx_COUNTREG_L initialisiert werden
                                    ;und TIMERx_RUN_BIT gesetzt werden
         sjmp _END
_A:
#e..ndif //(TIMERx_START_IN_INT)

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_TIMER_SPEAKER_0.c \n"
//***********************************************d

//*************************************************************************
//* TIMER_SPEAKER_0_DOTI_FUNKT(void)
void TIMER_SPEAKER_0_DOTI_FUNKT(void) {
//*************************************************************************
   if (b_TIMER_SPEAKER_0_RUN_BIT == true) {
   //;HERE: timer laeuft
   
      // dec register
      ui8_TIMER_SPEAKER_0_REG --;
      // check register
      if (ui8_TIMER_SPEAKER_0_REG == 0) {
         //HERE: Count Register is 0 Timer ist fertig
         //wenn bit = 1 dann ist Timer fertig -> user: clr TIMERx_READY_BIT
         b_TIMER_SPEAKER_0_READY_BIT = true; 
         // stop Timer
         b_TIMER_SPEAKER_0_RUN_BIT   = false;
      }      
   }
} //end function

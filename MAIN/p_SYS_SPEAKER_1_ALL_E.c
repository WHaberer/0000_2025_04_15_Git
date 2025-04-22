
//******************************************a
// p_SYS_SPEAKER_1_ALL_E.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

#endif //(NO //DOKU)


//********************************j
//* Variables

// speaker bit for - whitch "Logic" is now active. ON or OFF
// is not the "Line Level" !
bool b_SYS_SPEAKER_1_NOW_ON_BIT;    //BIT_NEW:

// speaker counter
uint16_t ui16_SPEAKER_1_COU;          //REG_16_NEW:

#ifdef F_SPEAKER_1_W_T0_AND_TIM
// if speaker is ON or OFF
bool b_SPEAKER_1_RUN_BIT;           //BIT_NEW:
#endif //(F_SPEAKER_1_W_T0_AND_TIM)


// speaker variable value register for High part of the speaker signal
uint16_t ui16_SPEAKER_1_VALREG_H;
// speaker variable counter value register for Low  part of the speaker signal
uint16_t ui16_SPEAKER_1_VALREG_L;

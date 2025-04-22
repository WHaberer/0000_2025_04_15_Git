
//******************************************************************
// p_TIMING_COUNTER_MAIN_PROJECT_PT4C_XL_EVAL.c
//******************************************************************

#ifdef NO //Doku

#endif //(NO //DOKU)


// der ui32_Timing_Counter_Main counter wird in MAIN incrementiert
// und Zeitgenau (alle 0,5 sec = 2 Hz) in DOPULSE_0 ausgegeben
// wenn die MCU in MAIN fast nichts macht komme ich fast auf den
// Zählerstand 600000.
// D.h. alle 0,5 sec wird die WORK_LED in MAIN complementiert


//********************************j
//* Defines

//#define TIMING_COUNTER_MAIN_IN_DOPULSE_0

#define DOPULSE_TIMCOUMMAIN_HERE
#define TIMING_COUNTER_MAIN_IN_DOPULSE_TIMCOUMMAIN // mit 2 Hz




//********************************j
//* Variables

uint32_t ui32_Timing_Counter_Main;






//******************************************a
// p_TIMER_SPEAKER_0_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_TIMER_SPEAKER_0_ALL_B.c \n"
//***********************************************d

// One _B File for ALL


//********************************j
//* Defines

#define TIMER_SPEAKER_0_DOTI_IN_MAIN

// A = 200 Hz =   5 ms
#define TIMER_SPEAKER_0_DOTI_BIT_IN_P00A01
#define TIMER_SPEAKER_0_DOTI_IN_CA       // nur für die untenstehende Berechnung
// D =
//#define TIMER_SPEAKER_0_DOTI_BIT_IN_P00A00B00C00D01

//Define T0INT State_ON
#ifndef T0INTA_P00A01_ON
#define T0INTA_P00A01_ON
#endif


// Soll Werte Ton : HIGH
// Dauer
#define SPEAKER_0_T_HIGH_TIM_SOLL   90 //ms

// Soll Werte Ton : LOW
// Dauer
#define SPEAKER_0_T_LOW_TIM_SOLL    90 //ms

// Soll Werte Ton : KEY  (key klick)
// Dauer
#define SPEAKER_0_T_KEY_TIM_SOLL    20 //ms



#ifdef TIMER_SPEAKER_0_DOTI_IN_CA
// CA =     200   Hz 20000 cHz (centiherz)   0,005000 sec   5  ms 5000  us

// Define Dauer
#define SPEAKER_0_T_HIGH_TIM_VAL  (SPEAKER_0_T_HIGH_TIM_SOLL / T0INTA_A_P_MS_IS)  // = 90 ms = 5ms * 18
#define SPEAKER_0_T_LOW_TIM_VAL   (SPEAKER_0_T_LOW_TIM_SOLL  / T0INTA_A_P_MS_IS)  // = 90 ms = 5ms * 18
#define SPEAKER_0_T_KEY_TIM_VAL   (SPEAKER_0_T_KEY_TIM_SOLL  / T0INTA_A_P_MS_IS)  // = 90 ms = 5ms * 18

#endif //(TIMER_SPEAKER_0_DOTI_IN_CA)


#pragma weh_all3 "      T0INTA_A_P_MS_IS:                  "
#pragma weh_all3 T0INTA_A_P_MS_IS
#pragma weh_all3 " ms \n"


#pragma weh_all3 "      SPEAKER_0_T_HIGH_TIM_SOLL:             "
#pragma weh_all3 SPEAKER_0_T_HIGH_TIM_SOLL
#pragma weh_all3 " ms \n"

#pragma weh_all3 "      SPEAKER_0_T_HIGH_TIM_VAL:              "
#pragma weh_all3 SPEAKER_0_T_HIGH_TIM_VAL
#pragma weh_all3 " (Anzahl Value) \n"


#pragma weh_all3 "      SPEAKER_0_T_LOW_TIM_SOLL:              "
#pragma weh_all3 SPEAKER_0_T_LOW_TIM_SOLL
#pragma weh_all3 " ms \n"

#pragma weh_all3 "      SPEAKER_0_T_LOW_TIM_VAL:               "
#pragma weh_all3 SPEAKER_0_T_LOW_TIM_VAL
#pragma weh_all3 " (Anzahl Value) \n"


#pragma weh_all3 "      SPEAKER_0_T_KEY_TIM_SOLL:              "
#pragma weh_all3 SPEAKER_0_T_KEY_TIM_SOLL
#pragma weh_all3 " ms \n"

#pragma weh_all3 "      SPEAKER_0_T_KEY_TIM_VAL:               "
#pragma weh_all3 SPEAKER_0_T_KEY_TIM_VAL
#pragma weh_all3 " (Anzahl Value) \n"




//********************************j
//* Variables

// TIMER_SPEAKER_0
uint8_t ui8_TIMER_SPEAKER_0_REG;    //REG_8_NEW: count register for time
bool b_TIMER_SPEAKER_0_RUN_BIT;     //BIT_NEW:
bool b_TIMER_SPEAKER_0_READY_BIT;   //BIT_NEW:
bool b_TIMER_SPEAKER_0_DOTI_BIT;    //BIT_NEW:
//TIMER_SPEAKER_0 -  8 BIT defined
//TIMER_SPEAKER_0 [TIMER_SPEAKER_0_START_IN_INT] ist NICHT definiert: Time kann um 1 Count kleiner sein !





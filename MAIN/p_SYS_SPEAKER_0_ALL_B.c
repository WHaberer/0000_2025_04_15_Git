
//******************************************a
// p_SYS_SPEAKER_0_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

// for all Projects

#ifdef NO //DOKU
#endif //(NO //DOKU)

//***********************************************d


#define SPEAKER_0_COU_DEC_CHECK_DOTI_BIT_IN_CG

//Define T0INT State_ON
#ifndef T0INTA_CG_ON
#define T0INTA_CG_ON
#endif


#ifdef SPEAKER_0_DOTI_BIT_IN_CG
//nichts muss zusaetzlich eingeschaltet werden !
#endif //(SPEAKER_0_DOTI_BIT_IN_CG)

#ifdef SPEAKER_0_DOTI_BIT_IN_CP
//* AA_Hinweis 1    muss dann zusaetzlich eingeschaltet werden !
//#define SPEAKER_0_DOTI_BIT_IN_P00    ;(JMP Table always)
//#define SPEAKER_0_DOTI_BIT_IN_P01
//#define SPEAKER_0_DOTI_BIT_IN_PLAST  ;(set to Zero always)
#endif //(SPEAKER_0_DOTI_BIT_IN_CP)


// Soll Werte Ton : HIGH
// Frequenz
#define SPEAKER_0_T_HIGH_F_SOLL   2500 //Hz

// Soll Werte Ton : LOW
// Frequenz
#define SPEAKER_0_T_LOW_F_SOLL     100 //Hz

// Soll Werte Ton : KEY  (key klick)
// Frequenz
#define SPEAKER_0_T_KEY_F_SOLL     666 //Hz



// Speaker Constants for Time (in 

#ifdef SPEAKER_0_COU_DEC_CHECK_DOTI_BIT_IN_CG
#define SPEAKER_0_F_Z T0INTA_G_F_Z_IS            //weil Zentiherz centiherz   T0INTA_G_F_Z_SOLL
#endif

//********************************j
//* Calculations
// Do not change

// calculated constants (are in ASM 2 x 8 Bit H0 and L0 (2 x Label) )
#define SPEAKER_0_T_HIGH_CLAB  ((SPEAKER_0_F_Z / SPEAKER_0_T_HIGH_F_SOLL / 2 /100) -1)
#define SPEAKER_0_T_LOW_CLAB   ((SPEAKER_0_F_Z / SPEAKER_0_T_LOW_F_SOLL  / 2 /100) -1)
#define SPEAKER_0_T_KEY_CLAB   ((SPEAKER_0_F_Z / SPEAKER_0_T_KEY_F_SOLL  / 2 /100) -1)

#pragma weh_all3 "\n"

#pragma weh_all3 "SPEAKER_0_F_Z            "  // =  8000 Hz
#pragma weh_all3 SPEAKER_0_F_Z
#pragma weh_all3 " Hz \n"

#pragma weh_all3 "\n"

#pragma weh_all3 "SPEAKER_0_T_HIGH_CLAB    "  // =  8000 Hz
#pragma weh_all3 SPEAKER_0_T_HIGH_CLAB
#pragma weh_all3 " Hz \n"

#pragma weh_all3 "SPEAKER_0_T_LOW_CLAB     "  // =  8000 Hz
#pragma weh_all3 SPEAKER_0_T_LOW_CLAB
#pragma weh_all3 " Hz \n"

#pragma weh_all3 "SPEAKER_0_T_KEY_CLAB     "  // =  8000 Hz
#pragma weh_all3 SPEAKER_0_T_KEY_CLAB
#pragma weh_all3 " Hz \n"

#pragma weh_all3 "\n"



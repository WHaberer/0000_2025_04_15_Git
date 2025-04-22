
//******************************************a
// p_DOPULSE_1_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
 für 16 Bit PIO Sensortaste read
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_DOPULSE_1_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d


//********************************j
//* Defines

//#define DOPULSE_1_DOTI_BIT_IN_P03               // 8000 Hz
//#define DOPULSE_1_DOTI_BIT_IN_P00A02            // 200 Hz
#define DOPULSE_1_DOTI_BIT_IN_P00A00B02           //  40 Hz
//#define DOPULSE_1_DOTI_BIT_IN_P00A00B00C01      //  10 Hz
//#define DOPULSE_1_DOTI_BIT_IN_P00A00B00C00D01   //   2 Hz war ON !


//Define T0INT State_ON
#ifndef T0INTA_P00A00B02_ON
#define T0INTA_P00A00B02_ON
#endif


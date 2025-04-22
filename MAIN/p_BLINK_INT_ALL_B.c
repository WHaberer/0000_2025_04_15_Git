
//******************************************a
// p_BLINK_INT_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      "
#pragma weh_all3 "p_BLINK_INT_ALL_B.c \n"

//***********************************************d

   
//********************************j
//* Defines

//#define BLINKINT_DOTI_IN_T0INT  // in der Timer_INT Routine wird direkt die LED umgeschalten  - kann Probleme mit SPI machen !!!!!!
                                  // ist gut zum MAIN Probleme zu finden   
                                  // evtl. Prototype nötig ? void SYS_LED_WORK_CPL(void);
#define BLINKINT_DOTI_IN_MAIN     // in der Timer_INT Routine wird nur ein Umschaltbit gesetzt
                                  // und in der MAIN die LED geschalten

//#define BLINKINT_DOTI_BIT_IN_P03               // 8000 Hz
//#define BLINKINT_DOTI_BIT_IN_P00A02            // 200 Hz
//#define BLINKINT_DOTI_BIT_IN_P00A00B02         //  40 Hz
#define BLINKINT_DOTI_BIT_IN_P00A00B00C04        //  10 Hz Toggle = alle 10 ms
//#define BLINKINT_DOTI_BIT_IN_P00A00B00C00D01   //   2 Hz alle 0,5 s


//Define T0INT State_ON
#ifndef T0INTA_P00A00B00C04_ON
#define T0INTA_P00A00B00C04_ON
#endif






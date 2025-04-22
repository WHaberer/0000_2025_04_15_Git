            
//******************************************a
// old INC_T0_P00A31.c
// afg_T0INT_P00A31.c
//******************************************a
// afg_T0INT_OR..IGINAL.c

// Edit ONLY the  O R I G I N A L   File  !!!
//
//     ***    *   *   *      *   *
//    *   *   **  *   *       * *
//    *   *   * * *   *        *
//    *   *   *  **   *        *
//     ***    *   *   *****    *
//
// The word OR..IGINAL will be replaced by the nummer x (or the Name)

#ifdef NO //DOKU
#endif //(NO //DOKU)

//***********************************************d


//*******************************************************************b
//* DO_T0INT_P00A31(); // weh_function
//*******************************************************************c
void DO_T0INT_P00A31(void) {


// T0INT_COU_TEST (in T0INT)
//*******************************************************************b
#ifdef T0INT_COU_TEST_DOTI_BIT_IN_P00A31
//*******************************************************************c
#ifdef T0INT_COU_TEST
   b_T0INT_COU_TEST_DOTI_BIT = true;
#endif
#endif

// SPEAKER_0_COU_DEC_CHECK (in T0INT)
//*******************************************************************b
#ifdef SPEAKER_0_COU_DEC_CHECK_DOTI_BIT_IN_P00A31
//*******************************************************************c
   if (b_SPEAKER_0_RUN_BIT) {
      SPEAKER_0_COU_DEC_CHECK();
   }   
#endif
   

// SPEAKER_1_COU_DEC_CHECK (in T0INT)
//*******************************************************************b
#ifdef SPEAKER_1_COU_DEC_CHECK_DOTI_BIT_IN_P00A31
//*******************************************************************c
   if (b_SPEAKER_1_RUN_BIT) {
      SPEAKER_1_COU_DEC_CHECK();
   }   
#endif

//*******************************************************************b
//* BLINKINT (in T0INT) 
#ifdef BLINKINT_DOTI_BIT_IN_P00A31
//*******************************************************************c
#ifdef BLINKINT_DOTI_IN_T0INT
#pragma weh_all3 "BLINKINT_DOTI_BIT_IN_T0INT   IN_P00A31 - CPL LED Direct \n"
   
   if (b_SYS_LED_WORK_OO_ON_BIT) {
      // LED cpl
      SYS_LED_WORK_CPL(); //weh_function
   }
#endif //(BLINKINT_DOTI_IN_T0INT)

#ifdef BLINKINT_DOTI_IN_MAIN
#pragma weh_all3 "BLINKINT_DOTI_BIT_IN_MAIN   IN_P00A31 - use DOTI Bit \n"

   if (b_SYS_LED_WORK_OO_ON_BIT) {
#include "../MAIN/at_SET_BLINKINT_DOTI_BIT.c"
   }
#endif //(BLINKINT_DOTI_IN_MAIN)

#endif //(BLINKINT_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* TIMER_SPEAKER_0 
#ifdef TIMER_SPEAKER_0_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "TIMER_SPEAKER_0_DOTI_BIT_IN_P00A31 - Use T0F_TIMER_SPEAKER_0_DOTI_BIT.c \n"
#include "../MAIN/T0F_TIMER_SPEAKER_0_DOTI_BIT.c"
#endif //(TIMER_SPEAKER_0_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* TIMER_TIMEOUT_MONITOR_0 
#ifdef TIMER_TIMEOUT_MONITOR_0_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "TIMER_TIMEOUT_MONITOR_0_DOTI_BIT_IN_P00A31 - Use T0F_TIMER_TIMEOUT_MONITOR_0_DOTI_BIT.c \n"
#include "../MAIN/T0F_TIMER_TIMEOUT_MONITOR_0_DOTI_BIT.c"
#endif //(TIMER_TIMEOUT_MONITOR_0_DOTI_BIT_IN_P00A31)


//*******************************************************************b
//* SPEAKER_0_TON_TEST_C4
#ifdef SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_0_TON_DATA(NOTE_C4_CLAB,NOTE_C4_CLAB); //weh function
#endif //(SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_0_TON_TEST_D4
#ifdef SPEAKER_0_TON_TEST_D4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_0_TON_TEST_D4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_0_TON_DATA(NOTE_D4_CLAB,NOTE_D4_CLAB); //weh function
#endif //(SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_0_TON_TEST_E4
#ifdef SPEAKER_0_TON_TEST_E4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_0_TON_TEST_E4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_0_TON_DATA(NOTE_E4_CLAB,NOTE_E4_CLAB); //weh function
#endif //(SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_0_TON_TEST_F4
#ifdef SPEAKER_0_TON_TEST_F4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_0_TON_TEST_F4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_0_TON_DATA(NOTE_F4_CLAB,NOTE_F4_CLAB); //weh function
#endif //(SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_0_TON_TEST_G4
#ifdef SPEAKER_0_TON_TEST_G4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_0_TON_TEST_G4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_0_TON_DATA(NOTE_G4_CLAB,NOTE_G4_CLAB); //weh function
#endif //(SPEAKER_0_TON_TEST_C4_DOTI_BIT_IN_P00A31)


//*******************************************************************b
//* SPEAKER_1_TON_TEST_C4
#ifdef SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_1_TON_DATA(NOTE_C4_CLAB,NOTE_C4_CLAB); //weh function
#endif //(SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_1_TON_TEST_D4
#ifdef SPEAKER_1_TON_TEST_D4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_1_TON_TEST_D4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_1_TON_DATA(NOTE_D4_CLAB,NOTE_D4_CLAB); //weh function
#endif //(SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_1_TON_TEST_E4
#ifdef SPEAKER_1_TON_TEST_E4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_1_TON_TEST_E4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_1_TON_DATA(NOTE_E4_CLAB,NOTE_E4_CLAB); //weh function
#endif //(SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_1_TON_TEST_F4
#ifdef SPEAKER_1_TON_TEST_F4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_1_TON_TEST_F4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_1_TON_DATA(NOTE_F4_CLAB,NOTE_F4_CLAB); //weh function
#endif //(SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31)

//*******************************************************************b
//* SPEAKER_1_TON_TEST_G4
#ifdef SPEAKER_1_TON_TEST_G4_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "SPEAKER_1_TON_TEST_G4_DOTI_BIT_IN_P00A31 \n"
// Play Ton ohne Timer (bis OFF)
   SPEAKER_1_TON_DATA(NOTE_G4_CLAB,NOTE_G4_CLAB); //weh function
#endif //(SPEAKER_1_TON_TEST_C4_DOTI_BIT_IN_P00A31)



//*******************************************************************b
//* DOPULSE_TIMCOUMMAIN_DOTI_BIT
#ifdef DOPULSE_TIMCOUMMAIN_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "DOPULSE_TIMCOUMMAIN_DOTI_BIT_IN_P00A31 - Use T0F_DOPULSE_TIMCOUMMAIN_DOTI_BIT.c \n"
#include "../MAIN/T0F_DOPULSE_TIMCOUMMAIN_DOTI_BIT.c"
#endif

//* DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT
#ifdef DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A31
   #if (Verbose_Level >= 3)
   #pragma message ("DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A31 - Use T0F_DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT.c")
   #endif
#include "../MAIN/T0F_DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT.c"
#endif

//* DOPULSE_0_DOTI_BIT
#ifdef DOPULSE_0_DOTI_BIT_IN_P00A31
   #if (Verbose_Level >= 3)
   #pragma message ("DOPULSE_0_DOTI_BIT_IN_P00A31 - Use T0F_DOPULSE_0_DOTI_BIT.c")
   #endif
#include "../MAIN/T0F_DOPULSE_0_DOTI_BIT.c"
#endif

//*******************************************************************b
//* DOPULSE_1_DOTI_BIT
#ifdef DOPULSE_1_DOTI_BIT_IN_P00A31
//*******************************************************************c
#pragma weh_all3 "DOPULSE_1_DOTI_BIT_IN_P00A31           - Use T0F_DOPULSE_1_DOTI_BIT.c \n"
#include "../MAIN/T0F_DOPULSE_1_DOTI_BIT.c"
#endif

//* DOPULSE2_DOTI_BIT
#ifdef DOPULSE2_DOTI_BIT_IN_P00A31
   #if (Verbose_Level >= 3)
   #pragma message ("DOPULSE2_DOTI_BIT_IN_P00A31 - Use T0F_DOPULSE2_DOTI_BIT.c")
   #endif
#include "../MAIN/T0F_DOPULSE2_DOTI_BIT.c"
#endif

} //end function


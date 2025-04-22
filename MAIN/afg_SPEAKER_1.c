//******************************************a
// afg_SPEAKER_1.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

#endif //(NO //DOKU)

//***********************************************d



//*******************************************************************b
//* SPEAKER_1_OFF(void)
#ifdef F_SPEAKER_1_OFF_AND_RUN_SPEAKER_1_OFF
//*******************************************************************c
void SPEAKER_1_OFF(void) {

#ifdef F_SPEAKER_1_W_T0_AND_TIM
   b_SPEAKER_1_RUN_BIT = false;
#endif //(F_SPEAKER_1_W_T0_AND_TIM)
         
// no current through speaker
   SYS_SPEAKER_1_OFF(); //weh_function  
}   
#endif //(F_SPEAKER_1_OFF_AND_RUN_SPEAKER_1_OFF)  

//*************************************************************************
//* SPEAK_COU_DEC_TEST(void)
#ifdef F_SPEAKER_1_W_T0_AND_TIM
void SPEAKER_1_COU_DEC_CHECK(void) {
//*************************************************************************
// diese funktion wird vom Timer Int benutzt
// schaltet die Speaker Bits
// Dauer H
// Dauer L

// test speaker counter
   if (ui16_SPEAKER_1_COU == 0) {
   //;HERE: counter registers are 0

      if (b_SYS_SPEAKER_1_NOW_ON_BIT == false) {
         //;HERE: Output was Low.  Switch now to On
         // current through speaker
         SYS_SPEAKER_1_ON(); //weh_function  

         //;load counter with value for next High Level
         ui16_SPEAKER_1_COU = ui16_SPEAKER_1_VALREG_H;

         // switch "Aktual Level" bit
         b_SYS_SPEAKER_1_NOW_ON_BIT = true;   // High
      }
      else {
         //;HERE: Output was High. Switch now Off
         SYS_SPEAKER_1_OFF(); //weh_function  

         //;load counter with value for next Low  Level
         ui16_SPEAKER_1_COU = ui16_SPEAKER_1_VALREG_L;

         // switch "Aktual Level" bit
         b_SYS_SPEAKER_1_NOW_ON_BIT = false;   // Low         
      }
   }
   else{
   // speaker counter dec
   ui16_SPEAKER_1_COU --;
   }   
} //end function
#endif //(F_SPEAKER_1_W_T0_AND_TIM)  

//*******************************************************************b
//* SPEAKER_1_TON_DATA(unsigned char ui8_Ori_Val_H,unsigned char ui8_Ori_Val_L); //weh function            Play Ton ohne Timer (bis OFF)
#ifdef F_SPEAKER_1_TON_DATA
//*******************************************************************c
// erwartet 2 Bytes: 
//CBYTE_H and C_BYTE_L for Play Ton
//ohne Timer ! Sound bis SPEAKER_1_OFF
void SPEAKER_1_TON_DATA(unsigned char ui8_Ori_Val_H,unsigned char ui8_Ori_Val_L) {
   ui16_SPEAKER_1_VALREG_H = ui8_Ori_Val_H; 
   ui16_SPEAKER_1_VALREG_L = ui8_Ori_Val_L;

   b_SPEAKER_1_RUN_BIT = true;
} //end function
#endif //( F_SPEAKER_1_TON_DATA)

//*******************************************************************b
//* SPEAKER_1_TONHIGH(); //weh function
#ifdef F_SPEAKER_1_TONHIGH
//*******************************************************************c
void SPEAKER_1_TONHIGH(void) {

// calculated const in register
   ui16_SPEAKER_1_VALREG_H = SPEAKER_1_T_HIGH_CLAB; 
   ui16_SPEAKER_1_VALREG_L = SPEAKER_1_T_HIGH_CLAB;

// calculated time for sound
   ui8_TIMER_SPEAKER_1_REG = SPEAKER_1_T_HIGH_TIM_VAL;

   b_SPEAKER_1_RUN_BIT = true;
   b_TIMER_SPEAKER_1_RUN_BIT = true;

} //end function
#endif

//*******************************************************************b
//* SPEAKER_1_TONLOW(); //weh function
#ifdef F_SPEAKER_1_TONLOW
//*******************************************************************c
void SPEAKER_1_TONLOW(void) {

// calculated const in register
   ui16_SPEAKER_1_VALREG_H = SPEAKER_1_T_LOW_CLAB; 
   ui16_SPEAKER_1_VALREG_L = SPEAKER_1_T_LOW_CLAB; 

// calculated time for sound
   ui8_TIMER_SPEAKER_1_REG = SPEAKER_1_T_LOW_TIM_VAL;

   b_SPEAKER_1_RUN_BIT = true;
   b_TIMER_SPEAKER_1_RUN_BIT = true;

} //end function
#endif


//*************************************************************************

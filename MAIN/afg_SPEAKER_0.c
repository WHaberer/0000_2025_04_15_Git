//******************************************a
// afg_SPEAKER_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

#endif //(NO //DOKU)

//***********************************************d



//*******************************************************************b
//* SPEAKER_0_OFF(void)
#ifdef F_SPEAKER_0_OFF_AND_RUN_SPEAKER_0_OFF
//*******************************************************************c
void SPEAKER_0_OFF(void) {

#ifdef F_SPEAKER_0_W_T0_AND_TIM
   b_SPEAKER_0_RUN_BIT = false;
#endif //(F_SPEAKER_0_W_T0_AND_TIM)
         
// no current through speaker
   SYS_SPEAKER_0_OFF(); //weh_function  
}   
#endif //(F_SPEAKER_0_OFF_AND_RUN_SPEAKER_0_OFF)  

//*************************************************************************
//* SPEAK_COU_DEC_TEST(void)
#ifdef F_SPEAKER_0_W_T0_AND_TIM
void SPEAKER_0_COU_DEC_CHECK(void) {
//*************************************************************************
// diese funktion wird vom Timer Int benutzt
// schaltet die Speaker Bits
// Dauer H
// Dauer L

// test speaker counter
   if (ui16_SPEAKER_0_COU == 0) {
   //;HERE: counter registers are 0

      if (b_SYS_SPEAKER_0_NOW_ON_BIT == false) {
         //;HERE: Output was Low.  Switch now to On
         // current through speaker
         SYS_SPEAKER_0_ON(); //weh_function  

         //;load counter with value for next High Level
         ui16_SPEAKER_0_COU = ui16_SPEAKER_0_VALREG_H;

         // switch "Aktual Level" bit
         b_SYS_SPEAKER_0_NOW_ON_BIT = true;   // High
      }
      else {
         //;HERE: Output was High. Switch now Off
         SYS_SPEAKER_0_OFF(); //weh_function  

         //;load counter with value for next Low  Level
         ui16_SPEAKER_0_COU = ui16_SPEAKER_0_VALREG_L;

         // switch "Aktual Level" bit
         b_SYS_SPEAKER_0_NOW_ON_BIT = false;   // Low         
      }
   }
   else{
   // speaker counter dec
   ui16_SPEAKER_0_COU --;
   }   
} //end function
#endif //(F_SPEAKER_0_W_T0_AND_TIM)  

//*******************************************************************b
//* SPEAKER_0_TON_DATA(unsigned char ui8_Ori_Val_H,unsigned char ui8_Ori_Val_L); //weh function            Play Ton ohne Timer (bis OFF)
#ifdef F_SPEAKER_0_TON_DATA
//*******************************************************************c
// erwartet 2 Bytes: 
//CBYTE_H and C_BYTE_L for Play Ton
//ohne Timer ! Sound bis SPEAKER_0_OFF
void SPEAKER_0_TON_DATA(unsigned char ui8_Ori_Val_H,unsigned char ui8_Ori_Val_L) {
   ui16_SPEAKER_0_VALREG_H = ui8_Ori_Val_H; 
   ui16_SPEAKER_0_VALREG_L = ui8_Ori_Val_L;

   b_SPEAKER_0_RUN_BIT = true;
} //end function
#endif //( F_SPEAKER_0_TON_DATA)

//*******************************************************************b
//* SPEAKER_0_TONHIGH(); //weh function
#ifdef F_SPEAKER_0_TONHIGH
//*******************************************************************c
void SPEAKER_0_TONHIGH(void) {

// calculated const in register
   ui16_SPEAKER_0_VALREG_H = SPEAKER_0_T_HIGH_CLAB; 
   ui16_SPEAKER_0_VALREG_L = SPEAKER_0_T_HIGH_CLAB;

// calculated time for sound
   ui8_TIMER_SPEAKER_0_REG = SPEAKER_0_T_HIGH_TIM_VAL;

   b_SPEAKER_0_RUN_BIT = true;
   b_TIMER_SPEAKER_0_RUN_BIT = true;

} //end function
#endif

//*******************************************************************b
//* SPEAKER_0_TONLOW(); //weh function
#ifdef F_SPEAKER_0_TONLOW
//*******************************************************************c
void SPEAKER_0_TONLOW(void) {

// calculated const in register
   ui16_SPEAKER_0_VALREG_H = SPEAKER_0_T_LOW_CLAB; 
   ui16_SPEAKER_0_VALREG_L = SPEAKER_0_T_LOW_CLAB; 

// calculated time for sound
   ui8_TIMER_SPEAKER_0_REG = SPEAKER_0_T_LOW_TIM_VAL;

   b_SPEAKER_0_RUN_BIT = true;
   b_TIMER_SPEAKER_0_RUN_BIT = true;

} //end function
#endif


//*************************************************************************

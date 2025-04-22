//******************************************a
// afg_MATH.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_MATH.c \n"
//***********************************************d

//*******************************************************************b
//* uint8_t HEX2ASC(uint8_t ui8_Ori_Value); //weh function
#ifdef F_HEX2ASC
#pragma weh_all3 "   HEX2ASC \n"
//*******************************************************************c
// convert lower nibble value in Hex ASCII Token
uint8_t HEX2ASC(uint8_t ui8_Ori_Value) {
   // maskiere lower nibble & = AND
   ui8_Ori_Value &= 0x00f;
   if (ui8_Ori_Value < 10)
      //HERE: A < 10. Add 48 because A+48='0'
      ui8_Ori_Value += '0';
   else
      //HERE: A >= 10. Add 97 because A+87='a'
      ui8_Ori_Value += 'a'-10;

   return ui8_Ori_Value;
} //end function
#else
#pragma weh_all3 "NO HEX2ASC \n"
#endif //(F_HEX2ASC)

//*******************************************************************b
//* uint32_t CALC_10EXP(uint8_t ui8_Ori_Value); //weh function
#ifdef F_CALC_10EXP
#pragma weh_all3 "   CALC_10EXP \n"
//*******************************************************************c
// Calcutate 10 EXP x (10 hoch x)
uint32_t CALC_10EXP(uint8_t ui8_Ori_Value) {

uint32_t ui32_Zahl; //local
uint8_t  ui8_i;     //local

   ui32_Zahl = 1;   
   
   for (ui8_i = 0; ui8_i < ui8_Ori_Value; ui8_i++) {
      // value = value *10
      ui32_Zahl *= 10;
   }
   
   return ui32_Zahl;
} //end function
#else
#pragma weh_all3 "NO CALC_10EXP \n"
#endif //(F_CALC_10EXP)

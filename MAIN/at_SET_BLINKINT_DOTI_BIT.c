
//******************************************************************
// at_SET_BLINKINT_DOTI_BIT.c
// muss das auch at heissen ?
//******************************************************************

// at_File  : Is been included in the T0INT function
// no RET or JMP necessary !

#ifdef NO //Doku

#endif //(NO //DOKU)

//********************************j
//* Error Detection
#undef KLAPPE0
#ifdef T0F_BLINKINT_DOTI_BIT
666 //The number of an Error
#endif
//define just for detection of duplicate defines
#define T0F_BLINKINT_DOTI_BIT
#undef KLAPPE1

//********************************j
//* Commands to Include

//* BLINKINT
   // just set the bit
   b_BLINKINT_DOTI_BIT = true;


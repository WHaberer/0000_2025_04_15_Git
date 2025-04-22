
//******************************************a
// afg_CHECK_T0INT_P00A.c
//******************************************a
// afg_CHECK_T0INT_OR..IGINAL.c

// Edit ONLY the  O R I G I N A L   File  !!!
//
//     ***    *   *   *      *   *
//    *   *   **  *   *       * *
//    *   *   * * *   *        *
//    *   *   *  **   *        *
//     ***    *   *   *****    *
//
// The word OR..IGINAL will be replaced by the nummer x (or the Name)

#ifdef NO //Doku

// WICHTIG (für C und ASM File)
// den counterstand 0 gibt es gar nicht weil bei 00 der Value gleich mit dem 
// default value überschrieben wird !!!
// daher habe ich hier (im ASM) die Values immer um 1 verkleinert abgefragt
// if counter = 02 dann springe zu State 01

// WICHTIG (für C und ASM File)
// den counterstand gibt es gar nicht weil bei 00 der Value gleich mit dem
// default value überschrieben wird !!!
// daher habe ich hier (im ASM) die Values immer um 1 verkleinert abgefragt
// if counter = 02 dann springe zu State 01
// Counter abarbeitung geändert
// jetzt so wie bei ASM
// Ich muss den Counterstand immer + 1 nehmen
// Somit gibt es bei Teiler durch 4 (Const = 4)
// eigentlich Counterstand 4 ... 3 ... 2 ... 1 ... (0)=4
// Bei der Abfrage (und den DOTI Bits) benutze ich die Counterstände 0 1 2 3
// und addiere immer noch eine 1 dazu (#define T0INTCADD 1)
// Damit habe ich Gleichheit mit 1 2 3 4.

#define T0..INTCADD 1  OLD



Der State 00 ist ein spezieller
Er ruft den nächsten Counterstate auf
Dieses include File ist per Hand erstellt !

//* Include A = 00
if (ui8_T0INTCOU_P00A == 0 + T0INTCADD) {
   #include "../MAIN/inc_T0INT_P00A00B.c"
} // (end counterstate)

Alle weiteren States 01 ... 50 sind automatisch erstellt (via DOS Batch File)
Mit der "STATE_COU_VAR" wird festgelegt welche Counterstate Variable verwendet wird
So muss in den automatisch erstellten "6 FILES werden estellt P A B C D E "
nicht mehr if (ui8_T0INTCOU_P00A == 1 oder if (ui8_T0INTCOU_P00A00B00C00D00E == 48 eingetragen sein

So wird es implementiert :   IST FALSCH
//* 20 Include A = 01
if (ui8_T0INTCOU_P00A == 1 + T0INTCADD) {
#include "../INC/INC_T0_P00A01.c"
} // (end counterstate)

//* 20 Include A = 02
if (ui8_T0INTCOU_P00A == 2 + T0INTCADD) {
#include "../INC/INC_T0_P00A02.c"
} // (end counterstate)

IST FALSCH
das includen hat nichts mit dem aufruf zu tun !
das muss ich getrennt machen !!!

was war das ????
// Define Variable for the State Tests in the next T0INT Counter
#undef  STATE_COU_VAR
#define STATE_COU_VAR ui8_T0INTCOU_P


#ifdef NO
#ifdef T0INTA_P00A01_HERE
#ifdef T0INTA_P00A01_ON
if (ui8_T0INTCOU_P00A == 0 + T0INTCADD) DO_T0INT_P00A01(); // weh_function
goto END_OF_CHK_P00A;   
#endif
#endif

#ifdef T0INTA_P00A02_HERE
#ifdef T0INTA_P00A02_ON
if (ui8_T0INTCOU_P00A == 1 + T0INTCADD) DO_T0INT_P00A02(); // weh_function
goto END_OF_CHK_P00A;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P00A.c      Start DO_T0INT_P00Axx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P00A(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P00A(void) {

//* Start of the T0INT States

#ifdef T0INTA_P00A01_HERE
#ifdef T0INTA_P00A01_ON
if (ui8_T0INTCOU_P00A == 01) {
   DO_T0INT_P00A01(); // weh_function   
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A02_HERE
#ifdef T0INTA_P00A02_ON
if (ui8_T0INTCOU_P00A == 02) {
   DO_T0INT_P00A02(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A03_HERE
#ifdef T0INTA_P00A03_ON
if (ui8_T0INTCOU_P00A == 03) {
   DO_T0INT_P00A03(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A04_HERE
#ifdef T0INTA_P00A04_ON
if (ui8_T0INTCOU_P00A == 04) {
   DO_T0INT_P00A04(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A05_HERE
#ifdef T0INTA_P00A05_ON
if (ui8_T0INTCOU_P00A == 05) {
   DO_T0INT_P00A05(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A06_HERE
#ifdef T0INTA_P00A06_ON
if (ui8_T0INTCOU_P00A == 06) {
   DO_T0INT_P00A06(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A07_HERE
#ifdef T0INTA_P00A07_ON
if (ui8_T0INTCOU_P00A == 07) {
   DO_T0INT_P00A07(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A08_HERE
#ifdef T0INTA_P00A08_ON
if (ui8_T0INTCOU_P00A == 08) {
   DO_T0INT_P00A08(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A09_HERE
#ifdef T0INTA_P00A09_ON
if (ui8_T0INTCOU_P00A == 09) {
   DO_T0INT_P00A09(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A10_HERE
#ifdef T0INTA_P00A10_ON
if (ui8_T0INTCOU_P00A == 10) {
   DO_T0INT_P00A10(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A11_HERE
#ifdef T0INTA_P00A11_ON
if (ui8_T0INTCOU_P00A == 11) {
   DO_T0INT_P00A11(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A12_HERE
#ifdef T0INTA_P00A12_ON
if (ui8_T0INTCOU_P00A == 12) {
   DO_T0INT_P00A12(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A13_HERE
#ifdef T0INTA_P00A13_ON
if (ui8_T0INTCOU_P00A == 13) {
   DO_T0INT_P00A13(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A14_HERE
#ifdef T0INTA_P00A14_ON
if (ui8_T0INTCOU_P00A == 14) {
   DO_T0INT_P00A14(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A15_HERE
#ifdef T0INTA_P00A15_ON
if (ui8_T0INTCOU_P00A == 15) {
   DO_T0INT_P00A15(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A16_HERE
#ifdef T0INTA_P00A16_ON
if (ui8_T0INTCOU_P00A == 16) {
   DO_T0INT_P00A16(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A17_HERE
#ifdef T0INTA_P00A17_ON
if (ui8_T0INTCOU_P00A == 17) {
   DO_T0INT_P00A17(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A18_HERE
#ifdef T0INTA_P00A18_ON
if (ui8_T0INTCOU_P00A == 18) {
   DO_T0INT_P00A18(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A19_HERE
#ifdef T0INTA_P00A19_ON
if (ui8_T0INTCOU_P00A == 19) {
   DO_T0INT_P00A19(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A20_HERE
#ifdef T0INTA_P00A20_ON
if (ui8_T0INTCOU_P00A == 20) {
   DO_T0INT_P00A20(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A21_HERE
#ifdef T0INTA_P00A21_ON
if (ui8_T0INTCOU_P00A == 21) {
   DO_T0INT_P00A21(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A22_HERE
#ifdef T0INTA_P00A22_ON
if (ui8_T0INTCOU_P00A == 22) {
   DO_T0INT_P00A22(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A23_HERE
#ifdef T0INTA_P00A23_ON
if (ui8_T0INTCOU_P00A == 23) {
   DO_T0INT_P00A23(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A24_HERE
#ifdef T0INTA_P00A24_ON
if (ui8_T0INTCOU_P00A == 24) {
   DO_T0INT_P00A24(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A25_HERE
#ifdef T0INTA_P00A25_ON
if (ui8_T0INTCOU_P00A == 25) {
   DO_T0INT_P00A25(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A26_HERE
#ifdef T0INTA_P00A26_ON
if (ui8_T0INTCOU_P00A == 26) {
   DO_T0INT_P00A26(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A27_HERE
#ifdef T0INTA_P00A27_ON
if (ui8_T0INTCOU_P00A == 27) {
   DO_T0INT_P00A27(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A28_HERE
#ifdef T0INTA_P00A28_ON
if (ui8_T0INTCOU_P00A == 28) {
   DO_T0INT_P00A28(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A29_HERE
#ifdef T0INTA_P00A29_ON
if (ui8_T0INTCOU_P00A == 29) {
   DO_T0INT_P00A29(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A30_HERE
#ifdef T0INTA_P00A30_ON
if (ui8_T0INTCOU_P00A == 30) {
   DO_T0INT_P00A30(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A31_HERE
#ifdef T0INTA_P00A31_ON
if (ui8_T0INTCOU_P00A == 31) {
   DO_T0INT_P00A31(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A32_HERE
#ifdef T0INTA_P00A32_ON
if (ui8_T0INTCOU_P00A == 32) {
   DO_T0INT_P00A32(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A33_HERE
#ifdef T0INTA_P00A33_ON
if (ui8_T0INTCOU_P00A == 33) {
   DO_T0INT_P00A33(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A34_HERE
#ifdef T0INTA_P00A34_ON
if (ui8_T0INTCOU_P00A == 34) {
   DO_T0INT_P00A34(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A35_HERE
#ifdef T0INTA_P00A35_ON
if (ui8_T0INTCOU_P00A == 35) { 
   DO_T0INT_P00A35(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A36_HERE
#ifdef T0INTA_P00A36_ON
if (ui8_T0INTCOU_P00A == 36) {
   DO_T0INT_P00A36(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A37_HERE
#ifdef T0INTA_P00A37_ON
if (ui8_T0INTCOU_P00A == 37) {
   DO_T0INT_P00A37(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A38_HERE
#ifdef T0INTA_P00A38_ON
if (ui8_T0INTCOU_P00A == 38) {
   DO_T0INT_P00A38(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A39_HERE
#ifdef T0INTA_P00A39_ON
if (ui8_T0INTCOU_P00A == 39) {
   DO_T0INT_P00A39(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A40_HERE
#ifdef T0INTA_P00A40_ON
if (ui8_T0INTCOU_P00A == 40) {
   DO_T0INT_P00A40(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A41_HERE
#ifdef T0INTA_P00A41_ON
if (ui8_T0INTCOU_P00A == 41) {
   DO_T0INT_P00A41(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A42_HERE
#ifdef T0INTA_P00A42_ON
if (ui8_T0INTCOU_P00A == 42) {
   DO_T0INT_P00A42(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A43_HERE
#ifdef T0INTA_P00A43_ON
if (ui8_T0INTCOU_P00A == 43) {
   DO_T0INT_P00A43(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A44_HERE
#ifdef T0INTA_P00A44_ON
if (ui8_T0INTCOU_P00A == 44) {
   DO_T0INT_P00A44(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A45_HERE
#ifdef T0INTA_P00A45_ON
if (ui8_T0INTCOU_P00A == 45) {
   DO_T0INT_P00A45(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A46_HERE
#ifdef T0INTA_P00A46_ON
if (ui8_T0INTCOU_P00A == 46) {
   DO_T0INT_P00A46(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A47_HERE
#ifdef T0INTA_P00A47_ON
if (ui8_T0INTCOU_P00A == 47) {
   DO_T0INT_P00A47(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A48_HERE
#ifdef T0INTA_P00A48_ON
if (ui8_T0INTCOU_P00A == 48) {
   DO_T0INT_P00A48(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A49_HERE
#ifdef T0INTA_P00A49_ON
if (ui8_T0INTCOU_P00A == 49) {
   DO_T0INT_P00A49(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif

#ifdef T0INTA_P00A50_HERE
#ifdef T0INTA_P00A50_ON
if (ui8_T0INTCOU_P00A == 50) {
   DO_T0INT_P00A50(); // weh_function
   goto END_OF_CHK_P00A;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P00A:;


} //end function





//******************************************a
// afg_CHECK_T0INT_P00A00B.c
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
#ifdef T0INTA_P00A00B01_HERE
#ifdef T0INTA_P00A00B01_ON
if (ui8_T0INTCOU_P00A00B == 0 + T0INTCADD) DO_T0INT_P00A00B01(); // weh_function
goto END_OF_CHK_P00A00B;   
#endif
#endif

#ifdef T0INTA_P00A00B02_HERE
#ifdef T0INTA_P00A00B02_ON
if (ui8_T0INTCOU_P00A00B == 1 + T0INTCADD) DO_T0INT_P00A00B02(); // weh_function
goto END_OF_CHK_P00A00B;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P00A00B.c      Start DO_T0INT_P00A00Bxx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P00A00B(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P00A00B(void) {

//* Start of the T0INT States

#ifdef T0INTA_P00A00B01_HERE
#ifdef T0INTA_P00A00B01_ON
if (ui8_T0INTCOU_P00A00B == 01) {
   DO_T0INT_P00A00B01(); // weh_function   
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B02_HERE
#ifdef T0INTA_P00A00B02_ON
if (ui8_T0INTCOU_P00A00B == 02) {
   DO_T0INT_P00A00B02(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B03_HERE
#ifdef T0INTA_P00A00B03_ON
if (ui8_T0INTCOU_P00A00B == 03) {
   DO_T0INT_P00A00B03(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B04_HERE
#ifdef T0INTA_P00A00B04_ON
if (ui8_T0INTCOU_P00A00B == 04) {
   DO_T0INT_P00A00B04(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B05_HERE
#ifdef T0INTA_P00A00B05_ON
if (ui8_T0INTCOU_P00A00B == 05) {
   DO_T0INT_P00A00B05(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B06_HERE
#ifdef T0INTA_P00A00B06_ON
if (ui8_T0INTCOU_P00A00B == 06) {
   DO_T0INT_P00A00B06(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B07_HERE
#ifdef T0INTA_P00A00B07_ON
if (ui8_T0INTCOU_P00A00B == 07) {
   DO_T0INT_P00A00B07(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B08_HERE
#ifdef T0INTA_P00A00B08_ON
if (ui8_T0INTCOU_P00A00B == 08) {
   DO_T0INT_P00A00B08(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B09_HERE
#ifdef T0INTA_P00A00B09_ON
if (ui8_T0INTCOU_P00A00B == 09) {
   DO_T0INT_P00A00B09(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B10_HERE
#ifdef T0INTA_P00A00B10_ON
if (ui8_T0INTCOU_P00A00B == 10) {
   DO_T0INT_P00A00B10(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B11_HERE
#ifdef T0INTA_P00A00B11_ON
if (ui8_T0INTCOU_P00A00B == 11) {
   DO_T0INT_P00A00B11(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B12_HERE
#ifdef T0INTA_P00A00B12_ON
if (ui8_T0INTCOU_P00A00B == 12) {
   DO_T0INT_P00A00B12(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B13_HERE
#ifdef T0INTA_P00A00B13_ON
if (ui8_T0INTCOU_P00A00B == 13) {
   DO_T0INT_P00A00B13(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B14_HERE
#ifdef T0INTA_P00A00B14_ON
if (ui8_T0INTCOU_P00A00B == 14) {
   DO_T0INT_P00A00B14(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B15_HERE
#ifdef T0INTA_P00A00B15_ON
if (ui8_T0INTCOU_P00A00B == 15) {
   DO_T0INT_P00A00B15(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B16_HERE
#ifdef T0INTA_P00A00B16_ON
if (ui8_T0INTCOU_P00A00B == 16) {
   DO_T0INT_P00A00B16(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B17_HERE
#ifdef T0INTA_P00A00B17_ON
if (ui8_T0INTCOU_P00A00B == 17) {
   DO_T0INT_P00A00B17(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B18_HERE
#ifdef T0INTA_P00A00B18_ON
if (ui8_T0INTCOU_P00A00B == 18) {
   DO_T0INT_P00A00B18(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B19_HERE
#ifdef T0INTA_P00A00B19_ON
if (ui8_T0INTCOU_P00A00B == 19) {
   DO_T0INT_P00A00B19(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B20_HERE
#ifdef T0INTA_P00A00B20_ON
if (ui8_T0INTCOU_P00A00B == 20) {
   DO_T0INT_P00A00B20(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B21_HERE
#ifdef T0INTA_P00A00B21_ON
if (ui8_T0INTCOU_P00A00B == 21) {
   DO_T0INT_P00A00B21(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B22_HERE
#ifdef T0INTA_P00A00B22_ON
if (ui8_T0INTCOU_P00A00B == 22) {
   DO_T0INT_P00A00B22(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B23_HERE
#ifdef T0INTA_P00A00B23_ON
if (ui8_T0INTCOU_P00A00B == 23) {
   DO_T0INT_P00A00B23(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B24_HERE
#ifdef T0INTA_P00A00B24_ON
if (ui8_T0INTCOU_P00A00B == 24) {
   DO_T0INT_P00A00B24(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B25_HERE
#ifdef T0INTA_P00A00B25_ON
if (ui8_T0INTCOU_P00A00B == 25) {
   DO_T0INT_P00A00B25(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B26_HERE
#ifdef T0INTA_P00A00B26_ON
if (ui8_T0INTCOU_P00A00B == 26) {
   DO_T0INT_P00A00B26(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B27_HERE
#ifdef T0INTA_P00A00B27_ON
if (ui8_T0INTCOU_P00A00B == 27) {
   DO_T0INT_P00A00B27(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B28_HERE
#ifdef T0INTA_P00A00B28_ON
if (ui8_T0INTCOU_P00A00B == 28) {
   DO_T0INT_P00A00B28(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B29_HERE
#ifdef T0INTA_P00A00B29_ON
if (ui8_T0INTCOU_P00A00B == 29) {
   DO_T0INT_P00A00B29(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B30_HERE
#ifdef T0INTA_P00A00B30_ON
if (ui8_T0INTCOU_P00A00B == 30) {
   DO_T0INT_P00A00B30(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B31_HERE
#ifdef T0INTA_P00A00B31_ON
if (ui8_T0INTCOU_P00A00B == 31) {
   DO_T0INT_P00A00B31(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B32_HERE
#ifdef T0INTA_P00A00B32_ON
if (ui8_T0INTCOU_P00A00B == 32) {
   DO_T0INT_P00A00B32(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B33_HERE
#ifdef T0INTA_P00A00B33_ON
if (ui8_T0INTCOU_P00A00B == 33) {
   DO_T0INT_P00A00B33(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B34_HERE
#ifdef T0INTA_P00A00B34_ON
if (ui8_T0INTCOU_P00A00B == 34) {
   DO_T0INT_P00A00B34(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B35_HERE
#ifdef T0INTA_P00A00B35_ON
if (ui8_T0INTCOU_P00A00B == 35) { 
   DO_T0INT_P00A00B35(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B36_HERE
#ifdef T0INTA_P00A00B36_ON
if (ui8_T0INTCOU_P00A00B == 36) {
   DO_T0INT_P00A00B36(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B37_HERE
#ifdef T0INTA_P00A00B37_ON
if (ui8_T0INTCOU_P00A00B == 37) {
   DO_T0INT_P00A00B37(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B38_HERE
#ifdef T0INTA_P00A00B38_ON
if (ui8_T0INTCOU_P00A00B == 38) {
   DO_T0INT_P00A00B38(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B39_HERE
#ifdef T0INTA_P00A00B39_ON
if (ui8_T0INTCOU_P00A00B == 39) {
   DO_T0INT_P00A00B39(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B40_HERE
#ifdef T0INTA_P00A00B40_ON
if (ui8_T0INTCOU_P00A00B == 40) {
   DO_T0INT_P00A00B40(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B41_HERE
#ifdef T0INTA_P00A00B41_ON
if (ui8_T0INTCOU_P00A00B == 41) {
   DO_T0INT_P00A00B41(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B42_HERE
#ifdef T0INTA_P00A00B42_ON
if (ui8_T0INTCOU_P00A00B == 42) {
   DO_T0INT_P00A00B42(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B43_HERE
#ifdef T0INTA_P00A00B43_ON
if (ui8_T0INTCOU_P00A00B == 43) {
   DO_T0INT_P00A00B43(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B44_HERE
#ifdef T0INTA_P00A00B44_ON
if (ui8_T0INTCOU_P00A00B == 44) {
   DO_T0INT_P00A00B44(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B45_HERE
#ifdef T0INTA_P00A00B45_ON
if (ui8_T0INTCOU_P00A00B == 45) {
   DO_T0INT_P00A00B45(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B46_HERE
#ifdef T0INTA_P00A00B46_ON
if (ui8_T0INTCOU_P00A00B == 46) {
   DO_T0INT_P00A00B46(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B47_HERE
#ifdef T0INTA_P00A00B47_ON
if (ui8_T0INTCOU_P00A00B == 47) {
   DO_T0INT_P00A00B47(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B48_HERE
#ifdef T0INTA_P00A00B48_ON
if (ui8_T0INTCOU_P00A00B == 48) {
   DO_T0INT_P00A00B48(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B49_HERE
#ifdef T0INTA_P00A00B49_ON
if (ui8_T0INTCOU_P00A00B == 49) {
   DO_T0INT_P00A00B49(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif

#ifdef T0INTA_P00A00B50_HERE
#ifdef T0INTA_P00A00B50_ON
if (ui8_T0INTCOU_P00A00B == 50) {
   DO_T0INT_P00A00B50(); // weh_function
   goto END_OF_CHK_P00A00B;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P00A00B:;


} //end function




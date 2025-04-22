
//******************************************a
// afg_CHECK_T0INT_P00A00B00C00D.c
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
#ifdef T0INTA_P00A00B00C00D01_HERE
#ifdef T0INTA_P00A00B00C00D01_ON
if (ui8_T0INTCOU_P00A00B00C00D == 0 + T0INTCADD) DO_T0INT_P00A00B00C00D01(); // weh_function
goto END_OF_CHK_P00A00B00C00D;   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D02_HERE
#ifdef T0INTA_P00A00B00C00D02_ON
if (ui8_T0INTCOU_P00A00B00C00D == 1 + T0INTCADD) DO_T0INT_P00A00B00C00D02(); // weh_function
goto END_OF_CHK_P00A00B00C00D;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P00A00B00C00D.c      Start DO_T0INT_P00A00B00C00Dxx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P00A00B00C00D(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P00A00B00C00D(void) {

//* Start of the T0INT States

#ifdef T0INTA_P00A00B00C00D01_HERE
#ifdef T0INTA_P00A00B00C00D01_ON
if (ui8_T0INTCOU_P00A00B00C00D == 01) {
   DO_T0INT_P00A00B00C00D01(); // weh_function   
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D02_HERE
#ifdef T0INTA_P00A00B00C00D02_ON
if (ui8_T0INTCOU_P00A00B00C00D == 02) {
   DO_T0INT_P00A00B00C00D02(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D03_HERE
#ifdef T0INTA_P00A00B00C00D03_ON
if (ui8_T0INTCOU_P00A00B00C00D == 03) {
   DO_T0INT_P00A00B00C00D03(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D04_HERE
#ifdef T0INTA_P00A00B00C00D04_ON
if (ui8_T0INTCOU_P00A00B00C00D == 04) {
   DO_T0INT_P00A00B00C00D04(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D05_HERE
#ifdef T0INTA_P00A00B00C00D05_ON
if (ui8_T0INTCOU_P00A00B00C00D == 05) {
   DO_T0INT_P00A00B00C00D05(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D06_HERE
#ifdef T0INTA_P00A00B00C00D06_ON
if (ui8_T0INTCOU_P00A00B00C00D == 06) {
   DO_T0INT_P00A00B00C00D06(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D07_HERE
#ifdef T0INTA_P00A00B00C00D07_ON
if (ui8_T0INTCOU_P00A00B00C00D == 07) {
   DO_T0INT_P00A00B00C00D07(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D08_HERE
#ifdef T0INTA_P00A00B00C00D08_ON
if (ui8_T0INTCOU_P00A00B00C00D == 08) {
   DO_T0INT_P00A00B00C00D08(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D09_HERE
#ifdef T0INTA_P00A00B00C00D09_ON
if (ui8_T0INTCOU_P00A00B00C00D == 09) {
   DO_T0INT_P00A00B00C00D09(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D10_HERE
#ifdef T0INTA_P00A00B00C00D10_ON
if (ui8_T0INTCOU_P00A00B00C00D == 10) {
   DO_T0INT_P00A00B00C00D10(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D11_HERE
#ifdef T0INTA_P00A00B00C00D11_ON
if (ui8_T0INTCOU_P00A00B00C00D == 11) {
   DO_T0INT_P00A00B00C00D11(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D12_HERE
#ifdef T0INTA_P00A00B00C00D12_ON
if (ui8_T0INTCOU_P00A00B00C00D == 12) {
   DO_T0INT_P00A00B00C00D12(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D13_HERE
#ifdef T0INTA_P00A00B00C00D13_ON
if (ui8_T0INTCOU_P00A00B00C00D == 13) {
   DO_T0INT_P00A00B00C00D13(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D14_HERE
#ifdef T0INTA_P00A00B00C00D14_ON
if (ui8_T0INTCOU_P00A00B00C00D == 14) {
   DO_T0INT_P00A00B00C00D14(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D15_HERE
#ifdef T0INTA_P00A00B00C00D15_ON
if (ui8_T0INTCOU_P00A00B00C00D == 15) {
   DO_T0INT_P00A00B00C00D15(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D16_HERE
#ifdef T0INTA_P00A00B00C00D16_ON
if (ui8_T0INTCOU_P00A00B00C00D == 16) {
   DO_T0INT_P00A00B00C00D16(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D17_HERE
#ifdef T0INTA_P00A00B00C00D17_ON
if (ui8_T0INTCOU_P00A00B00C00D == 17) {
   DO_T0INT_P00A00B00C00D17(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D18_HERE
#ifdef T0INTA_P00A00B00C00D18_ON
if (ui8_T0INTCOU_P00A00B00C00D == 18) {
   DO_T0INT_P00A00B00C00D18(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D19_HERE
#ifdef T0INTA_P00A00B00C00D19_ON
if (ui8_T0INTCOU_P00A00B00C00D == 19) {
   DO_T0INT_P00A00B00C00D19(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D20_HERE
#ifdef T0INTA_P00A00B00C00D20_ON
if (ui8_T0INTCOU_P00A00B00C00D == 20) {
   DO_T0INT_P00A00B00C00D20(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D21_HERE
#ifdef T0INTA_P00A00B00C00D21_ON
if (ui8_T0INTCOU_P00A00B00C00D == 21) {
   DO_T0INT_P00A00B00C00D21(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D22_HERE
#ifdef T0INTA_P00A00B00C00D22_ON
if (ui8_T0INTCOU_P00A00B00C00D == 22) {
   DO_T0INT_P00A00B00C00D22(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D23_HERE
#ifdef T0INTA_P00A00B00C00D23_ON
if (ui8_T0INTCOU_P00A00B00C00D == 23) {
   DO_T0INT_P00A00B00C00D23(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D24_HERE
#ifdef T0INTA_P00A00B00C00D24_ON
if (ui8_T0INTCOU_P00A00B00C00D == 24) {
   DO_T0INT_P00A00B00C00D24(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D25_HERE
#ifdef T0INTA_P00A00B00C00D25_ON
if (ui8_T0INTCOU_P00A00B00C00D == 25) {
   DO_T0INT_P00A00B00C00D25(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D26_HERE
#ifdef T0INTA_P00A00B00C00D26_ON
if (ui8_T0INTCOU_P00A00B00C00D == 26) {
   DO_T0INT_P00A00B00C00D26(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D27_HERE
#ifdef T0INTA_P00A00B00C00D27_ON
if (ui8_T0INTCOU_P00A00B00C00D == 27) {
   DO_T0INT_P00A00B00C00D27(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D28_HERE
#ifdef T0INTA_P00A00B00C00D28_ON
if (ui8_T0INTCOU_P00A00B00C00D == 28) {
   DO_T0INT_P00A00B00C00D28(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D29_HERE
#ifdef T0INTA_P00A00B00C00D29_ON
if (ui8_T0INTCOU_P00A00B00C00D == 29) {
   DO_T0INT_P00A00B00C00D29(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D30_HERE
#ifdef T0INTA_P00A00B00C00D30_ON
if (ui8_T0INTCOU_P00A00B00C00D == 30) {
   DO_T0INT_P00A00B00C00D30(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D31_HERE
#ifdef T0INTA_P00A00B00C00D31_ON
if (ui8_T0INTCOU_P00A00B00C00D == 31) {
   DO_T0INT_P00A00B00C00D31(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D32_HERE
#ifdef T0INTA_P00A00B00C00D32_ON
if (ui8_T0INTCOU_P00A00B00C00D == 32) {
   DO_T0INT_P00A00B00C00D32(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D33_HERE
#ifdef T0INTA_P00A00B00C00D33_ON
if (ui8_T0INTCOU_P00A00B00C00D == 33) {
   DO_T0INT_P00A00B00C00D33(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D34_HERE
#ifdef T0INTA_P00A00B00C00D34_ON
if (ui8_T0INTCOU_P00A00B00C00D == 34) {
   DO_T0INT_P00A00B00C00D34(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D35_HERE
#ifdef T0INTA_P00A00B00C00D35_ON
if (ui8_T0INTCOU_P00A00B00C00D == 35) { 
   DO_T0INT_P00A00B00C00D35(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D36_HERE
#ifdef T0INTA_P00A00B00C00D36_ON
if (ui8_T0INTCOU_P00A00B00C00D == 36) {
   DO_T0INT_P00A00B00C00D36(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D37_HERE
#ifdef T0INTA_P00A00B00C00D37_ON
if (ui8_T0INTCOU_P00A00B00C00D == 37) {
   DO_T0INT_P00A00B00C00D37(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D38_HERE
#ifdef T0INTA_P00A00B00C00D38_ON
if (ui8_T0INTCOU_P00A00B00C00D == 38) {
   DO_T0INT_P00A00B00C00D38(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D39_HERE
#ifdef T0INTA_P00A00B00C00D39_ON
if (ui8_T0INTCOU_P00A00B00C00D == 39) {
   DO_T0INT_P00A00B00C00D39(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D40_HERE
#ifdef T0INTA_P00A00B00C00D40_ON
if (ui8_T0INTCOU_P00A00B00C00D == 40) {
   DO_T0INT_P00A00B00C00D40(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D41_HERE
#ifdef T0INTA_P00A00B00C00D41_ON
if (ui8_T0INTCOU_P00A00B00C00D == 41) {
   DO_T0INT_P00A00B00C00D41(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D42_HERE
#ifdef T0INTA_P00A00B00C00D42_ON
if (ui8_T0INTCOU_P00A00B00C00D == 42) {
   DO_T0INT_P00A00B00C00D42(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D43_HERE
#ifdef T0INTA_P00A00B00C00D43_ON
if (ui8_T0INTCOU_P00A00B00C00D == 43) {
   DO_T0INT_P00A00B00C00D43(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D44_HERE
#ifdef T0INTA_P00A00B00C00D44_ON
if (ui8_T0INTCOU_P00A00B00C00D == 44) {
   DO_T0INT_P00A00B00C00D44(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D45_HERE
#ifdef T0INTA_P00A00B00C00D45_ON
if (ui8_T0INTCOU_P00A00B00C00D == 45) {
   DO_T0INT_P00A00B00C00D45(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D46_HERE
#ifdef T0INTA_P00A00B00C00D46_ON
if (ui8_T0INTCOU_P00A00B00C00D == 46) {
   DO_T0INT_P00A00B00C00D46(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D47_HERE
#ifdef T0INTA_P00A00B00C00D47_ON
if (ui8_T0INTCOU_P00A00B00C00D == 47) {
   DO_T0INT_P00A00B00C00D47(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D48_HERE
#ifdef T0INTA_P00A00B00C00D48_ON
if (ui8_T0INTCOU_P00A00B00C00D == 48) {
   DO_T0INT_P00A00B00C00D48(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D49_HERE
#ifdef T0INTA_P00A00B00C00D49_ON
if (ui8_T0INTCOU_P00A00B00C00D == 49) {
   DO_T0INT_P00A00B00C00D49(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D50_HERE
#ifdef T0INTA_P00A00B00C00D50_ON
if (ui8_T0INTCOU_P00A00B00C00D == 50) {
   DO_T0INT_P00A00B00C00D50(); // weh_function
   goto END_OF_CHK_P00A00B00C00D;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P00A00B00C00D:;


} //end function




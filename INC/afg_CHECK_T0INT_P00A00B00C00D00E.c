
//******************************************a
// afg_CHECK_T0INT_P00A00B00C00D00E.c
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
#ifdef T0INTA_P00A00B00C00D00E01_HERE
#ifdef T0INTA_P00A00B00C00D00E01_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 0 + T0INTCADD) DO_T0INT_P00A00B00C00D00E01(); // weh_function
goto END_OF_CHK_P00A00B00C00D00E;   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E02_HERE
#ifdef T0INTA_P00A00B00C00D00E02_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 1 + T0INTCADD) DO_T0INT_P00A00B00C00D00E02(); // weh_function
goto END_OF_CHK_P00A00B00C00D00E;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P00A00B00C00D00E.c      Start DO_T0INT_P00A00B00C00D00Exx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P00A00B00C00D00E(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P00A00B00C00D00E(void) {

//* Start of the T0INT States

#ifdef T0INTA_P00A00B00C00D00E01_HERE
#ifdef T0INTA_P00A00B00C00D00E01_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 01) {
   DO_T0INT_P00A00B00C00D00E01(); // weh_function   
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E02_HERE
#ifdef T0INTA_P00A00B00C00D00E02_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 02) {
   DO_T0INT_P00A00B00C00D00E02(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E03_HERE
#ifdef T0INTA_P00A00B00C00D00E03_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 03) {
   DO_T0INT_P00A00B00C00D00E03(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E04_HERE
#ifdef T0INTA_P00A00B00C00D00E04_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 04) {
   DO_T0INT_P00A00B00C00D00E04(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E05_HERE
#ifdef T0INTA_P00A00B00C00D00E05_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 05) {
   DO_T0INT_P00A00B00C00D00E05(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E06_HERE
#ifdef T0INTA_P00A00B00C00D00E06_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 06) {
   DO_T0INT_P00A00B00C00D00E06(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E07_HERE
#ifdef T0INTA_P00A00B00C00D00E07_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 07) {
   DO_T0INT_P00A00B00C00D00E07(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E08_HERE
#ifdef T0INTA_P00A00B00C00D00E08_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 08) {
   DO_T0INT_P00A00B00C00D00E08(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E09_HERE
#ifdef T0INTA_P00A00B00C00D00E09_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 09) {
   DO_T0INT_P00A00B00C00D00E09(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E10_HERE
#ifdef T0INTA_P00A00B00C00D00E10_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 10) {
   DO_T0INT_P00A00B00C00D00E10(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E11_HERE
#ifdef T0INTA_P00A00B00C00D00E11_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 11) {
   DO_T0INT_P00A00B00C00D00E11(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E12_HERE
#ifdef T0INTA_P00A00B00C00D00E12_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 12) {
   DO_T0INT_P00A00B00C00D00E12(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E13_HERE
#ifdef T0INTA_P00A00B00C00D00E13_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 13) {
   DO_T0INT_P00A00B00C00D00E13(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E14_HERE
#ifdef T0INTA_P00A00B00C00D00E14_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 14) {
   DO_T0INT_P00A00B00C00D00E14(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E15_HERE
#ifdef T0INTA_P00A00B00C00D00E15_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 15) {
   DO_T0INT_P00A00B00C00D00E15(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E16_HERE
#ifdef T0INTA_P00A00B00C00D00E16_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 16) {
   DO_T0INT_P00A00B00C00D00E16(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E17_HERE
#ifdef T0INTA_P00A00B00C00D00E17_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 17) {
   DO_T0INT_P00A00B00C00D00E17(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E18_HERE
#ifdef T0INTA_P00A00B00C00D00E18_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 18) {
   DO_T0INT_P00A00B00C00D00E18(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E19_HERE
#ifdef T0INTA_P00A00B00C00D00E19_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 19) {
   DO_T0INT_P00A00B00C00D00E19(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E20_HERE
#ifdef T0INTA_P00A00B00C00D00E20_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 20) {
   DO_T0INT_P00A00B00C00D00E20(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E21_HERE
#ifdef T0INTA_P00A00B00C00D00E21_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 21) {
   DO_T0INT_P00A00B00C00D00E21(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E22_HERE
#ifdef T0INTA_P00A00B00C00D00E22_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 22) {
   DO_T0INT_P00A00B00C00D00E22(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E23_HERE
#ifdef T0INTA_P00A00B00C00D00E23_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 23) {
   DO_T0INT_P00A00B00C00D00E23(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E24_HERE
#ifdef T0INTA_P00A00B00C00D00E24_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 24) {
   DO_T0INT_P00A00B00C00D00E24(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E25_HERE
#ifdef T0INTA_P00A00B00C00D00E25_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 25) {
   DO_T0INT_P00A00B00C00D00E25(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E26_HERE
#ifdef T0INTA_P00A00B00C00D00E26_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 26) {
   DO_T0INT_P00A00B00C00D00E26(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E27_HERE
#ifdef T0INTA_P00A00B00C00D00E27_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 27) {
   DO_T0INT_P00A00B00C00D00E27(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E28_HERE
#ifdef T0INTA_P00A00B00C00D00E28_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 28) {
   DO_T0INT_P00A00B00C00D00E28(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E29_HERE
#ifdef T0INTA_P00A00B00C00D00E29_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 29) {
   DO_T0INT_P00A00B00C00D00E29(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E30_HERE
#ifdef T0INTA_P00A00B00C00D00E30_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 30) {
   DO_T0INT_P00A00B00C00D00E30(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E31_HERE
#ifdef T0INTA_P00A00B00C00D00E31_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 31) {
   DO_T0INT_P00A00B00C00D00E31(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E32_HERE
#ifdef T0INTA_P00A00B00C00D00E32_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 32) {
   DO_T0INT_P00A00B00C00D00E32(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E33_HERE
#ifdef T0INTA_P00A00B00C00D00E33_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 33) {
   DO_T0INT_P00A00B00C00D00E33(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E34_HERE
#ifdef T0INTA_P00A00B00C00D00E34_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 34) {
   DO_T0INT_P00A00B00C00D00E34(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E35_HERE
#ifdef T0INTA_P00A00B00C00D00E35_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 35) { 
   DO_T0INT_P00A00B00C00D00E35(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E36_HERE
#ifdef T0INTA_P00A00B00C00D00E36_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 36) {
   DO_T0INT_P00A00B00C00D00E36(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E37_HERE
#ifdef T0INTA_P00A00B00C00D00E37_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 37) {
   DO_T0INT_P00A00B00C00D00E37(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E38_HERE
#ifdef T0INTA_P00A00B00C00D00E38_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 38) {
   DO_T0INT_P00A00B00C00D00E38(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E39_HERE
#ifdef T0INTA_P00A00B00C00D00E39_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 39) {
   DO_T0INT_P00A00B00C00D00E39(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E40_HERE
#ifdef T0INTA_P00A00B00C00D00E40_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 40) {
   DO_T0INT_P00A00B00C00D00E40(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E41_HERE
#ifdef T0INTA_P00A00B00C00D00E41_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 41) {
   DO_T0INT_P00A00B00C00D00E41(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E42_HERE
#ifdef T0INTA_P00A00B00C00D00E42_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 42) {
   DO_T0INT_P00A00B00C00D00E42(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E43_HERE
#ifdef T0INTA_P00A00B00C00D00E43_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 43) {
   DO_T0INT_P00A00B00C00D00E43(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E44_HERE
#ifdef T0INTA_P00A00B00C00D00E44_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 44) {
   DO_T0INT_P00A00B00C00D00E44(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E45_HERE
#ifdef T0INTA_P00A00B00C00D00E45_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 45) {
   DO_T0INT_P00A00B00C00D00E45(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E46_HERE
#ifdef T0INTA_P00A00B00C00D00E46_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 46) {
   DO_T0INT_P00A00B00C00D00E46(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E47_HERE
#ifdef T0INTA_P00A00B00C00D00E47_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 47) {
   DO_T0INT_P00A00B00C00D00E47(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E48_HERE
#ifdef T0INTA_P00A00B00C00D00E48_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 48) {
   DO_T0INT_P00A00B00C00D00E48(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E49_HERE
#ifdef T0INTA_P00A00B00C00D00E49_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 49) {
   DO_T0INT_P00A00B00C00D00E49(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C00D00E50_HERE
#ifdef T0INTA_P00A00B00C00D00E50_ON
if (ui8_T0INTCOU_P00A00B00C00D00E == 50) {
   DO_T0INT_P00A00B00C00D00E50(); // weh_function
   goto END_OF_CHK_P00A00B00C00D00E;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P00A00B00C00D00E:;


} //end function




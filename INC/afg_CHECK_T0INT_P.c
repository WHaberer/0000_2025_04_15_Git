
//******************************************a
// afg_CHECK_T0INT_P.c
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
#ifdef T0INTA_P01_HERE
#ifdef T0INTA_P01_ON
if (ui8_T0INTCOU_P == 0 + T0INTCADD) DO_T0INT_P01(); // weh_function
goto END_OF_CHK_P;   
#endif
#endif

#ifdef T0INTA_P02_HERE
#ifdef T0INTA_P02_ON
if (ui8_T0INTCOU_P == 1 + T0INTCADD) DO_T0INT_P02(); // weh_function
goto END_OF_CHK_P;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P.c      Start DO_T0INT_Pxx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P(void) {

//* Start of the T0INT States

#ifdef T0INTA_P01_HERE
#ifdef T0INTA_P01_ON
if (ui8_T0INTCOU_P == 01) {
   DO_T0INT_P01(); // weh_function   
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P02_HERE
#ifdef T0INTA_P02_ON
if (ui8_T0INTCOU_P == 02) {
   DO_T0INT_P02(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P03_HERE
#ifdef T0INTA_P03_ON
if (ui8_T0INTCOU_P == 03) {
   DO_T0INT_P03(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P04_HERE
#ifdef T0INTA_P04_ON
if (ui8_T0INTCOU_P == 04) {
   DO_T0INT_P04(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P05_HERE
#ifdef T0INTA_P05_ON
if (ui8_T0INTCOU_P == 05) {
   DO_T0INT_P05(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P06_HERE
#ifdef T0INTA_P06_ON
if (ui8_T0INTCOU_P == 06) {
   DO_T0INT_P06(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P07_HERE
#ifdef T0INTA_P07_ON
if (ui8_T0INTCOU_P == 07) {
   DO_T0INT_P07(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P08_HERE
#ifdef T0INTA_P08_ON
if (ui8_T0INTCOU_P == 08) {
   DO_T0INT_P08(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P09_HERE
#ifdef T0INTA_P09_ON
if (ui8_T0INTCOU_P == 09) {
   DO_T0INT_P09(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P10_HERE
#ifdef T0INTA_P10_ON
if (ui8_T0INTCOU_P == 10) {
   DO_T0INT_P10(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P11_HERE
#ifdef T0INTA_P11_ON
if (ui8_T0INTCOU_P == 11) {
   DO_T0INT_P11(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P12_HERE
#ifdef T0INTA_P12_ON
if (ui8_T0INTCOU_P == 12) {
   DO_T0INT_P12(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P13_HERE
#ifdef T0INTA_P13_ON
if (ui8_T0INTCOU_P == 13) {
   DO_T0INT_P13(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P14_HERE
#ifdef T0INTA_P14_ON
if (ui8_T0INTCOU_P == 14) {
   DO_T0INT_P14(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P15_HERE
#ifdef T0INTA_P15_ON
if (ui8_T0INTCOU_P == 15) {
   DO_T0INT_P15(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P16_HERE
#ifdef T0INTA_P16_ON
if (ui8_T0INTCOU_P == 16) {
   DO_T0INT_P16(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P17_HERE
#ifdef T0INTA_P17_ON
if (ui8_T0INTCOU_P == 17) {
   DO_T0INT_P17(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P18_HERE
#ifdef T0INTA_P18_ON
if (ui8_T0INTCOU_P == 18) {
   DO_T0INT_P18(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P19_HERE
#ifdef T0INTA_P19_ON
if (ui8_T0INTCOU_P == 19) {
   DO_T0INT_P19(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P20_HERE
#ifdef T0INTA_P20_ON
if (ui8_T0INTCOU_P == 20) {
   DO_T0INT_P20(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P21_HERE
#ifdef T0INTA_P21_ON
if (ui8_T0INTCOU_P == 21) {
   DO_T0INT_P21(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P22_HERE
#ifdef T0INTA_P22_ON
if (ui8_T0INTCOU_P == 22) {
   DO_T0INT_P22(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P23_HERE
#ifdef T0INTA_P23_ON
if (ui8_T0INTCOU_P == 23) {
   DO_T0INT_P23(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P24_HERE
#ifdef T0INTA_P24_ON
if (ui8_T0INTCOU_P == 24) {
   DO_T0INT_P24(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P25_HERE
#ifdef T0INTA_P25_ON
if (ui8_T0INTCOU_P == 25) {
   DO_T0INT_P25(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P26_HERE
#ifdef T0INTA_P26_ON
if (ui8_T0INTCOU_P == 26) {
   DO_T0INT_P26(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P27_HERE
#ifdef T0INTA_P27_ON
if (ui8_T0INTCOU_P == 27) {
   DO_T0INT_P27(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P28_HERE
#ifdef T0INTA_P28_ON
if (ui8_T0INTCOU_P == 28) {
   DO_T0INT_P28(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P29_HERE
#ifdef T0INTA_P29_ON
if (ui8_T0INTCOU_P == 29) {
   DO_T0INT_P29(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P30_HERE
#ifdef T0INTA_P30_ON
if (ui8_T0INTCOU_P == 30) {
   DO_T0INT_P30(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P31_HERE
#ifdef T0INTA_P31_ON
if (ui8_T0INTCOU_P == 31) {
   DO_T0INT_P31(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P32_HERE
#ifdef T0INTA_P32_ON
if (ui8_T0INTCOU_P == 32) {
   DO_T0INT_P32(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P33_HERE
#ifdef T0INTA_P33_ON
if (ui8_T0INTCOU_P == 33) {
   DO_T0INT_P33(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P34_HERE
#ifdef T0INTA_P34_ON
if (ui8_T0INTCOU_P == 34) {
   DO_T0INT_P34(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P35_HERE
#ifdef T0INTA_P35_ON
if (ui8_T0INTCOU_P == 35) { 
   DO_T0INT_P35(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P36_HERE
#ifdef T0INTA_P36_ON
if (ui8_T0INTCOU_P == 36) {
   DO_T0INT_P36(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P37_HERE
#ifdef T0INTA_P37_ON
if (ui8_T0INTCOU_P == 37) {
   DO_T0INT_P37(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P38_HERE
#ifdef T0INTA_P38_ON
if (ui8_T0INTCOU_P == 38) {
   DO_T0INT_P38(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P39_HERE
#ifdef T0INTA_P39_ON
if (ui8_T0INTCOU_P == 39) {
   DO_T0INT_P39(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P40_HERE
#ifdef T0INTA_P40_ON
if (ui8_T0INTCOU_P == 40) {
   DO_T0INT_P40(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P41_HERE
#ifdef T0INTA_P41_ON
if (ui8_T0INTCOU_P == 41) {
   DO_T0INT_P41(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P42_HERE
#ifdef T0INTA_P42_ON
if (ui8_T0INTCOU_P == 42) {
   DO_T0INT_P42(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P43_HERE
#ifdef T0INTA_P43_ON
if (ui8_T0INTCOU_P == 43) {
   DO_T0INT_P43(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P44_HERE
#ifdef T0INTA_P44_ON
if (ui8_T0INTCOU_P == 44) {
   DO_T0INT_P44(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P45_HERE
#ifdef T0INTA_P45_ON
if (ui8_T0INTCOU_P == 45) {
   DO_T0INT_P45(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P46_HERE
#ifdef T0INTA_P46_ON
if (ui8_T0INTCOU_P == 46) {
   DO_T0INT_P46(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P47_HERE
#ifdef T0INTA_P47_ON
if (ui8_T0INTCOU_P == 47) {
   DO_T0INT_P47(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P48_HERE
#ifdef T0INTA_P48_ON
if (ui8_T0INTCOU_P == 48) {
   DO_T0INT_P48(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P49_HERE
#ifdef T0INTA_P49_ON
if (ui8_T0INTCOU_P == 49) {
   DO_T0INT_P49(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif

#ifdef T0INTA_P50_HERE
#ifdef T0INTA_P50_ON
if (ui8_T0INTCOU_P == 50) {
   DO_T0INT_P50(); // weh_function
   goto END_OF_CHK_P;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P:;


} //end function




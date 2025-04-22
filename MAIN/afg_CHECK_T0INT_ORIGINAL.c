
//******************************************a
// afg_CHECK_T0INT_ORIGINAL.c
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
#ifdef T0INTA_ORIGINAL01_HERE
#ifdef T0INTA_ORIGINAL01_ON
if (ui8_T0INTCOU_ORIGINAL == 0 + T0INTCADD) DO_T0INT_ORIGINAL01(); // weh_function
goto END_OF_CHK_ORIGINAL;   
#endif
#endif

#ifdef T0INTA_ORIGINAL02_HERE
#ifdef T0INTA_ORIGINAL02_ON
if (ui8_T0INTCOU_ORIGINAL == 1 + T0INTCADD) DO_T0INT_ORIGINAL02(); // weh_function
goto END_OF_CHK_ORIGINAL;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_ORIGINAL.c      Start DO_T0INT_ORIGINALxx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_ORIGINAL(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_ORIGINAL(void) {

//* Start of the T0INT States

#ifdef T0INTA_ORIGINAL01_HERE
#ifdef T0INTA_ORIGINAL01_ON
if (ui8_T0INTCOU_ORIGINAL == 01) {
   DO_T0INT_ORIGINAL01(); // weh_function   
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL02_HERE
#ifdef T0INTA_ORIGINAL02_ON
if (ui8_T0INTCOU_ORIGINAL == 02) {
   DO_T0INT_ORIGINAL02(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL03_HERE
#ifdef T0INTA_ORIGINAL03_ON
if (ui8_T0INTCOU_ORIGINAL == 03) {
   DO_T0INT_ORIGINAL03(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL04_HERE
#ifdef T0INTA_ORIGINAL04_ON
if (ui8_T0INTCOU_ORIGINAL == 04) {
   DO_T0INT_ORIGINAL04(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL05_HERE
#ifdef T0INTA_ORIGINAL05_ON
if (ui8_T0INTCOU_ORIGINAL == 05) {
   DO_T0INT_ORIGINAL05(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL06_HERE
#ifdef T0INTA_ORIGINAL06_ON
if (ui8_T0INTCOU_ORIGINAL == 06) {
   DO_T0INT_ORIGINAL06(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL07_HERE
#ifdef T0INTA_ORIGINAL07_ON
if (ui8_T0INTCOU_ORIGINAL == 07) {
   DO_T0INT_ORIGINAL07(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL08_HERE
#ifdef T0INTA_ORIGINAL08_ON
if (ui8_T0INTCOU_ORIGINAL == 08) {
   DO_T0INT_ORIGINAL08(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL09_HERE
#ifdef T0INTA_ORIGINAL09_ON
if (ui8_T0INTCOU_ORIGINAL == 09) {
   DO_T0INT_ORIGINAL09(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL10_HERE
#ifdef T0INTA_ORIGINAL10_ON
if (ui8_T0INTCOU_ORIGINAL == 10) {
   DO_T0INT_ORIGINAL10(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL11_HERE
#ifdef T0INTA_ORIGINAL11_ON
if (ui8_T0INTCOU_ORIGINAL == 11) {
   DO_T0INT_ORIGINAL11(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL12_HERE
#ifdef T0INTA_ORIGINAL12_ON
if (ui8_T0INTCOU_ORIGINAL == 12) {
   DO_T0INT_ORIGINAL12(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL13_HERE
#ifdef T0INTA_ORIGINAL13_ON
if (ui8_T0INTCOU_ORIGINAL == 13) {
   DO_T0INT_ORIGINAL13(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL14_HERE
#ifdef T0INTA_ORIGINAL14_ON
if (ui8_T0INTCOU_ORIGINAL == 14) {
   DO_T0INT_ORIGINAL14(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL15_HERE
#ifdef T0INTA_ORIGINAL15_ON
if (ui8_T0INTCOU_ORIGINAL == 15) {
   DO_T0INT_ORIGINAL15(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL16_HERE
#ifdef T0INTA_ORIGINAL16_ON
if (ui8_T0INTCOU_ORIGINAL == 16) {
   DO_T0INT_ORIGINAL16(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL17_HERE
#ifdef T0INTA_ORIGINAL17_ON
if (ui8_T0INTCOU_ORIGINAL == 17) {
   DO_T0INT_ORIGINAL17(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL18_HERE
#ifdef T0INTA_ORIGINAL18_ON
if (ui8_T0INTCOU_ORIGINAL == 18) {
   DO_T0INT_ORIGINAL18(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL19_HERE
#ifdef T0INTA_ORIGINAL19_ON
if (ui8_T0INTCOU_ORIGINAL == 19) {
   DO_T0INT_ORIGINAL19(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL20_HERE
#ifdef T0INTA_ORIGINAL20_ON
if (ui8_T0INTCOU_ORIGINAL == 20) {
   DO_T0INT_ORIGINAL20(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL21_HERE
#ifdef T0INTA_ORIGINAL21_ON
if (ui8_T0INTCOU_ORIGINAL == 21) {
   DO_T0INT_ORIGINAL21(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL22_HERE
#ifdef T0INTA_ORIGINAL22_ON
if (ui8_T0INTCOU_ORIGINAL == 22) {
   DO_T0INT_ORIGINAL22(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL23_HERE
#ifdef T0INTA_ORIGINAL23_ON
if (ui8_T0INTCOU_ORIGINAL == 23) {
   DO_T0INT_ORIGINAL23(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL24_HERE
#ifdef T0INTA_ORIGINAL24_ON
if (ui8_T0INTCOU_ORIGINAL == 24) {
   DO_T0INT_ORIGINAL24(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL25_HERE
#ifdef T0INTA_ORIGINAL25_ON
if (ui8_T0INTCOU_ORIGINAL == 25) {
   DO_T0INT_ORIGINAL25(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL26_HERE
#ifdef T0INTA_ORIGINAL26_ON
if (ui8_T0INTCOU_ORIGINAL == 26) {
   DO_T0INT_ORIGINAL26(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL27_HERE
#ifdef T0INTA_ORIGINAL27_ON
if (ui8_T0INTCOU_ORIGINAL == 27) {
   DO_T0INT_ORIGINAL27(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL28_HERE
#ifdef T0INTA_ORIGINAL28_ON
if (ui8_T0INTCOU_ORIGINAL == 28) {
   DO_T0INT_ORIGINAL28(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL29_HERE
#ifdef T0INTA_ORIGINAL29_ON
if (ui8_T0INTCOU_ORIGINAL == 29) {
   DO_T0INT_ORIGINAL29(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL30_HERE
#ifdef T0INTA_ORIGINAL30_ON
if (ui8_T0INTCOU_ORIGINAL == 30) {
   DO_T0INT_ORIGINAL30(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL31_HERE
#ifdef T0INTA_ORIGINAL31_ON
if (ui8_T0INTCOU_ORIGINAL == 31) {
   DO_T0INT_ORIGINAL31(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL32_HERE
#ifdef T0INTA_ORIGINAL32_ON
if (ui8_T0INTCOU_ORIGINAL == 32) {
   DO_T0INT_ORIGINAL32(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL33_HERE
#ifdef T0INTA_ORIGINAL33_ON
if (ui8_T0INTCOU_ORIGINAL == 33) {
   DO_T0INT_ORIGINAL33(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL34_HERE
#ifdef T0INTA_ORIGINAL34_ON
if (ui8_T0INTCOU_ORIGINAL == 34) {
   DO_T0INT_ORIGINAL34(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL35_HERE
#ifdef T0INTA_ORIGINAL35_ON
if (ui8_T0INTCOU_ORIGINAL == 35) { 
   DO_T0INT_ORIGINAL35(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL36_HERE
#ifdef T0INTA_ORIGINAL36_ON
if (ui8_T0INTCOU_ORIGINAL == 36) {
   DO_T0INT_ORIGINAL36(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL37_HERE
#ifdef T0INTA_ORIGINAL37_ON
if (ui8_T0INTCOU_ORIGINAL == 37) {
   DO_T0INT_ORIGINAL37(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL38_HERE
#ifdef T0INTA_ORIGINAL38_ON
if (ui8_T0INTCOU_ORIGINAL == 38) {
   DO_T0INT_ORIGINAL38(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL39_HERE
#ifdef T0INTA_ORIGINAL39_ON
if (ui8_T0INTCOU_ORIGINAL == 39) {
   DO_T0INT_ORIGINAL39(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL40_HERE
#ifdef T0INTA_ORIGINAL40_ON
if (ui8_T0INTCOU_ORIGINAL == 40) {
   DO_T0INT_ORIGINAL40(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL41_HERE
#ifdef T0INTA_ORIGINAL41_ON
if (ui8_T0INTCOU_ORIGINAL == 41) {
   DO_T0INT_ORIGINAL41(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL42_HERE
#ifdef T0INTA_ORIGINAL42_ON
if (ui8_T0INTCOU_ORIGINAL == 42) {
   DO_T0INT_ORIGINAL42(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL43_HERE
#ifdef T0INTA_ORIGINAL43_ON
if (ui8_T0INTCOU_ORIGINAL == 43) {
   DO_T0INT_ORIGINAL43(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL44_HERE
#ifdef T0INTA_ORIGINAL44_ON
if (ui8_T0INTCOU_ORIGINAL == 44) {
   DO_T0INT_ORIGINAL44(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL45_HERE
#ifdef T0INTA_ORIGINAL45_ON
if (ui8_T0INTCOU_ORIGINAL == 45) {
   DO_T0INT_ORIGINAL45(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL46_HERE
#ifdef T0INTA_ORIGINAL46_ON
if (ui8_T0INTCOU_ORIGINAL == 46) {
   DO_T0INT_ORIGINAL46(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL47_HERE
#ifdef T0INTA_ORIGINAL47_ON
if (ui8_T0INTCOU_ORIGINAL == 47) {
   DO_T0INT_ORIGINAL47(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL48_HERE
#ifdef T0INTA_ORIGINAL48_ON
if (ui8_T0INTCOU_ORIGINAL == 48) {
   DO_T0INT_ORIGINAL48(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL49_HERE
#ifdef T0INTA_ORIGINAL49_ON
if (ui8_T0INTCOU_ORIGINAL == 49) {
   DO_T0INT_ORIGINAL49(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif

#ifdef T0INTA_ORIGINAL50_HERE
#ifdef T0INTA_ORIGINAL50_ON
if (ui8_T0INTCOU_ORIGINAL == 50) {
   DO_T0INT_ORIGINAL50(); // weh_function
   goto END_OF_CHK_ORIGINAL;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_ORIGINAL:;


} //end function




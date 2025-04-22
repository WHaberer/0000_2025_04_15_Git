
//******************************************a
// afg_CHECK_T0INT_P00A00B00C.c
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
#ifdef T0INTA_P00A00B00C01_HERE
#ifdef T0INTA_P00A00B00C01_ON
if (ui8_T0INTCOU_P00A00B00C == 0 + T0INTCADD) DO_T0INT_P00A00B00C01(); // weh_function
goto END_OF_CHK_P00A00B00C;   
#endif
#endif

#ifdef T0INTA_P00A00B00C02_HERE
#ifdef T0INTA_P00A00B00C02_ON
if (ui8_T0INTCOU_P00A00B00C == 1 + T0INTCADD) DO_T0INT_P00A00B00C02(); // weh_function
goto END_OF_CHK_P00A00B00C;   
#endif
#endif
#endif //(NO)


#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0
//#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "File:      "
#pragma weh_all3 "afg_CHECK_T0INT_P00A00B00C.c      Start DO_T0INT_P00A00B00Cxx(); // weh_function \n"
#undef KLAPPE1

//***********************************************d



//*******************************************************************b
//* DO_CHECK_T0INT_P00A00B00C(); // weh_function
#undef KLAPPE0
//*******************************************************************c
void DO_CHECK_T0INT_P00A00B00C(void) {

//* Start of the T0INT States

#ifdef T0INTA_P00A00B00C01_HERE
#ifdef T0INTA_P00A00B00C01_ON
if (ui8_T0INTCOU_P00A00B00C == 01) {
   DO_T0INT_P00A00B00C01(); // weh_function   
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C02_HERE
#ifdef T0INTA_P00A00B00C02_ON
if (ui8_T0INTCOU_P00A00B00C == 02) {
   DO_T0INT_P00A00B00C02(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C03_HERE
#ifdef T0INTA_P00A00B00C03_ON
if (ui8_T0INTCOU_P00A00B00C == 03) {
   DO_T0INT_P00A00B00C03(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C04_HERE
#ifdef T0INTA_P00A00B00C04_ON
if (ui8_T0INTCOU_P00A00B00C == 04) {
   DO_T0INT_P00A00B00C04(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C05_HERE
#ifdef T0INTA_P00A00B00C05_ON
if (ui8_T0INTCOU_P00A00B00C == 05) {
   DO_T0INT_P00A00B00C05(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C06_HERE
#ifdef T0INTA_P00A00B00C06_ON
if (ui8_T0INTCOU_P00A00B00C == 06) {
   DO_T0INT_P00A00B00C06(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C07_HERE
#ifdef T0INTA_P00A00B00C07_ON
if (ui8_T0INTCOU_P00A00B00C == 07) {
   DO_T0INT_P00A00B00C07(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C08_HERE
#ifdef T0INTA_P00A00B00C08_ON
if (ui8_T0INTCOU_P00A00B00C == 08) {
   DO_T0INT_P00A00B00C08(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C09_HERE
#ifdef T0INTA_P00A00B00C09_ON
if (ui8_T0INTCOU_P00A00B00C == 09) {
   DO_T0INT_P00A00B00C09(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C10_HERE
#ifdef T0INTA_P00A00B00C10_ON
if (ui8_T0INTCOU_P00A00B00C == 10) {
   DO_T0INT_P00A00B00C10(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C11_HERE
#ifdef T0INTA_P00A00B00C11_ON
if (ui8_T0INTCOU_P00A00B00C == 11) {
   DO_T0INT_P00A00B00C11(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C12_HERE
#ifdef T0INTA_P00A00B00C12_ON
if (ui8_T0INTCOU_P00A00B00C == 12) {
   DO_T0INT_P00A00B00C12(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C13_HERE
#ifdef T0INTA_P00A00B00C13_ON
if (ui8_T0INTCOU_P00A00B00C == 13) {
   DO_T0INT_P00A00B00C13(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C14_HERE
#ifdef T0INTA_P00A00B00C14_ON
if (ui8_T0INTCOU_P00A00B00C == 14) {
   DO_T0INT_P00A00B00C14(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C15_HERE
#ifdef T0INTA_P00A00B00C15_ON
if (ui8_T0INTCOU_P00A00B00C == 15) {
   DO_T0INT_P00A00B00C15(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C16_HERE
#ifdef T0INTA_P00A00B00C16_ON
if (ui8_T0INTCOU_P00A00B00C == 16) {
   DO_T0INT_P00A00B00C16(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C17_HERE
#ifdef T0INTA_P00A00B00C17_ON
if (ui8_T0INTCOU_P00A00B00C == 17) {
   DO_T0INT_P00A00B00C17(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C18_HERE
#ifdef T0INTA_P00A00B00C18_ON
if (ui8_T0INTCOU_P00A00B00C == 18) {
   DO_T0INT_P00A00B00C18(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C19_HERE
#ifdef T0INTA_P00A00B00C19_ON
if (ui8_T0INTCOU_P00A00B00C == 19) {
   DO_T0INT_P00A00B00C19(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C20_HERE
#ifdef T0INTA_P00A00B00C20_ON
if (ui8_T0INTCOU_P00A00B00C == 20) {
   DO_T0INT_P00A00B00C20(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C21_HERE
#ifdef T0INTA_P00A00B00C21_ON
if (ui8_T0INTCOU_P00A00B00C == 21) {
   DO_T0INT_P00A00B00C21(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C22_HERE
#ifdef T0INTA_P00A00B00C22_ON
if (ui8_T0INTCOU_P00A00B00C == 22) {
   DO_T0INT_P00A00B00C22(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C23_HERE
#ifdef T0INTA_P00A00B00C23_ON
if (ui8_T0INTCOU_P00A00B00C == 23) {
   DO_T0INT_P00A00B00C23(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C24_HERE
#ifdef T0INTA_P00A00B00C24_ON
if (ui8_T0INTCOU_P00A00B00C == 24) {
   DO_T0INT_P00A00B00C24(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C25_HERE
#ifdef T0INTA_P00A00B00C25_ON
if (ui8_T0INTCOU_P00A00B00C == 25) {
   DO_T0INT_P00A00B00C25(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C26_HERE
#ifdef T0INTA_P00A00B00C26_ON
if (ui8_T0INTCOU_P00A00B00C == 26) {
   DO_T0INT_P00A00B00C26(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C27_HERE
#ifdef T0INTA_P00A00B00C27_ON
if (ui8_T0INTCOU_P00A00B00C == 27) {
   DO_T0INT_P00A00B00C27(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C28_HERE
#ifdef T0INTA_P00A00B00C28_ON
if (ui8_T0INTCOU_P00A00B00C == 28) {
   DO_T0INT_P00A00B00C28(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C29_HERE
#ifdef T0INTA_P00A00B00C29_ON
if (ui8_T0INTCOU_P00A00B00C == 29) {
   DO_T0INT_P00A00B00C29(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C30_HERE
#ifdef T0INTA_P00A00B00C30_ON
if (ui8_T0INTCOU_P00A00B00C == 30) {
   DO_T0INT_P00A00B00C30(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C31_HERE
#ifdef T0INTA_P00A00B00C31_ON
if (ui8_T0INTCOU_P00A00B00C == 31) {
   DO_T0INT_P00A00B00C31(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C32_HERE
#ifdef T0INTA_P00A00B00C32_ON
if (ui8_T0INTCOU_P00A00B00C == 32) {
   DO_T0INT_P00A00B00C32(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C33_HERE
#ifdef T0INTA_P00A00B00C33_ON
if (ui8_T0INTCOU_P00A00B00C == 33) {
   DO_T0INT_P00A00B00C33(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C34_HERE
#ifdef T0INTA_P00A00B00C34_ON
if (ui8_T0INTCOU_P00A00B00C == 34) {
   DO_T0INT_P00A00B00C34(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C35_HERE
#ifdef T0INTA_P00A00B00C35_ON
if (ui8_T0INTCOU_P00A00B00C == 35) { 
   DO_T0INT_P00A00B00C35(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C36_HERE
#ifdef T0INTA_P00A00B00C36_ON
if (ui8_T0INTCOU_P00A00B00C == 36) {
   DO_T0INT_P00A00B00C36(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C37_HERE
#ifdef T0INTA_P00A00B00C37_ON
if (ui8_T0INTCOU_P00A00B00C == 37) {
   DO_T0INT_P00A00B00C37(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C38_HERE
#ifdef T0INTA_P00A00B00C38_ON
if (ui8_T0INTCOU_P00A00B00C == 38) {
   DO_T0INT_P00A00B00C38(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C39_HERE
#ifdef T0INTA_P00A00B00C39_ON
if (ui8_T0INTCOU_P00A00B00C == 39) {
   DO_T0INT_P00A00B00C39(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C40_HERE
#ifdef T0INTA_P00A00B00C40_ON
if (ui8_T0INTCOU_P00A00B00C == 40) {
   DO_T0INT_P00A00B00C40(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C41_HERE
#ifdef T0INTA_P00A00B00C41_ON
if (ui8_T0INTCOU_P00A00B00C == 41) {
   DO_T0INT_P00A00B00C41(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C42_HERE
#ifdef T0INTA_P00A00B00C42_ON
if (ui8_T0INTCOU_P00A00B00C == 42) {
   DO_T0INT_P00A00B00C42(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C43_HERE
#ifdef T0INTA_P00A00B00C43_ON
if (ui8_T0INTCOU_P00A00B00C == 43) {
   DO_T0INT_P00A00B00C43(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C44_HERE
#ifdef T0INTA_P00A00B00C44_ON
if (ui8_T0INTCOU_P00A00B00C == 44) {
   DO_T0INT_P00A00B00C44(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C45_HERE
#ifdef T0INTA_P00A00B00C45_ON
if (ui8_T0INTCOU_P00A00B00C == 45) {
   DO_T0INT_P00A00B00C45(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C46_HERE
#ifdef T0INTA_P00A00B00C46_ON
if (ui8_T0INTCOU_P00A00B00C == 46) {
   DO_T0INT_P00A00B00C46(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C47_HERE
#ifdef T0INTA_P00A00B00C47_ON
if (ui8_T0INTCOU_P00A00B00C == 47) {
   DO_T0INT_P00A00B00C47(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C48_HERE
#ifdef T0INTA_P00A00B00C48_ON
if (ui8_T0INTCOU_P00A00B00C == 48) {
   DO_T0INT_P00A00B00C48(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C49_HERE
#ifdef T0INTA_P00A00B00C49_ON
if (ui8_T0INTCOU_P00A00B00C == 49) {
   DO_T0INT_P00A00B00C49(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif

#ifdef T0INTA_P00A00B00C50_HERE
#ifdef T0INTA_P00A00B00C50_ON
if (ui8_T0INTCOU_P00A00B00C == 50) {
   DO_T0INT_P00A00B00C50(); // weh_function
   goto END_OF_CHK_P00A00B00C;
}   
#endif
#endif



// sprungmarke
END_OF_CHK_P00A00B00C:;


} //end function




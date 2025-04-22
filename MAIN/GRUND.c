
//******************************************a
// GRUND.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!


//********************************j
//* 01 Doku Begin
#undef KLAPPE0

#pragma weh_echo "//******************************************a\n"
#pragma weh_echo "// GRUND.c \n"

#pragma weh_indo "//******************************************a\n"
#pragma weh_indo "// GRUND.c \n"

#undef KLAPPE1

#ifdef NO //DOKU

start pp with:
cd U:\WORK\0_TM4C\tm4c1294-hw-demo\WORK\MAIN

pp with:
U:\WORK\0_C_PPweh\WORK\MAIN\pp_weh GRUND.c
= U:\WORK\0_TM4C\tm4c1294-hw-demo\WORK\MAIN>U:\WORK\0_C_PPweh\WORK\MAIN\pp_weh GRUND.c
oder pp.bat

make on PC with:
ma.bat   


// TI Eval prgrammieren mit:
// from KUBUNTU (aon VM Ware)
sudo lm4flash -E -S 0x0 ./gcc/GRUND.bin
or
     lm4flash -E -S 0x0 ./gcc/GRUND.bin
     

Hint: ;-)
Dont define variables (even const) in h files. extern them there.
The rule of thumb - if it is creating an object in memory - it should not be in the header.
    – Eugene Sh.  Jul 26, 2019 at 14:16

// automatisch erzeugte  Files sind in ../INC
// selbst      erstellte Files sind in ../MAIN

#endif //(NO //DOKU)

//***********************************************d

//********************************j
//* 10 Includes C
#include <stdint.h>
#include <stdbool.h>   

//********************************j
//* 12 Prototypes

//void Weh_UserHwInit(void);    // prototype
void SYS_LED_WORK_CPL(void);

//********************************j
//* 13 Includes before Main
#undef KLAPPE0

//* 14 Include top_def
#pragma weh_all3 "//******************************************a\n"
#include "../MAIN/a_top_def.c"

//* 14 INC_FILES_A_P.asm          INC_FILES_A_P     3 Files
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "Include:   INC_FILES_A_P.c               3 Files \n"
#include "../MAIN/INC_FILES_A_P.c"

//* 14 inc_AFG_ALL_B              All Functions Grund _B (only _B - no _E File !)
#pragma weh_all3 "\n"
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "Include:   inc_AFG_ALL_B.c     AFG       only one _B File!\n"
#include "../MAIN/inc_AFG_ALL_B.c"

#undef KLAPPE1

//***********************************************d

//* 20 A ---------------------
//* 50 X ---------------------

//***********************************************d
//* 20 main
   int main(void) {

#undef KLAPPE0

#pragma weh_all3 "\n"
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "MAIN:      Begin \n"
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "\n"

//* 21 INC_FILES_fr0 fr1     wird nur einmal ausgefuehrt
#ifndef RESET_DELCOU_HERE
// Reset fr0 and fr1 Init Files (2 Layer Hardwarereset)
// Hier als init wenn kein Reset Counter vorhanden ... später im reset counter layer 0
#pragma weh_all3 "NO RESET_DELCOU_HERE ! Include here the Reset/Init Functions  \n"

#ifdef fr0_HERE
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "Include:   INC_FILES_fr0.c               3 Files \n"
#pragma weh_all3 "#undef KLAPPE0 \n"
#include "../MAIN/INC_FILES_fr0.c"
#pragma weh_all3 "#undef KLAPPE1 \n"
#endif //(fr0_HERE)

#ifdef fr1_HERE
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "Include:   INC_FILES_fr1.c               3 Files \n"
#pragma weh_all3 "#undef KLAPPE0 \n"
#include "../MAIN/INC_FILES_fr1.c"
#pragma weh_all3 "#undef KLAPPE1 \n"
#endif //(fr1_HERE)

#else //NOT (RESET_DELCOU_HERE)
#pragma weh_all3 "   RESET_DELCOU_HERE include the Reset/Init Functions in Main \n"

#endif //NOT (RESET_DELCOU_HERE)

//***********************************************d
//* 22 MAIN_LOOP_HERE      Hauptprogramm und MAIN
#ifdef MAIN_LOOP_HERE
//er bleibt immer in dem MAIN Programm
//darin ist die Loop !!!

//* "While Loop Forever"- Start   (is MAIN: in ASM)
   while(true) {

#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "Include:   INC_FILES_am.c                3 Files \n"
#include "../MAIN/INC_FILES_am.c"

   // jmp to "While Loop Forever"- Start   (is MAIN: in ASM)
   } //end while(true)

#endif //(MAIN_LOOP_HERE)
//***********************************************d

#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "\n"


#ifdef WEH_ERROR           //ein WEH USER ERROR ist aufgetreten
#pragma weh_all3 "\n"
#pragma weh_all3 "WEH_ERROR    *   * \n"
#pragma weh_all3 "              * *  \n"
#pragma weh_all3 "               *   \n"
#pragma weh_all3 "              * *  \n"
#pragma weh_all3 "             *   * \n"
#pragma weh_all3 "\n"
#else
#pragma weh_all3 "NO WEH_ERROR         = OK     \n"
#endif //(WEH_ERROR)

#ifdef WEH_WARNING           //ein WEH USER WARNING ist aufgetreten
#pragma weh_all3 "\n"
#pragma weh_all3 "WEH_WARNING  *           * \n"
#pragma weh_all3 "              *         * \n"
#pragma weh_all3 "               *   *   * \n"
#pragma weh_all3 "                * * * * \n"
#pragma weh_all3 "                 *   * \n"
#pragma weh_all3 "\n"
#else
#pragma weh_all3 "NO WEH_WARNING       = OK\n"
#endif //(WEH_WARNING)



#pragma weh_all3 "\n"
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "MAIN:      End \n"
#pragma weh_all3 "\n"
#undef KLAPPE1

   } //end (main)

//end
//***************************k

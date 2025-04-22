
//******************************************a
// afg_T0INT_PROG_FUNCT.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!
 
#ifdef NO //DOKU
#endif //(NO //DOKU)

// Include GRUND with 96 kHz (in C und ASM)
// Die T0..INT_PROG_FUNCT weh function
// wird vom TIMER0 Interrupt mit LJMP(stimmt bei ASM) angesprungen und mit RETI beendet

// 00 Echo Begin
//#pragma weh_all3 "File:      afg_T0INT_PROG_FUNCT.c \n"

//***********************************************d


//********************************j
//* Functions


//*************************************************************************
// interrupt handler for T0INT Interrupt
//* T0INT_TIMER_0_IntHandler
void T0INT_TIMER_0_IntHandler(void) {
//*************************************************************************
#pragma weh_all3 "File:      T0INT_TIMER_0_IntHandler \n"

// Include GRUND with 96 kHz (in C und ASM)
// Die T0..INT_PROG_FUNCT weh function
// wird vom TIMER0 Interrupt mit LJMP(stimmt bei ASM) angesprungen und mit RETI beendet

// Clear the timer interrupt in GRUND
   MAP_TimerIntClear(TIMER0_BASE, TIMER_TIMA_TIMEOUT);

// inc counter variable
#ifdef TIMING_COUNTER_GRUND_HERE
   ui32_Timing_Counter_T0INT_Grund ++;
#endif //(TIMING_COUNTER_GRUND_HERE)

//* Do GRUND with 96 kHz
#ifdef T0INTA_CG_ON
   DO_T0INT_CG(); // weh_function
#endif


// checke P Counter mit jedem durchgang von G
// es gibt keinen G Counter

//* Do Check P with 96 kHz       ist OK !
// darin wird in die Counter States 01..x gesprungen
#ifdef T0INTA_CP_ON
   DO_CHECK_T0INT_P(); // weh_function
#endif



// T0INT Counter Überlegung :

// P A B C D
// 1 1 1 1 1
// 0 1 1 1 1
// 0 m m m m    oh nach dem P dec werden alle cou auf dem max wert gesetzt
//
// mit else
// 1 1 1 1
// 0 1 1 1
// m 0 1 1
// 6 m 0 1

#ifdef NO
4 4
3 4
2 4
1 4
0 4
4 3
3 3
2 3
1 3
0 3
4 2
3 2
2 2
1 2
0 2
4 1
3 1
2 1
1 1
0 1
4 0
3 0
2 0
1 0
0 0

4 4



#endif



// ich muss nach einer aktion die Counter Funktion verlassen !

//*************************************************************************
// timer0 interupt counter loop   In GRUND
// do not change this
//*************************************************************************
#undef KLAPPE0

// in ASM         djnz T0COUNTER_N,T0INT_DEC_END    ; 4 clocks bei ATM
// immer wenn Counter = 0 Init default Value
// dann decrement

#ifdef T0INTA_CP_HERE
   ui8_T0INTCOU_P --;
   if (ui8_T0INTCOU_P != 0) goto END_OF_COU;
   // HERE: counter is zero   
   //ui8_T0INTCOU_P = T0INTA_G_F_Z_SOLL / T0INTA_P_F_Z_SOLL; // calc with cent Hz
   ui8_T0INTCOU_P = T0INTA_D_VAL_G_TO_P; // Divisor Value
#ifdef T0INTA_CA_HERE
   DO_CHECK_T0INT_P00A(); // weh_function
#endif //(T0INTA_CA_HERE)
#endif //(T0INTA_CP_HERE)

#ifdef T0INTA_CA_HERE
   ui8_T0INTCOU_P00A --;
   if (ui8_T0INTCOU_P00A != 0) goto END_OF_COU;
   // HERE: counter is zero   
   ui8_T0INTCOU_P00A = T0INTA_D_VAL_P_TO_A;
#ifdef T0INTA_CB_HERE
   DO_CHECK_T0INT_P00A00B(); // weh_function
#endif //(T0INTA_CB_HERE)
#endif //(T0INTA_CA_HERE)

#ifdef T0INTA_CB_HERE
   ui8_T0INTCOU_P00A00B --;
   if (ui8_T0INTCOU_P00A00B != 0) goto END_OF_COU;
   // HERE: counter is zero   
   ui8_T0INTCOU_P00A00B = T0INTA_D_VAL_A_TO_B;
#ifdef T0INTA_CC_HERE
   DO_CHECK_T0INT_P00A00B00C(); // weh_function
#endif //(T0INTA_CC_HERE)
#endif //(T0INTA_CB_HERE)

#ifdef T0INTA_CC_HERE
   ui8_T0INTCOU_P00A00B00C --;
   if (ui8_T0INTCOU_P00A00B00C != 0) goto END_OF_COU;
   // HERE: counter is zero   
   ui8_T0INTCOU_P00A00B00C = T0INTA_D_VAL_B_TO_C;
#ifdef T0INTA_CD_HERE
   DO_CHECK_T0INT_P00A00B00C00D(); // weh_function
#endif //(T0INTA_CD_HERE)
#endif //(T0INTA_CC_HERE)

#ifdef T0INTA_CD_HERE
   ui8_T0INTCOU_P00A00B00C00D --;
   if (ui8_T0INTCOU_P00A00B00C00D != 0) goto END_OF_COU;
   // HERE: counter is zero   
   ui8_T0INTCOU_P00A00B00C00D = T0INTA_D_VAL_C_TO_D;
#ifdef T0INTA_CE_HERE
   DO_CHECK_T0INT_P00A00B00C00D00E(); // weh_function
#endif //(T0INTA_CE_HERE)
#endif //(T0INTA_CD_HERE)

#ifdef T0INTA_CE_HERE
   ui8_T0INTCOU_P00A00B00C00D00E --;
   if (ui8_T0INTCOU_P00A00B00C00D00E != 0) goto END_OF_COU;
   // HERE: counter is zero   
   ui8_T0INTCOU_P00A00B00C00D00E = T0INTA_D_VAL_D_TO_E;
#endif //(T0INTA_CE_HERE)

// sprungmarke
END_OF_COU:;

#undef KLAPPE1


} //end function T0INT_TIMER_0_IntHandler
#undef KLAPPE1


//******************************************a
// p_T0INT_ALL_B.c
//******************************************a

// for all Projects

// "only one _B File!" Here !

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

// Configure the Timer Time
//   1 Hz
// MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, ui32SysClock);
// Configure the 32 Bit periodic timer
// 1/2 Hz
// MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, ui32SysClock / 2);

// MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, ui32SysClock/10);    //= 1/10 Hz = 10 x pro sekunde
   MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, ui32SysClock/T0INTA_G_F_SOLL);   // = 96000 Hz = 96000 x each second


bei 32 Bit :
höchste Zahl   2147483647  =  2 147 483 647
= 22.369,619891260902 sec
372,8269981876817 Min
6,2137833031280283333333333333333 Stunden
WOW

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_T0INT_ALL_B.c \n"
//***********************************************d


//********************************j
//* Defines

// zenti Herz
// T0INT Soll Frequenzen :
//SOLL: 16000 Hz ; <evtl.N here> 8000 Hz ; 200 Hz ; 40 Hz ; 10 Hz ; 2 Hz ; (0,1 Hz)

// grund is 96 kHz or 16 kHz
#define T0INTA_G_F_Z_SOLL   9600000  // Z is centy Hz
#define T0INTA_G_F_SOLL     96000    // for calculations in Hz  = 10,416666 us

#define T0INTA_P_F_Z_SOLL    800000  // =  8000 Hz
#define T0INTA_A_F_Z_SOLL     20000  // =   200 Hz
#define T0INTA_B_F_Z_SOLL      4000  // =    40 Hz
#define T0INTA_C_F_Z_SOLL      1000  // =    10 Hz
#define T0INTA_D_F_Z_SOLL       200  // =     2 Hz
#define T0INTA_E_F_Z_SOLL        10  // =     0,1 Hz (10 x each second)

//* Defines Teiler für T0INT Interrupt
// ui32SysClock kann sich ändern ! (wegen PLL, anderer XTAL)
#define T0INT_FREQ_DIVISOR  ui32SysClock / T0INTA_G_F_SOLL

// T0INT Grund    96000 Hz 9600000  cHz (centiherz)   Teiler
//       P        8000  Hz 800000   cHz (centiherz)   12
//       A        200   Hz 20000    cHz (centiherz)   40
//       B        40    Hz 4000     cHz (centiherz)    5
//       C        10    Hz 1000     cHz (centiherz)    4
//       D        2     Hz 200      cHz (centiherz)    5
//       E        0,1   Hz 10       cHz (centiherz)   20

// aus EXCEL
// CP =     96000 Hz 9600000  cHz (centiherz)                  0,000010    sec   0,010416667 ms 10,41666667 us
// CP =     8000  Hz 800000   cHz (centiherz)   Teiler : 12    0,000125    sec   0,125       ms 125         us
// CA =     200   Hz 20000    cHz (centiherz)   Teiler : 40    0,005000    sec   5           ms 5000        us
// CB =     40    Hz 4000     cHz (centiherz)   Teiler : 5     0,025000    sec   25          ms 25000       us
// CC =     10    Hz 1000     cHz (centiherz)   Teiler : 4     0,100000    sec   100         ms 100000      us
// CD =     2     Hz 200      cHz (centiherz)   Teiler : 5     0,500000    sec   500         ms 500000      us
// CE =     0,1   Hz 10       cHz (centiherz)   Teiler : 20    10,000000   sec   10000       ms 10000000    us



// Define General if T0INT States here
// per Hand für jedes Project definieren !!!

#pragma weh_all3 "// Define for Project: T0INTA_Cx_HERE \n"
#pragma weh_all3 "\n"

#define T0INTA_CG_HERE // always ON
#define T0INTA_CP_HERE
#define T0INTA_CA_HERE
#define T0INTA_CB_HERE
#define T0INTA_CC_HERE
#define T0INTA_CD_HERE
#define T0INTA_CE_HERE


#pragma weh_all3 "// 01 Schalte die vorherigen HERE States ON \n"
#pragma weh_all3 "\n"


//* 01 Schalte die vorherigen HERE States ON
#undef KLAPPE0

#ifdef T0INTA_CE_HERE
#pragma weh_all3 "       CE is HERE \n"
//***
#ifndef T0INTA_CD_HERE
#pragma weh_all3 "switch CD HERE to HERE \n"
#define T0INTA_CD_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CE HERE = OFF\n"
#endif

#ifdef T0INTA_CD_HERE
#pragma weh_all3 "       CD is HERE \n"
//***
#ifndef T0INTA_CC_HERE
#pragma weh_all3 "switch CC HERE to HERE \n"
#define T0INTA_CC_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CD HERE = OFF\n"
#endif

#ifdef T0INTA_CC_HERE
#pragma weh_all3 "       CC is HERE \n"
//***
#ifndef T0INTA_CB_HERE
#pragma weh_all3 "switch CB HERE to HERE \n"
#define T0INTA_CB_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CC HERE = OFF\n"
#endif

#ifdef T0INTA_CB_HERE
#pragma weh_all3 "       CB is HERE \n"
//***
#ifndef T0INTA_CA_HERE
#pragma weh_all3 "switch CA HERE to HERE \n"
#define T0INTA_CA_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CB HERE = OFF\n"
#endif

#ifdef T0INTA_CA_HERE
#pragma weh_all3 "       CA is HERE \n"
//***
#ifndef T0INTA_CP_HERE
#pragma weh_all3 "switch CP HERE to HERE \n"
#define T0INTA_CP_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CA HERE = OFF\n"
#endif

#ifdef T0INTA_CP_HERE
#pragma weh_all3 "       CP is HERE \n"
//***
#ifndef T0INTA_CG_HERE
#pragma weh_all3 "switch CG HERE to HERE \n"
#define T0INTA_CG_HERE
#endif
//***
#else
#pragma weh_all3 "    NO CP HERE = OFF\n"
#endif

#ifdef T0INTA_CG_HERE
#pragma weh_all3 "       CG is HERE \n"
#else
#pragma weh_all3 "    NO CG HERE = OFF\n"
#endif

#undef KLAPPE1


#pragma weh_all3 "\n"


//* 02 XTAL Frequenz / T0INT Teiler 

// das sollte aus einer Berechnung kommen
// jetzt noch Fest !
#ifdef T0INTA_CG_HERE
#define T0INTA_G_F_Z_IS   9600000  // Z is centy Hz
#define T0INTA_G_F_IS     96000    // Hz
#endif

//* Defines Teiler für T0INT Stufe G to P
// Berechne Teiler automatisch

#ifdef T0INTA_CP_HERE
#define T0INTA_D_VAL_G_TO_P (T0INTA_G_F_Z_SOLL / T0INTA_P_F_Z_SOLL)
#endif

#ifdef T0INTA_CA_HERE
#define T0INTA_D_VAL_P_TO_A (T0INTA_P_F_Z_SOLL / T0INTA_A_F_Z_SOLL)
#endif

#ifdef T0INTA_CB_HERE
#define T0INTA_D_VAL_A_TO_B (T0INTA_A_F_Z_SOLL / T0INTA_B_F_Z_SOLL)
#endif

#ifdef T0INTA_CC_HERE
#define T0INTA_D_VAL_B_TO_C (T0INTA_B_F_Z_SOLL / T0INTA_C_F_Z_SOLL)
#endif

#ifdef T0INTA_CD_HERE
#define T0INTA_D_VAL_C_TO_D (T0INTA_C_F_Z_SOLL / T0INTA_D_F_Z_SOLL)
#endif

#ifdef T0INTA_CE_HERE
#define T0INTA_D_VAL_D_TO_E (T0INTA_D_F_Z_SOLL / T0INTA_E_F_Z_SOLL)
#endif

// immer alle Teiler ... per Hand (auch für die einfache PP Ausgabe) (aus Excel)
#define T0INTA_D_VAL_G_TO_P_HAND    12
#define T0INTA_D_VAL_P_TO_A_HAND    40
#define T0INTA_D_VAL_A_TO_B_HAND     5
#define T0INTA_D_VAL_B_TO_C_HAND     4
#define T0INTA_D_VAL_C_TO_D_HAND     5
#define T0INTA_D_VAL_D_TO_E_HAND    20

#define T0INTA_A_P_MS_IS             5      // Periodendauer in ms
#define T0INTA_B_P_MS_IS            25      // Periodendauer in ms


#if (T0INTA_D_VAL_G_TO_P_HAND == T0INTA_D_VAL_G_TO_P_HAND)
#pragma weh_all3 "Teiler  G_TO_P       OK \n"
#else
#pragma weh_all3 "Teiler  G_TO_P       ERROR \n"
#endif 

#if (T0INTA_D_VAL_P_TO_A_HAND == T0INTA_D_VAL_P_TO_A_HAND)
#pragma weh_all3 "Teiler  P_TO_A       OK \n"
#else
#pragma weh_all3 "Teiler  P_TO_A       ERROR \n"
#endif 

#if (T0INTA_D_VAL_A_TO_B_HAND == T0INTA_D_VAL_A_TO_B_HAND)
#pragma weh_all3 "Teiler  A_TO_B       OK \n"
#else
#pragma weh_all3 "Teiler  A_TO_B       ERROR \n"
#endif 

#if (T0INTA_D_VAL_B_TO_C_HAND == T0INTA_D_VAL_B_TO_C_HAND)
#pragma weh_all3 "Teiler  B_TO_C       OK \n"
#else
#pragma weh_all3 "Teiler  B_TO_C       ERROR \n"
#endif 

#if (T0INTA_D_VAL_C_TO_D_HAND == T0INTA_D_VAL_C_TO_D_HAND)
#pragma weh_all3 "Teiler  C_TO_D       OK \n"
#else
#pragma weh_all3 "Teiler  C_TO_D       ERROR \n"
#endif 

#if (T0INTA_D_VAL_D_TO_E_HAND == T0INTA_D_VAL_D_TO_E_HAND)
#pragma weh_all3 "Teiler  D_TO_E       OK \n"
#else
#pragma weh_all3 "Teiler  D_TO_E       ERROR \n"
#endif 


#pragma weh_all3 "\n"


// Berechne F IS

#ifdef T0INTA_CP_HERE
#define T0INTA_P_F_Z_IS (T0INTA_G_F_Z_IS / T0INTA_D_VAL_G_TO_P)
#endif
#ifdef T0INTA_CA_HERE
#define T0INTA_A_F_Z_IS (T0INTA_P_F_Z_IS / T0INTA_D_VAL_P_TO_A)
#endif
#ifdef T0INTA_CB_HERE
#define T0INTA_B_F_Z_IS (T0INTA_A_F_Z_IS / T0INTA_D_VAL_A_TO_B)
#endif
#ifdef T0INTA_CC_HERE
#define T0INTA_C_F_Z_IS (T0INTA_B_F_Z_IS / T0INTA_D_VAL_B_TO_C)
#endif
#ifdef T0INTA_CD_HERE
#define T0INTA_D_F_Z_IS (T0INTA_C_F_Z_IS / T0INTA_D_VAL_C_TO_D)
#endif
#ifdef T0INTA_CE_HERE
#define T0INTA_E_F_Z_IS (T0INTA_D_F_Z_IS / T0INTA_D_VAL_D_TO_E)
#endif


// Define States Here (by Hand)
// spärer:
//#if (D_VAL_G_TO_P >=0)
//#define T0INTA_P01_HERE
//#endif

#ifdef T0INTA_CP_HERE
#define T0INTA_P12_HERE   // Teilung durch 12 = "Erster State" !
#define T0INTA_P11_HERE
#define T0INTA_P10_HERE
#define T0INTA_P09_HERE
#define T0INTA_P08_HERE
#define T0INTA_P07_HERE
#define T0INTA_P06_HERE
#define T0INTA_P05_HERE
#define T0INTA_P04_HERE
#define T0INTA_P03_HERE
#define T0INTA_P02_HERE
#define T0INTA_P01_HERE
#define T0INTA_P00_HERE   // wird gleich zu : "Erster State"
#endif

#ifdef T0INTA_CA_HERE
#define T0INTA_P00A40_HERE
#define T0INTA_P00A39_HERE
#define T0INTA_P00A38_HERE
#define T0INTA_P00A37_HERE
#define T0INTA_P00A36_HERE
#define T0INTA_P00A35_HERE
#define T0INTA_P00A34_HERE
#define T0INTA_P00A33_HERE
#define T0INTA_P00A32_HERE
#define T0INTA_P00A31_HERE
#define T0INTA_P00A30_HERE
#define T0INTA_P00A29_HERE
#define T0INTA_P00A28_HERE
#define T0INTA_P00A27_HERE
#define T0INTA_P00A26_HERE
#define T0INTA_P00A25_HERE
#define T0INTA_P00A24_HERE
#define T0INTA_P00A23_HERE
#define T0INTA_P00A22_HERE
#define T0INTA_P00A21_HERE
#define T0INTA_P00A20_HERE
#define T0INTA_P00A19_HERE
#define T0INTA_P00A18_HERE
#define T0INTA_P00A17_HERE
#define T0INTA_P00A16_HERE
#define T0INTA_P00A15_HERE
#define T0INTA_P00A14_HERE
#define T0INTA_P00A13_HERE
#define T0INTA_P00A12_HERE
#define T0INTA_P00A11_HERE
#define T0INTA_P00A10_HERE
#define T0INTA_P00A09_HERE
#define T0INTA_P00A08_HERE
#define T0INTA_P00A07_HERE
#define T0INTA_P00A06_HERE
#define T0INTA_P00A05_HERE
#define T0INTA_P00A04_HERE
#define T0INTA_P00A03_HERE
#define T0INTA_P00A02_HERE
#define T0INTA_P00A01_HERE
#define T0INTA_P00A00_HERE   // wird gleich zu : "Erster State"
#endif

#ifdef T0INTA_CB_HERE
#define T0INTA_P00A00B05_HERE
#define T0INTA_P00A00B04_HERE
#define T0INTA_P00A00B03_HERE
#define T0INTA_P00A00B02_HERE
#define T0INTA_P00A00B01_HERE
#define T0INTA_P00A00B00_HERE   // wird gleich zu : "Erster State"
#endif

#ifdef T0INTA_CC_HERE
#define T0INTA_P00A00B00C04_HERE
#define T0INTA_P00A00B00C03_HERE
#define T0INTA_P00A00B00C02_HERE
#define T0INTA_P00A00B00C01_HERE
#define T0INTA_P00A00B00C00_HERE   // wird gleich zu : "Erster State"
#endif

#ifdef T0INTA_CD_HERE
#define T0INTA_P00A00B00C00D05_HERE
#define T0INTA_P00A00B00C00D04_HERE
#define T0INTA_P00A00B00C00D03_HERE
#define T0INTA_P00A00B00C00D02_HERE
#define T0INTA_P00A00B00C00D01_HERE
#define T0INTA_P00A00B00C00D00_HERE   // wird gleich zu : "Erster State"
#endif

#ifdef T0INTA_CE_HERE
#define T0INTA_P00A00B00C00D00E20_HERE
#define T0INTA_P00A00B00C00D00E19_HERE
#define T0INTA_P00A00B00C00D00E18_HERE
#define T0INTA_P00A00B00C00D00E17_HERE
#define T0INTA_P00A00B00C00D00E16_HERE
#define T0INTA_P00A00B00C00D00E15_HERE
#define T0INTA_P00A00B00C00D00E14_HERE
#define T0INTA_P00A00B00C00D00E13_HERE
#define T0INTA_P00A00B00C00D00E12_HERE
#define T0INTA_P00A00B00C00D00E11_HERE
#define T0INTA_P00A00B00C00D00E10_HERE
#define T0INTA_P00A00B00C00D00E09_HERE
#define T0INTA_P00A00B00C00D00E08_HERE
#define T0INTA_P00A00B00C00D00E07_HERE
#define T0INTA_P00A00B00C00D00E06_HERE
#define T0INTA_P00A00B00C00D00E05_HERE
#define T0INTA_P00A00B00C00D00E04_HERE
#define T0INTA_P00A00B00C00D00E03_HERE
#define T0INTA_P00A00B00C00D00E02_HERE
#define T0INTA_P00A00B00C00D00E01_HERE
#define T0INTA_P00A00B00C00D00E00_HERE   // wird gleich zu : "Erster State"
#endif


// die 00 sind immer ON wenn State HERE
// das brauch ich nicht weil die Counter überprüfung
// im State 00 abhängig ist von T0INTA_CP_HERE T0INTA_CA_HERE T0INTA_CB_HERE ...
#ifdef NO

#ifdef T0INTA_CP_HERE
#define T0INTA_P00_ON
#endif

#ifdef T0INTA_CA_HERE
#define T0INTA_P00A00_ON
#endif

#ifdef T0INTA_CB_HERE
#define T0INTA_P00A00B00_ON
#endif

#ifdef T0INTA_CC_HERE
#define T0INTA_P00A00B00C00_ON
#endif

#ifdef T0INTA_CD_HERE
#define T0INTA_P00A00B00C00D00_ON
#endif

#ifdef T0INTA_CE_HERE
#define T0INTA_P00A00B00C00D00E00_ON
#endif

#endif //(NO)

//********************************j
//* ZZ Variables

#pragma weh_all3 "   Define Counter Variables    ui8_T0INTCOU_P  ui8_T0INTCOU_P00A ... \n"

//uint8_t ui8_T0INTCOU_N;                // um auf die 24000 kHz zu kommen  (muss nicht immer hier sein)
uint8_t ui8_T0INTCOU_P;                  // um auf die 8000  kHz zu kommen
uint8_t ui8_T0INTCOU_P00A;               // =   200 Hz
uint8_t ui8_T0INTCOU_P00A00B;            // =    40 Hz
uint8_t ui8_T0INTCOU_P00A00B00C;         // =    10 Hz
uint8_t ui8_T0INTCOU_P00A00B00C00D;      // =     2 Hz
uint8_t ui8_T0INTCOU_P00A00B00C00D00E;   // =     0,1 Hz (10 x each second)


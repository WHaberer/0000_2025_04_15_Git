
//******************************************a
// p_TIMER_TIMEOUT_MONITOR_0_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_TIMER_TIMEOUT_MONITOR_0_ALL_B.c \n"
//***********************************************d

// One _B File for ALL


//********************************j
//* Defines

#define TIMER_TIMEOUT_MONITOR_0_DOTI_IN_MAIN

// B = 40 Hz =   ??? ms
#define TIMER_TIMEOUT_MONITOR_0_DOTI_BIT_IN_P00A00B02
#define TIMER_TIMEOUT_MONITOR_0_DOTI_IN_CB       // nur für die untenstehende Berechnung


//Define T0INT State_ON
#ifndef T0INTA_P00A00B02_ON
#define T0INTA_P00A00B02_ON
#endif


// Soll Werte Ton : HIGH
// Dauer
#define TIMER_TIMEOUT_MONITOR_0_TIM_SOLL   1500 //ms


#ifdef TIMER_TIMEOUT_MONITOR_0_DOTI_IN_CB
// CA =     200   Hz 20000 cHz (centiherz)   0,005000 sec   5  ms  5000  us
// CB =      40   Hz  4000 cHz (centiherz)   0,025000 sec  25  ms 25000  us

#ifdef NO //for DOKU
	T0INT	CP = Grund		96000	Hz	9600000	cHz (centiherz)				0,000010	sec	0,010416667	ms	10,41666667	us		
																		
		CP =		8000	Hz	800000	cHz (centiherz)	Teiler :	12		0,000125	sec	0,125	ms	125	us		Also Teilerstufe 0 bis 12 vorhanden (bei 0 (Endwert) schaltet er sofort auf 12 !)
																		
		CA =		200	Hz	20000	cHz (centiherz)	Teiler :	40		0,005000	sec	5	ms	5000	us		
																		
		CB =		40	Hz	4000	cHz (centiherz)	Teiler :	5		0,025000	sec	25	ms	25000	us		
																		
		CC =		10	Hz	1000	cHz (centiherz)	Teiler :	4		0,100000	sec	100	ms	100000	us		
																		
		CD =		2	Hz	200	cHz (centiherz)	Teiler :	5		0,500000	sec	500	ms	500000	us		
																		
		CE =		0,1	Hz	10	cHz (centiherz)	Teiler :	20		10,000000	sec	10000	ms	10000000	us		
#endif

// Define Dauer
#define TIMER_TIMEOUT_MONITOR_0_TIM_VAL (TIMER_TIMEOUT_MONITOR_0_TIM_SOLL / T0INTA_B_P_MS_IS)

#endif //(TIMER_TIMEOUT_MONITOR_0_DOTI_IN_CA)




//********************************j
//* Variables

// TIMER_TIMEOUT_MONITOR_0
uint8_t ui8_TIMER_TIMEOUT_MONITOR_0_REG;    //REG_8_NEW: count register for time
bool b_TIMER_TIMEOUT_MONITOR_0_RUN_BIT;     //BIT_NEW:
bool b_TIMER_TIMEOUT_MONITOR_0_READY_BIT;   //BIT_NEW:
bool b_TIMER_TIMEOUT_MONITOR_0_DOTI_BIT;    //BIT_NEW:
//TIMER_TIMEOUT_MONITOR_0 -  8 BIT defined
//TIMER_TIMEOUT_MONITOR_0 [TIMER_TIMEOUT_MONITOR_0_START_IN_INT] ist NICHT definiert: Time kann um 1 Count kleiner sein !

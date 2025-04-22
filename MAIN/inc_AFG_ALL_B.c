
//******************************************a
// inc_AFG_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

hier gibt es kein    inc_AFG_xxx.c oder inc_AFG_ALL_E.c
nur das eine File !!!!
wird von GRUND includiert !

//herausgenommen
//#include "../MAIN/afg_GPIO.c"

// ******************************************************************
// Function prototypes
#include "afg_UART_BUFFER_TX.h"
// ******************************************************************

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      inc_AFG_ALL_B.c               (nur_B File) \n"
//***********************************************d


//*******************************************************************b
//* MATH_HERE               Math Functions
#ifdef MATH_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_MATH.c \n"
#include "../MAIN/afg_MATH.c"
#else
#pragma weh_all3 "NO afg_MATH.c \n"
#endif //(MATH_HERE)

//*******************************************************************b
//* DELAY_HERE               normal Delay
#ifdef DELAY_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_DELAY.c \n"
#include "../MAIN/afg_DELAY.c"
#else
#pragma weh_all3 "NO afg_DELAY.c \n"
#endif //(DELAY_HERE)

//*******************************************************************b
//* SYS_LED_WORK_HERE             INIT ON OFF CPL
#ifdef SYS_LED_WORK_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_SYS_LED_WORK.c                    General Functions \n"
#include "../MAIN/afg_SYS_LED_WORK.c"
#else
#pragma weh_all3 "NO afg_SYS_LED_WORK.c \n"
#endif //(SYS_LED_WORK_HERE)

//*******************************************************************b
//* SYS_LED_ERROR_HERE            INIT ON OFF CPL
#ifdef SYS_LED_ERROR_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_SYS_LED_ERROR.c                   General Functions \n"
#include "../MAIN/afg_SYS_LED_ERROR.c"
#else
#pragma weh_all3 "NO afg_SYS_LED_ERROR.c \n"
#endif //(SYS_LED_ERROR_HERE)

//*******************************************************************b
//* SYS_LED_USER_HERE             INIT ON OFF CPL
#ifdef SYS_LED_USER_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_SYS_LED_USER.c                    General Functions \n"
#include "../MAIN/afg_SYS_LED_USER.c"
#else
#pragma weh_all3 "NO afg_SYS_LED_USER.c \n"
#endif //(SYS_LED_USER_HERE)

//*******************************************************************b
//* SYS_SPEAKER_0_HERE              INIT ON OFF CPL
#ifdef SYS_SPEAKER_0_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_SYS_SPEAKER_0.c                   General Functions \n"
#include "../MAIN/afg_SYS_SPEAKER_0.c"
#else
#pragma weh_all3 "NO afg_SYS_SPEAKER_0.c \n"
#endif //(SYS_SPEAKER_0_HERE)

//*******************************************************************b
//* SYS_SPEAKER_1_HERE              INIT ON OFF CPL
#ifdef SYS_SPEAKER_1_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_SYS_SPEAKER_1.c                   General Functions \n"
#include "../MAIN/afg_SYS_SPEAKER_1.c"
#else
#pragma weh_all3 "NO afg_SYS_SPEAKER_1.c \n"
#endif //(SYS_SPEAKER_1_HERE)

//*******************************************************************b
//* SYS_SPEAKER_0_HERE              Other Functions
#ifdef SYS_SPEAKER_0_HERE
//*******************************************************************c
// speaker funktionen auch für T0INT
#pragma weh_all3 "   afg_SPEAKER_0.c   other Functions     Project Functions \n"
#include "../MAIN/afg_SPEAKER_0.c"
#else
#pragma weh_all3 "NO afg_SPEAKER_0.c                       Project Functions \n"
#endif //(SYS_SPEAKER_0_HERE)

//*******************************************************************b
//* SYS_SPEAKER_1_HERE              Other Functions
#ifdef SYS_SPEAKER_1_HERE
//*******************************************************************c
// speaker funktionen auch für T0INT
#pragma weh_all3 "   afg_SPEAKER_1.c   other Functions     Project Functions \n"
#include "../MAIN/afg_SPEAKER_1.c"
#else
#pragma weh_all3 "NO afg_SPEAKER_1.c                       Project Functions \n"
#endif //(SYS_SPEAKER_1_HERE)

//*******************************************************************b
//* TIMER_SPEAKER_0_HERE
#ifdef TIMER_SPEAKER_0_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_TIMER_SPEAKER_0.c \n"
#include "../MAIN/afg_TIMER_SPEAKER_0.c"
#else
#pragma weh_all3 "NO afg_TIMER_SPEAKER_0.c \n"
#endif //(TIMER_SPEAKER_0_HERE)

//*******************************************************************b
//* TIMER_SPEAKER_1_HERE
#ifdef TIMER_SPEAKER_1_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_TIMER_SPEAKER_1.c \n"
#include "../MAIN/afg_TIMER_SPEAKER_1.c"
#else
#pragma weh_all3 "NO afg_TIMER_SPEAKER_1.c \n"
#endif //(TIMER_SPEAKER_1_HERE)

//*******************************************************************b
//* TIMER_TIMEOUT_MONITOR_0_HERE
#ifdef TIMER_TIMEOUT_MONITOR_0_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_TIMER_TIMEOUT_MONITOR_0.c \n"
#include "../MAIN/afg_TIMER_TIMEOUT_MONITOR_0.c"
#else
#pragma weh_all3 "NO afg_TIMER_TIMEOUT_MONITOR_0.c \n"
#endif //(TIMER_TIMEOUT_MONITOR_0_HERE)




//*******************************************************************b
//* AFG_GRUND                Grund Functions
#ifdef AFG_GRUND_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_GRUND.c \n"
#include "../MAIN/afg_GRUND.c"
#else
#pragma weh_all3 "NO afg_GRUND.c \n"
#endif //(AFG_GRUND_HERE)

//********************************j
//* YY Echoes and Includes

// T0INT Echo und Berechnung ! Muss vor afg_T0INT sein ?!?!
#pragma weh_all3 "//******************************************a\n"
#include "../MAIN/echo_afg_T0INT.c"


//*******************************************************************b
//* T0INT                                     T0INT_TIMER_0_IntHandler
#ifdef T0INT_HERE
//*******************************************************************c
#pragma weh_all3 "   afg_T0INT_PROG_FUNCT.c      T0INT_TIMER_0_IntHandler\n"
#include "../MAIN/afg_T0INT_PROG_FUNCT.c" 
#else
#pragma weh_all3 "NO afg_T0INT_PROG_FUNCT.c   NO T0INT_TIMER_0_IntHandler\n"
#endif //(T0INT_HERE)

//*******************************************************************b
//* UART_ALL_BUFFER_TX_HERE
#ifdef UART_ALL_BUFFER_TX_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_ALL_BUFFER_TX_HERE  (all UARTS)  afg_UART_ALL_BUFFER_TX.c \n"
#include "../MAIN/afg_UART_ALL_BUFFER_TX.c"
#else
#pragma weh_all3 "NO UART_ALL_BUFFER_TX_HERE  (all UARTS) \n"
#endif //(UART_ALL_BUFFER_TX_HERE)

//*******************************************************************b
//* MONITOR_0_HERE
#ifdef MONITOR_0_HERE
//*******************************************************************c
#pragma weh_all3 "   MONITOR_0_HERE              afg_MONITOR_0.c \n"
#include "../MAIN/afg_MONITOR_0.c"
#else
#pragma weh_all3 "NO MONITOR_0_HERE \n"
#endif //(UART_USER_HERE)

//*******************************************************************b
//* UART_USER_HERE
#ifdef UART_USER_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER_HERE              afg_UART_USER.c \n"
#include "../MAIN/afg_UART_USER.c"
#else
#pragma weh_all3 "NO UART_USER_HERE \n"
#endif //(UART_USER_HERE)

//*******************************************************************b
//* UART_USER_BUFFER_TX_HERE
#ifdef UART_USER_BUFFER_TX_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER_BUFFER_TX_HERE    afg_UART_USER_BUFFER_TX.c \n"
#include "../MAIN/afg_UART_USER_BUFFER_TX.c"
#else
#pragma weh_all3 "NO UART_USER_BUFFER_TX_HERE \n"
#endif //(UART_USER_BUFFER_TX_HERE)


//* MONITOR_0_SEND_ACK
//#include "../MAIN/afg_MONITOR_0_SEND_ACK.c"


//*******************************************************************b
//* I2C_MAS_0_SYS
#ifdef I2C_MAS_0_HERE
//*******************************************************************c
#pragma weh_all3 "   I2C_MAS_0_HERE              afg_I2C_MAS_0.c \n"
#include "../MAIN/afg_I2C_MAS_0.c"
#else
#pragma weh_all3 "NO I2C_MAS_0_HERE \n"
#endif //(I2C_MAS_0_HERE)

//*******************************************************************b
//* PCA9535D_PIO_0
#ifdef PCA9535D_PIO_0_HERE
//"PCA9535D_PIO_0: I2C PIO 16 Bit auf LORA_GROSS"
//*******************************************************************c
#pragma weh_all3 "   PCA9535D_PIO_0_HERE         afg_PCA9535D_PIO_0.c \n"
#include "../MAIN/afg_PCA9535D_PIO_0.c"
#else
#pragma weh_all3 "NO PCA9535D_PIO_0_HERE \n"
#endif //(PCA9535D_PIO_0_HERE)

//*******************************************************************b
//* MCP3428_ADC_0
#ifdef MCP3428_ADC_0_HERE
//"MCP3428_ADC_0: I2C ADC 16 Bit 15 SPS auf LORA_GROSS"
//*******************************************************************c
#pragma weh_all3 "   MCP3428_ADC_0_HERE          afg_MCP3428_ADC_0.c \n"
#include "../MAIN/afg_MCP3428_ADC_0.c"
#else
#pragma weh_all3 "NO MCP3428_ADC_0_HERE \n"
#endif //(MCP3428_ADC_0_HERE)

//*******************************************************************b
//* GRUND_STARTUP
//*******************************************************************c
// war vorher in makefile
#pragma weh_all3 "   GRUND_STARTUP               GRUND_startup_gcc.c \n"
#include "../MAIN/GRUND_startup_gcc.c"


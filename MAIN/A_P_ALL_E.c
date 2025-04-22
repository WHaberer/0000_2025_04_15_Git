
//******************************************a
// A_P_ALL_E.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

// for all Projects

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      A_P_ALL_E.c                   All p_Files \n"

//***********************************************d


//********************************j
//* 03 Prototypes for all Files
#undef KLAPPE0

#ifdef UART_USER_HERE
// Function prototypes.
//void UartInit(t_Uart *p_Uart);
//void UartSendValue(t_Uart *p_Uart,uint8_t cValue);

void P_UART_USER_DAT(uint8_t cValue);
#endif //(UART_USER_HERE)

#undef KLAPPE1



//********************************j
//* Includes p_Files

//*******************************************************************b
//* PRAGMA_MESSAGES
#ifdef PRAGMA_MESSAGES_HERE
//*******************************************************************c
#pragma weh_all3 "   PRAGMA_MESSAGES_HERE                  p_PROJECT_PRAGMA_MESSAGES.c \n"
#include "p_PROJECT_PRAGMA_MESSAGES.c"
#else
#pragma weh_all3 "NO PRAGMA_MESSAGES_HERE \n"
#endif //(PRAGMA_MESSAGES_HERE)

//*******************************************************************b
//* DATA_ARRAY_0
#ifdef DATA_ARRAY_0_HERE
//*******************************************************************c
#pragma weh_all3 "   DATA_ARRAY_0_HERE                     only one _B File! \n"
#include "p_DATA_ARRAY_0_ALL_B.c"
#else
#pragma weh_all3 "NO DATA_ARRAY_0_HERE \n"
#endif //(DATA_ARRAY_0_HERE)

//*******************************************************************b
//* SYS_CLOCK_HERE
#ifdef SYS_CLOCK_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_CLOCK_HERE                        p_SYS_CLOCK.c \n"
#include "p_SYS_CLOCK.c"
#else
#pragma weh_all3 "NO SYS_CLOCK_HERE              WARNING !!! \n"
#endif //(SYS_CLOCK_HERE)

//*******************************************************************b
//* INTERRUPT_ALL_HERE
#ifdef INTERRUPT_ALL_HERE
//*******************************************************************c
#pragma weh_all3 "   Interrupt Priority                    p_INTERRUPT.c \n"
#include "p_INTERRUPT.c"
#else
#pragma weh_all3 "NO Interrupt Priority \n"
#endif //(INTERRUPT_ALL_HERE) 

//*******************************************************************b
//* SYS_PINS_HERE
#ifdef NO // brauch ich nicht mehr SYS_PINS_HERE
//*******************************************************************c
#pragma weh_all3 "   Pins on Eval Board                    p_SYS_PINS.c \n"
#include "p_SYS_PINS.c"
#else
#pragma weh_all3 "NO Pins on Eval Board \n"
#endif //(SYS_PINS_HERE) 

//*******************************************************************b
//* T0INT_HERE
#ifdef T0INT_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   T0INT Settings    p_T0INT_ALL_B.c     only one _B File! \n"
#include "p_T0INT_ALL_B.c"
#pragma weh_all3 "//******************************************a\n"
#else
#pragma weh_all3 "NO T0INT Settings \n"
#endif //(T0INT_HERE)

//*******************************************************************b
//* LOOP_MAIN_WHILE1_HERE
#ifdef LOOP_MAIN_WHILE1_HERE
//*******************************************************************c
#pragma weh_all3 "   p_LOOP_MAIN_WHILE1.c                  Main Loop \n"
#include "p_LOOP_MAIN_WHILE1.c"
#else
#pragma weh_all3 "NO p_LOOP_MAIN_WHILE1.c                  Main Loop \n"
#endif //(LOOP_MAIN_WHILE1_HERE)

//*******************************************************************b
//* UART_USER_SEND_INC_HERE
#ifdef UART_USER_SEND_INC_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER Test                        p_UART_USER_SEND_INC.c \n"
#include "p_UART_USER_SEND_INC.c"
#else
#pragma weh_all3 "NO UART_USER Test \n"
#endif //(UART_USER_SEND_INC_HERE)

//*******************************************************************b
//* AUTOSEND_0_HERE AUTOSEND_0_PROJECT_PT4C_XL_EVAL
#ifdef AUTOSEND_0_HERE
//*******************************************************************c
#pragma weh_all3 "   AUTOSEND Test                         p_AUTOSEND_0_PROJECT_PT4C_XL_EVAL.c \n"
#include "p_AUTOSEND_0_PROJECT_PT4C_XL_EVAL.c"
#else
#pragma weh_all3 "NO AUTOSEND Test \n"
#endif //(AUTOSEND_0_HERE)

//*******************************************************************b
//* UART_USER_HERE                INC_FILES_p    3 Files
#ifdef UART_USER_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   UART_USER_HERE                        3 Files \n"
#include "../MAIN/INC_FILES_p_UART_USER.c"
#else
#pragma weh_all3 "NO INC_FILES_p_UART_USER.c \n"
#endif //(UART_USER_HERE)

//*******************************************************************b
//* UART_USER_BUFFER_TX_HERE
#ifdef UART_USER_BUFFER_TX_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_USER_BUFFER_TX_HERE              3 Files \n"
#include "../MAIN/INC_FILES_p_UART_USER_BUFFER_TX.c"
#else
#pragma weh_all3 "NO UART_USER_BUFFER_TX_HERE \n"
#endif //(UART_USER_BUFFER_TX_HERE)

//*******************************************************************b
//* UART_ALL_HERE
#ifdef UART_ALL_HERE
//*******************************************************************c
#pragma weh_all3 "   UART_ALL_HERE   (all UARTS)           p_UART_ALL.c \n"
#include "../MAIN/p_UART_ALL.c"
#else
#pragma weh_all3 "NO UART_ALL_HERE   (all UARTS) \n"
#endif //(UART_ALL_HERE)

//*******************************************************************b
//* MONITOR_ALL_B UART_USER RS232 Hardware Monitor
#ifdef MONITOR_0_HERE  
//*******************************************************************c
#pragma weh_all3 "   MONITOR_0_HERE    for UART_USER       3 Files \n"
#include "../MAIN/INC_FILES_p_MONITOR_0.c"
#else
#pragma weh_all3 "NO MONITOR_0_HERE \n"
#endif //(MONITOR_0_HERE)

//*******************************************************************b
//* SYS_LED_WORK_HERE             INC_FILES_p    3 Files
#ifdef SYS_LED_WORK_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   INC_FILES_p_SYS_LED_WORK.c            3 Files \n"
#include "../MAIN/INC_FILES_p_SYS_LED_WORK.c"
#else
#pragma weh_all3 "NO INC_FILES_p_SYS_LED_WORK.c \n"
#endif //(SYS_LED_WORK_HERE)

//*******************************************************************b
//* SYS_LED_ERROR_HERE            INC_FILES_p    3 Files
#ifdef SYS_LED_ERROR_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   INC_FILES_p_SYS_LED_ERROR.c           3 Files \n"
#include "../MAIN/INC_FILES_p_SYS_LED_ERROR.c"
#else
#pragma weh_all3 "NO INC_FILES_p_SYS_LED_ERROR.c \n"
#endif //(SYS_LED_ERROR_HERE)

//*******************************************************************b
//* SYS_LED_USER_HERE             INC_FILES_p    3 Files
#ifdef SYS_LED_USER_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   INC_FILES_p_SYS_LED_USER.c            3 Files \n"
#include "../MAIN/INC_FILES_p_SYS_LED_USER.c"
#else
#pragma weh_all3 "NO INC_FILES_p_SYS_LED_USER.c \n"
#endif //(SYS_LED_USER_HERE)

//*******************************************************************b
//* SYS_SPEAKER_0_HERE              INC_FILES_p    3 Files
#ifdef SYS_SPEAKER_0_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   INC_FILES_p_SYS_SPEAKER_0.c           3 Files \n"
#include "../MAIN/INC_FILES_p_SYS_SPEAKER_0.c"
#else
#pragma weh_all3 "NO INC_FILES_p_SYS_SPEAKER_0.c \n"
#endif //(SYS_SPEAKER_0_HERE)

//*******************************************************************b
//* SYS_SPEAKER_1_HERE              INC_FILES_p    3 Files
#ifdef SYS_SPEAKER_1_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   INC_FILES_p_SYS_SPEAKER_1.c           3 Files \n"
#include "../MAIN/INC_FILES_p_SYS_SPEAKER_1.c"
#else
#pragma weh_all3 "NO INC_FILES_p_SYS_SPEAKER_1.c \n"
#endif //(SYS_SPEAKER_1_HERE)


//*******************************************************************b
//* SPEAKER_0_TON_TEST_HERE           p_             nur 1 File weil für alle gleich
#ifdef SPEAKER_0_TON_TEST_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   p_T0INT_TON_TEST.c                    only one File ! \n"
#include "../MAIN/p_T0INT_TON_TEST.c"
#else
#pragma weh_all3 "NO p_T0INT_TON_TEST.c \n"
#endif //(SPEAKER_0_TON_TEST_HERE)
 
//*******************************************************************b
//* TIMER_SPEAKER_0_HERE               p_   nur 1File ALL_B weil für alle gleich
#ifdef TIMER_SPEAKER_0_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   p_TIMER_SPEAKER_0_ALL_B.c             only one _B File! \n"
#include "../MAIN/p_TIMER_SPEAKER_0_ALL_B.c"
#else
#pragma weh_all3 "NO p_TIMER_SPEAKER_0_ALL_B.c \n"
#endif //(TIMER_SPEAKER_0_HERE)

//*******************************************************************b
//* TIMER_TIMEOUT_MONITOR_0_HERE       p_   nur 1File ALL_B weil für alle gleich
#ifdef TIMER_TIMEOUT_MONITOR_0_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   p_TIMER_TIMEOUT_MONITOR_0_ALL_B.c     only one _B File! \n"
#include "../MAIN/p_TIMER_TIMEOUT_MONITOR_0_ALL_B.c"
#else
#pragma weh_all3 "NO p_TIMEOUT_MONITOR_SPEAKER_0_ALL_B.c \n"
#endif //(TIMER_TIMEOUT_MONITOR_0_HERE)

//*******************************************************************b
//* BLINK_INT_HERE                INC_FILES_p    3 Files
#ifdef BLINK_INT_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   BLINK_INT_HERE                        3 Files \n"
#include "../MAIN/INC_FILES_p_BLINK_INT.c"
#else
#pragma weh_all3 "NO BLINK_INT_HERE \n"
#endif //(BLINK_INT_HERE)

//*******************************************************************b
//* BLINK_MAIN_HERE               INC_FILES_p    3 Files
#ifdef BLINK_MAIN_HERE
//*******************************************************************c
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "   BLINK_MAIN_HERE                       3 Files \n"
#include "../MAIN/INC_FILES_p_BLINK_MAIN.c"
#else
#pragma weh_all3 "NO BLINK_MAIN_HERE \n"
#endif //(BLINK_MAIN_HERE)

#pragma weh_all3 "//******************************************a\n"

//*******************************************************************b
//* SYS_LED_WORK_OO_HERE          p_   nur 1File ALL_B weil für alle gleich
#ifdef SYS_LED_WORK_OO_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_LED_WORK_OO_HERE                  only one _B File! \n"
#include "../MAIN/p_SYS_LED_WORK_OO_ALL_B.c"
#else
#pragma weh_all3 "NO SYS_LED_WORK_OO_HERE \n"
#endif //(SYS_LED_WORK_OO_HERE)

//*******************************************************************b
//* TIMING_COUNTER_MAIN
#ifdef TIMING_COUNTER_MAIN_HERE
//*******************************************************************c
#pragma weh_all3 "   p_TIMING_COUNTER_MAIN_PROJECT_PT4C_XL_EVAL.c    CHANGE ! \n"
#include "../MAIN/p_TIMING_COUNTER_MAIN_PROJECT_PT4C_XL_EVAL.c"

#else
#pragma weh_all3 "NO p_TIMING_COUNTER_MAIN_PROJECT_PT4C_XL_EVAL.c    CHANGE ! \n"
#endif //(TIMING_COUNTER_MAIN_HERE)

//*******************************************************************b
//* TIMING_COUNTER_GRUND
#ifdef TIMING_COUNTER_GRUND_HERE
//*******************************************************************c
#pragma weh_all3 "   p_TIMING_COUNTER_GRUND_PROJECT_PT4C_XL_EVAL.c   CHANGE ! \n"
#include "../MAIN/p_TIMING_COUNTER_GRUND_PROJECT_PT4C_XL_EVAL.c"
#else
#pragma weh_all3 "NO p_TIMING_COUNTER_GRUND_PROJECT_PT4C_XL_EVAL.c   CHANGE ! \n"
#endif //(TIMING_COUNTER_GRUND_HERE)

//*******************************************************************b
//* I2C_MAS_0
#ifdef I2C_MAS_0_HERE
//*******************************************************************c
#pragma weh_all3 "   I2C_MAS_0_HERE                        3 Files \n"
#include "../MAIN/INC_FILES_p_I2C_MAS_0.c"
#else
#pragma weh_all3 "NO INC_FILES_p_I2C_MAS_0.c \n"
#endif //(I2C_MAS_0_HERE)

//*******************************************************************b
//* PCF8574_PIO_0_HERE
#ifdef PCF8574_PIO_0_HERE
//"PCF8574_PIO_0: I2C PIO 8 Bit auf ext LORA (mit I2C Line Pull Ups !)"
//*******************************************************************b
#pragma weh_all3 "   PCF8574_PIO_0_HERE                    only one _B File! \n"
#include "../MAIN/p_PCF8574_PIO_0_PROJECT_PT4C_XL_EVAL.c"
#else
#pragma weh_all3 "NO PCF8574_PIO_0_HERE \n"
#endif //(PCF8574_PIO_0_HERE)

//*******************************************************************b
//* PCA9535D_PIO_0
#ifdef PCA9535D_PIO_0_HERE
//"PCA9535D_PIO_0: I2C PIO 16 Bit auf LORA_GROSS"
//*******************************************************************c
#pragma weh_all3 "   PCA9535D_PIO_0_HERE                   3 Files \n"
#include "../MAIN/INC_FILES_p_PCA9535D_PIO_0.c"
#else
#pragma weh_all3 "NO PCA9535D_PIO_0_HERE \n"
#endif //(PCA9535D_PIO_0_HERE)

//*******************************************************************b
//* PCA9535D_PIO_ALL
#ifdef PCA9535D_PIO_ALL_HERE
//"PCA9535D_PIO_0: I2C PIO 16 Bit auf LORA_GROSS"
//*******************************************************************c
#pragma weh_all3 "   PCA9535D_PIO_ALL_HERE                 only one _B File! \n"
#include "../MAIN/p_PCA9535D_PIO_ALL_B.c"
#else
#pragma weh_all3 "NO PCA9535D_PIO_ALL_HERE \n"
#endif //(PCA9535D_PIO_ALL_HERE)

//*******************************************************************b
//* MCP3428_ADC_0   p_MCP3428_ADC_0_PROJECT_PT4C_XL_EVAL.c
#ifdef MCP3428_ADC_0_HERE
//*******************************************************************c
#pragma weh_all3 "   MCP3428_ADC_0_HERE                    3 Files \n"
#include "../MAIN/INC_FILES_p_MCP3428_ADC_0.c"
#else
#pragma weh_all3 "NO MCP3428_ADC_0_HERE \n"
#endif //(MCP3428_ADC_0_HERE)

//*******************************************************************b
//* MCP3428_ADC_ALL
#ifdef MCP3428_ADC_ALL_HERE
//*******************************************************************c
#pragma weh_all3 "   MCP3428_ADC_ALL_HERE                  only one _B File! \n"
#include "../MAIN/p_MCP3428_ADC_ALL_B.c"
#else
#pragma weh_all3 "NO MCP3428_ADC_ALL_HERE \n"
#endif //(MCP3428_ADC_ALL_HERE)




//* MCP9902_TEMPSENS_ALL_HERE   p_MCP9902_TEMPSENS_ALL_B
#ifdef MCP9902_TEMPSENS_ALL_HERE

#include "../MAIN/p_MCP9902_TEMPSENS_ALL_B.c"

#if (Verbose_Level >= 3)
#pragma message ("MCP9902_TEMPSENS_ALL - Use p_MCP9902_TEMPSENS_ALL_B.c")
#endif

#endif //(MCP9902_TEMPSENS_ALL_HERE)

//* MCP9902_TEMPSENS_0_HERE   p_MCP9902_TEMPSENS_0_PROJECT_PT4C_XL_EVAL.c
#ifdef MCP9902_TEMPSENS_0_HERE

#include "../MAIN/p_MCP9902_TEMPSENS_0_PROJECT_PT4C_XL_EVAL.c"

#if (Verbose_Level >= 3)
#pragma message ("MCP9902_TEMPSENS_ALL - Use p_MCP9902_TEMPSENS_0_PROJECT_PT4C_XL_EVAL.c")
#endif

#endif //(MCP9902_TEMPSENS_0_HERE)

//* OPT3001_LIGHTSENS_ALL_HERE   p_OPT3001_LIGHTSENS_ALL_B
#ifdef OPT3001_LIGHTSENS_ALL_HERE

#include "../MAIN/p_OPT3001_LIGHTSENS_ALL_B.c"

#if (Verbose_Level >= 3)
#pragma message ("OPT3001_LIGHTSENS_ALL - Use p_OPT3001_LIGHTSENS_ALL_B.c")
#endif

#endif //(OPT3001_LIGHTSENS_ALL_HERE)

//* OPT3001_LIGHTSENS_0_HERE   p_OPT3001_LIGHTSENS_0_PROJECT_PT4C_XL_EVAL.c
#ifdef OPT3001_LIGHTSENS_0_HERE

#include "../MAIN/p_OPT3001_LIGHTSENS_0_PROJECT_PT4C_XL_EVAL.c"

#if (Verbose_Level >= 3)
#pragma message ("OPT3001_LIGHTSENS_0 - Use p_OPT3001_LIGHTSENS_0_PROJECT_PT4C_XL_EVAL.c")
#endif

#endif //(OPT3001_LIGHTSENS_0_HERE)

//*******************************************************************b
//* DOPULSE_TIMCOUMMAIN (nach TIMING_COUNTER_MAIN !)
#ifdef DOPULSE_TIMCOUMMAIN_HERE
//*******************************************************************c
#pragma weh_all3 "   DOPULSE_TIMCOUMMAIN_HERE              - Use p_DOPULSE_TIMCOUMMAIN_PROJECT_PT4C_XL_EVAL.c\n"
#include "../MAIN/p_DOPULSE_TIMCOUMMAIN_PROJECT_PT4C_XL_EVAL.c"
#else
#pragma weh_all3 "NO DOPULSE_TIMCOUMMAIN_HERE \n"
#endif //(DOPULSE_TIMCOUMMAIN_HERE)



//*******************************************************************b
//* DOPULSE_0
#ifdef DOPULSE_0_HERE
//*******************************************************************c
#pragma weh_all3 "   DOPULSE_0_HERE                        3 Files \n"
#include "../MAIN/INC_FILES_p_DOPULSE_0.c"
#else
#pragma weh_all3 "NO DOPULSE_0_HERE \n"
#endif //(DOPULSE_0_HERE)

//*******************************************************************b
//* DOPULSE_1
#ifdef DOPULSE_1_HERE
//*******************************************************************c
#pragma weh_all3 "   DOPULSE_1_HERE                        3 Files \n"
#include "../MAIN/INC_FILES_p_DOPULSE_1.c"
#else
#pragma weh_all3 "NO DOPULSE_1_HERE \n"
#endif //(DOPULSE_1_HERE)

//*******************************************************************b
//* DOPULSE_MCP3428_ADC_0_CH_3 (nach  MCP3428_ADC_0)
#ifdef DOPULSE_MCP3428_ADC_0_CH_3_HERE
//*******************************************************************c
#pragma weh_all3 "   DOPULSE_MCP3428_ADC_0_CH_3_HERE       3 Files \n"
#include "../MAIN/INC_FILES_p_DOPULSE_MCP3428_ADC_0_CH_3.c"
#else
#pragma weh_all3 "NO DOPULSE_MCP3428_ADC_0_CH_3_HERE \n"
#endif //(DOPULSE_MCP3428_ADC_0_CH_3_HERE)


//*******************************************************************b
//* TEXTE
#ifdef TEXTE_HERE
//*******************************************************************c
#pragma weh_all3 "   TEXTE_HERE                            3 Files \n"
#include "../MAIN/INC_FILES_p_TEXTE.c"
#else
#pragma weh_all3 "NO TEXTE_HERE \n"
#endif //(TEXTE_HERE)


//********************************j
//* YY Echoes and Defines

#pragma weh_all3 "//******************************************a\n"
#include "../MAIN/echo_p_T0INT.c"


//********************************j
//* ZZ Variables
#pragma weh_all3 "   Define General Variables    ui8_i ui32_i ui32_A \n"


// index akku A and B registers for global use
// old uint8_t i8 ;
uint8_t ui8_i;
uint8_t ui8_A;

uint16_t ui16_A;
uint16_t ui16_B;

uint16_t ui32_A;
uint16_t ui32_B;

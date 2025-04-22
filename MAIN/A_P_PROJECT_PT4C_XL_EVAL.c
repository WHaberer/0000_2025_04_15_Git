
//******************************************a
// A_P_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      A_P_PROJECT_PT4C_XL_EVAL.c    Project Settings \n"

//***********************************************d
//* 01 TI System Includes C

// always on
#define TI_SYSTEM_CLOCK_SETTINGS_HERE

#define TI_MEM_MAP_HERE
#define TI_ROM_H_HERE
#define TI_ROM_MAP_HERE

#define TI_PIN_MAP_HERE
#define TI_GPIO_HERE

#define TI_TIMER_HERE

// auch für Timer Int nötig
#define TI_INTERRUPTS_HERE

// für alle UARTS     auch für UART_INT_TX
#define TI_UARTS_HERE

// für I2C
#define TI_I2C_HERE

// ?? TI System Includes for this Project
#define INTERRUPT_ALL_HERE


//********************************j
//* Defines (do not change)

// Special: Compiler on PC (GCC)
#ifdef ON_PC_COMP

// das wird schon im Linux makefile gesetzt ! mit -D
// meine CPU
// nötig um in der pin_map.h das Richtige auszuwählen
#define TI_PART_INFO_HERE

// nötig um in der rom.h das Richtige Target auszuwählen
#define TI_TARGET_INFO_HERE

#endif //(ON_PC_COMP)


//********************************j
//* 02 TI System Includes C
//Teile davon werden in PP_WEH nicht benutzt !  (PP_WEH macht : #undef PP_WEH_USED_IN_C)
#undef KLAPPE0

#pragma weh_all3 "   TI System Includes:                   //(includes are not included in PP_weh) \n"

// Special: For Compiler on PC (GCC)
#ifdef TI_PART_INFO_HERE
#define PART_TM4C1294NCPDT  
#endif

// Special: For Compiler on PC (GCC)
#ifdef TI_TARGET_INFO_HERE
#define TARGET_IS_TM4C129_RA2
#endif

// need for Timer und Timer Interupts
#ifdef TI_MEM_MAP_HERE
#pragma weh_all3 "      TI_MEM_MAP_HERE                    hw_memmap.h \n"
//#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/inc/hw_memmap.h"
//#endif //(PP_WEH_USED_IN_C)
#endif

// need for Uart Interupts und Timer Interupts
#ifdef TI_INTERRUPTS_HERE
#pragma weh_all3 "      TI_INTERRUPTS_HERE                 hw_ints.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/inc/hw_ints.h"
#endif //(PP_WEH_USED_IN_C)
#endif

//off
//off #include "../TivaWare/SW-TM4C-2.2.0.295/inc/hw_types.h"

// need for : ROM_SysCtlDelay
#ifdef TI_ROM_H_HERE
#pragma weh_all3 "      TI_ROM_H_HERE                      rom.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/rom.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : MAP_SysCtlClockFreqSet
#ifdef TI_ROM_MAP_HERE
#pragma weh_all3 "      TI_ROM_MAP_HERE                    rom_map.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/rom_map.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : UART: GPIO_PA0_U0RX define
#ifdef TI_PIN_MAP_HERE
#pragma weh_all3 "      TI_PIN_MAP_HERE                    pin_map.h\n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/pin_map.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : SYSTEM_CLOCK_SETTINGS
#ifdef TI_SYSTEM_CLOCK_SETTINGS_HERE
#pragma weh_all3 "      TI_SYSTEM_CLOCK_SETTINGS_HERE      sysctl.h\n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/sysctl.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : Timer
#ifdef TI_TIMER_HERE
#pragma weh_all3 "      TI_TIMER_HERE                      timer.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/timer.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : GPIO_PIN_0 ...
#ifdef TI_GPIO_HERE
#pragma weh_all3 "      TI_GPIO_HERE                       gpio.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/gpio.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for UART / UARTs
// für alle UARTS     auch für UART_INT_TX
#ifdef TI_UARTS_HERE
#pragma weh_all3 "      TI_UARTS_HERE                      uart.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/uart.h"
#endif //(PP_WEH_USED_IN_C)
#endif

// need for : I2C Systemkonstante I2C_MASTER_INT_ARB_LOST - Arbitration Lost interrupt ...
#ifdef TI_I2C_HERE
#pragma weh_all3 "      TI_I2C_HERE                        i2c.h \n"
#ifdef PP_WEH_USED_IN_C
#include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/i2c.h"
#endif //(PP_WEH_USED_IN_C)
#endif

//#include <driverlib/interrupt.h>
//OFF war ein test für PC GCC #include "../TivaWare/SW-TM4C-2.2.0.295/driverlib/interrupt.h"

#pragma weh_all3 "\n"

#undef KLAPPE1


//* 10 --------------------------

//***********************************************d
//* DATA_ARRAY_0
//#define DATA_ARRAY_0_HERE
//***********************************************d
// for MDT Software

//***********************************************d
//* T0INT_COU_TEST
//#define T0INT_COU_TEST
//***********************************************d
#ifdef T0INT_COU_TEST
geht nicht - Ich kann die Counterstände nicht ausgeben
weil das alles zu schnell für die UART geht
#define T0INT_COU_TEST_DOTI_BIT_IN_CG

bool    b_T0INT_COU_TEST_DOTI_BIT    ;   //;BIT_NEW

#endif  

//* AUTOSEND_0
#define AUTOSEND_0_HERE

//***********************************************d
//* T0INT_HERE
#define T0INT_HERE
//***********************************************d

//***********************************************d
//* T0INT_TON_TEST
//#define SPEAKER_0_TON_TEST_HERE
//***********************************************d
// Töne in verschiedenen T0INT Counter States
// sind verschiebbar und einzeln editierbar

//***********************************************d
//* I2C_MAS_0
#define I2C_MAS_0_HERE
//***********************************************d


//***********************************************d
//* PCA9535D_PIO_0
#ifdef I2C_MAS_0_HERE
#define PCA9535D_PIO_0_HERE
#endif
//"PCA9535D_PIO_0: I2C PIO 16 Bit auf LORA_GROSS"

// Do not change
#ifdef PCA9535D_PIO_0_HERE
#ifndef PCA9535D_PIO_ALL_HERE
#define PCA9535D_PIO_ALL_HERE
#endif
#endif
//***********************************************d

//***********************************************d
//* PCF8574_PIO_0
#ifdef I2C_MAS_0_HERE
#define PCF8574_PIO_0
#endif
//"PCF8574_PIO_0: I2C PIO 8 Bit auf ext LORA (mit I2C Line Pull Ups !)"
//***********************************************d

//***********************************************d
//* MCP3428_ADC_0
#ifdef I2C_MAS_0_HERE
#define MCP3428_ADC_0_HERE
#endif
//"MCP3428_ADC_0: I2C ADC 16 Bit 15 SPS auf LORA_GROSS"

// Do not change
#ifdef MCP3428_ADC_0_HERE
#ifndef MCP3428_ADC_ALL_HERE
#define MCP3428_ADC_ALL_HERE
#endif
#endif
//***********************************************d

//***********************************************d
//* OPT3001_LIGHTSENS_0
//#define OPT3001_LIGHTSENS_0_HERE
//#define OPT3001_LIGHTSENS_ALL_HERE
//***********************************************d

//***********************************************d
//* MCP9902_TEMPSENS_0
//#define MCP9902_TEMPSENS_0_HERE  auf LORA Gross (on L0MDT_CM_Command_Module)
//#define MCP9902_TEMPSENS_ALL_HERE
//***********************************************d

//* 04 TIMING_COUNTER_MAIN
#undef KLAPPE0
// der ui32_Timing_Counter_Main counter wird in MAIN incrementiert
// und Zeitgenau (alle 0,5 sec = 2 Hz) in
// DOPULSE_0 oder DOPULSE_TIMCOUMMAIN ausgegeben

//#define TIMING_COUNTER_MAIN_HERE

#undef KLAPPE1

//* 04 TIMING COUNTER GRUND
#undef KLAPPE0
// In T0INT Grund wird ein counter immer incrementiert
// so kann man in der Main rausfinden wie viel Zeit vergangen ist

//#define TIMING_COUNTER_GRUND_HERE

#undef KLAPPE1

//* 04 Beweg_Edge_Detect
#undef KLAPPE0
//#define BEWEG_0_HERE
//**************************************************

#ifdef BEWEG_0_HERE

bool b_Beweg0_Now;
bool b_Beweg0_Old;

bool b_Bewegung_was_Here;

uint32_t ui32_Beweg_is_Active_Counter_Val;
uint32_t ui32_Beweg_is_Passive_Counter_Val;

#endif //( BEWEG_0_HERE)

#undef KLAPPE1

//***********************************************d
//* 04 RESET_DELCOU_HERE
//#define RESET_DELCOU_HERE
//definiert einen delay counter der von T0INT dec wird und dann
//ein event ausfuehrt
//damit die Hardware SPI richtig Zeit zum initialisieren hat bevor z.B. der MAX1231 initialisiert wird
//***********************************************d

//***********************************************d
//* BLINK_MAIN_HERE
//* BLINK_INT_HERE
//***********************************************d
#define BLINK_MAIN_HERE
#define BLINK_INT_HERE

//software maessiges Abschalten des Blinkens: Stromsparen und Aufmerksamkeit verringern
#define SYS_LED_WORK_OO_HERE


//***********************************************d
//* DOPULSE_0
#define DOPULSE_0_HERE
// Write to Uart_User
//***********************************************d

//***********************************************d
//* DOPULSE_1
#define DOPULSE_1_HERE
// Read PIO_0
//***********************************************d

//***********************************************d
//* UART_USER_SEND_INC_HERE
#define UART_USER_SEND_INC_HERE
//***********************************************d

//***********************************************d
//* SYS_SPEAKER_0_HERE
#define SYS_SPEAKER_0_HERE
//***********************************************d

//***********************************************d
//* TIMER_SPEAKER_0_HERE
//***********************************************d
#ifdef SYS_SPEAKER_0_HERE
#define TIMER_SPEAKER_0_HERE
#endif

//***********************************************d
//* SYS_SPEAKER_1_HERE
//#define SYS_SPEAKER_1_HERE
//***********************************************d

//***********************************************d
//* TIMER_SPEAKER_1_HERE
//***********************************************d
#ifdef SYS_SPEAKER_1_HERE
//#define TIMER_SPEAKER_1_HERE
#endif

//***********************************************d
//* UART_USER_HERE
#define UART_USER_HERE
//***********************************************d

//***********************************************d
//* UART_USER_BUFFER_TX_HERE
//***********************************************d
#ifdef UART_USER_HERE
#define UART_USER_BUFFER_TX_HERE
#endif //(UART_USER_HERE)

//***********************************************d
//* MONITOR_0
//***********************************************d
#ifdef UART_USER_HERE
#define MONITOR_0_HERE
#endif //(UART_USER_HERE)

//***********************************************d
//* TIMER_TIMEOUT_MONITOR_0_HERE
//***********************************************d
#ifdef MONITOR_0_HERE
#define TIMER_TIMEOUT_MONITOR_0_HERE
#endif //(MONITOR_0_HERE)

//***********************************************d
//* SYS_LED_WORK
#define SYS_LED_WORK_HERE
//***********************************************d
// Four user LEDs are provided on the board.
// D1 and D2 are connected to GPIOs PN1 and PN0.
// These LEDs are dedicated for use by the software application.
// D3 and D4 are connected to GPIOs PF4 and PF0

//                  Pin am Eval Board
// Led 1 0x001; PN1  87    SYS_LED_WORK_HERE
// Led 2 0x002; PN0  89       SPEAKER_0
// Led 3 0x004; PF4  64    SYS_LED_USER_HERE
// Led 4 0x008; PF0  66    SYS_LED_ERROR_HERE

//***********************************************d
//* SYS_LED_USER
#define SYS_LED_USER_HERE
//***********************************************d

//***********************************************d
//* SYS_LED_ERROR
#define SYS_LED_ERROR_HERE
//***********************************************d

//***********************************************d
//* TEXTE_HERE
#define TEXTE_HERE
//***********************************************d

//**************************************************
//* MATH
#define MATH_HERE
//**************************************************
#ifdef MATH_HERE
#define F_HEX2ASC
#define F_CALC_10EXP
#endif






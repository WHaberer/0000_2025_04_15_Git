
//******************************************************************
// p_SYS_CLOCK.c
//******************************************************************

#ifdef NO //Doku

   // Run from the PLL at 120 MHz.
   // Note: SYSCTL_CFG_VCO_240 is a new setting provided in TivaWare 2.2.x and
   // later to better reflect the actual VCO speed due to SYSCTL#22.
   //
   g_ui3..2SysClock = MAP_SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                            SYSCTL_OSC_MAIN |
                                            SYSCTL_USE_PLL |
                                            SYSCTL_CFG_VCO_240), 120000000);

// anderes setting woher ? old !
// das habe ich immer benutzt
// MAP_SysCtlClockSet(SYSCTL_OSC_INT | SYSCTL_USE_OSC | SYSCTL_SYSDIV_1);    
    
// MAP_SysCtlClockFreqSet stellt den Systemclock auf die SYSTEM_CLOCK_FREQ = 120 MHz
// in die Variable ui32SysClock wird ___ geschrieben
// 120 Mega ... oder ?
// Ja ... weil ein Sys..CtlDelay(ui32SysClock); macht dann 120 Mega Cycles delay

   ui3..2SysClock = MAP_SysCtlClockFreqSet(SYSTEM_CLOCK_SETTINGS,SYSTEM_CLOCK_FREQ);

#endif //(NO //DOKU)

// Use the internal 16-MHz precision oscillator of the MCU.
//#define SYSTEM_CLOCK_SETTINGS (SYSCTL_OSC_INT | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480)

// Run from the PLL at 120 MHz.
//#define SYSTEM_CLOCK_SETTINGS (SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480)

// Use an external 25 MHz crystal or oscillator.
#define SYSTEM_CLOCK_SETTINGS         (SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480)

// in uart_echo.c example : SYSCTL_CFG_VCO_240
//#define SYSTEM_CLOCK_SETTINGS       (SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_240)

#define SYSTEM_CLOCK_FREQ             120000000  // 120 MHz


//********************************j
//* Functions


//********************************j
//* Variables

// variable declaration
uint32_t ui32SysClock;



//******************************************a
// fr0_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU 

 wird nur einmal ausgefuehrt **** ANFANG 

// INIT ALL


// Initialize the hardware peripherals.
// Sysclk LedInit
// INIT Hardware
   User..HwInit_FR0();  //weh function 

// DO ALL

// do SP..EAKER_0_BEEP_AT_START

was:
//*************************************************************************
void UserHwInit_FR0(void) { 
//*************************************************************************
// FR0 Functions Reset 0
}

#endif //(NO //DOKU)


// 00 Echo Begin
#pragma weh_all3 "File:      fr0_ALL_B.c \n"
//***********************************************d


//*******************************************************************b
//* SYS_CLOCK_HERE (in fr0_ALL_B)
#ifdef SYS_CLOCK_HERE
//*******************************************************************c

   ui32SysClock = MAP_SysCtlClockFreqSet(SYSTEM_CLOCK_SETTINGS,SYSTEM_CLOCK_FREQ);

#pragma weh_all3 "   SYS_CLOCK set \n"
#pragma weh_all3 "      SYSTEM_CLOCK_SETTINGS:      "
#pragma weh_all3 SYSTEM_CLOCK_SETTINGS
#pragma weh_all3 "\n"
#pragma weh_all3 "      SYSTEM_CLOCK_FREQ:          "
#pragma weh_all3 SYSTEM_CLOCK_FREQ
#pragma weh_all3 "\n"
#pragma weh_all3 "      ui32SysClock   Wird daraus berechnet \n"

#else
#pragma weh_all3 "NO SYS_CLOCK set \n"
#endif //(SYS_CLOCK_HERE)

//*******************************************************************b
//* INTERRUPT_ALL_HERE (in fr0_ALL_B)
#ifdef INTERRUPT_ALL_HERE
//*******************************************************************c

#pragma weh_all3 "   INTERRUPT PRIORITY set \n"

   ROM_IntPrioritySet(INT_TIMER0A,0x000);
// ROM_IntPrioritySet(INT_UART0,0x040);
   ROM_IntPrioritySet(INT_UART3,0x040);   //diese habe ich

#else
#pragma weh_all3 "NO INTERRUPT PRIORITY set \n"

#endif //(INTERRUPT_ALL_HERE) 
   
//*******************************************************************b
//* SYS_LED_WORK_HERE (in fr0_ALL_B)
#ifdef SYS_LED_WORK_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_LED_WORK_INIT set \n"
    SYS_LED_WORK_INIT(); //weh_function
#else
#pragma weh_all3 "NO SYS_LED_WORK_INIT set \n"
#endif //(SYS_LED_WORK_HERE)

//*******************************************************************b
//* SYS_LED_ERROR (in fr0_ALL_B)
#ifdef SYS_LED_ERROR_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_LED_ERROR_INIT set \n"
   SYS_LED_ERROR_INIT(); //weh_function
#else
#pragma weh_all3 "NO SYS_LED_ERROR_INIT set \n"
#endif //(SYS_LED_ERROR_HERE)

//*******************************************************************b
//* SYS_LED_USER (in fr0_ALL_B)
#ifdef SYS_LED_USER_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_LED_USER_INIT set \n"
   SYS_LED_USER_INIT(); //weh_function
#else
#pragma weh_all3 "NO SYS_LED_USER_INIT set \n"
#endif //(SYS_LED_USER_HERE)
         
//*******************************************************************b
//* SYS_SPEAKER_0_HERE (in fr0_ALL_B)
#ifdef SYS_SPEAKER_0_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_SPEAKER_0 set \n"
   SYS_SPEAKER_0_INIT(); //weh_function
#else
#pragma weh_all3 "NO SYS_SPEAKER_0 set \n"
#endif

//*******************************************************************b
//* SYS_SPEAKER_1_HERE (in fr0_ALL_B)
#ifdef SYS_SPEAKER_1_HERE
//*******************************************************************c
#pragma weh_all3 "   SYS_SPEAKER_1 set \n"
   SYS_SPEAKER_1_INIT(); //weh_function
#else
#pragma weh_all3 "NO SYS_SPEAKER_1 set \n"
#endif

//*******************************************************************b
//* T0INT (in fr0_ALL_B)
#ifdef T0INT_HERE
//*******************************************************************c
#pragma weh_all3 "   T0INT Init \n"

// Init Timer0 Interrupt
   MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);

// Enable processor interrupts
   MAP_IntMasterEnable();

// Configure the Timer as periodic
   MAP_TimerConfigure(TIMER0_BASE, TIMER_CFG_PERIODIC);

//* T0INT: timer timeout frequency = 96000 Hz = 96000 x each second
   MAP_TimerLoadSet(TIMER0_BASE, TIMER_A, T0INT_FREQ_DIVISOR);

// Setup the interrupts for the timer timeout
   MAP_IntEnable(INT_TIMER0A);

// Interupt Enable for Timer0
   MAP_TimerIntEnable(TIMER0_BASE, TIMER_TIMA_TIMEOUT);

// Enable the timer
   MAP_TimerEnable(TIMER0_BASE, TIMER_A);

#else
#pragma weh_all3 "NO T0INT Init \n"
#endif //(T0INT_HERE)

//*******************************************************************b
//* UART_USER (in fr0_ALL_B)
#ifdef UART_USER_HERE  
//*******************************************************************c
#pragma weh_all3 "   UART_USER HERE (UART3)      Hardware Init \n"

   // Init the Uart stuff
   UART_USER_UART_INIT(); //weh function

   // Init the Uart Interupts for UART_USER
#ifdef UART_USER_INT_HERE
#pragma weh_all3 "      UART_USER_INT_HERE       Interrupt is HERE \n"
   UART_USER_INT_INIT(); //weh function
#else //(UART_USER_INT_HERE)
#pragma weh_all3 "   NO UART_USER_INT_HERE       Interrupt is Not HERE \n"
#endif //(UART_USER_INT_HERE)

#else
#pragma weh_all3 "NO UART_USER HERE\n"
#endif //(UART_USER_HERE)

//*******************************************************************b
//* I2C MASTER 0 (in fr0_ALL_B)
#ifdef I2C_MAS_0_HERE
//*******************************************************************c
#pragma weh_all3 "   I2C_MAS_0_HERE              Hardware Init \n"
   // Init the I2C master 0 stuff
   I2C_MAS_0_INIT(); //weh function
#else
#pragma weh_all3 "NO I2C_MAS_0_HERE \n"
#endif //(I2C_MAS_0_HERE)

//*******************************************************************b
//* PCA9535D_PIO_0 (in fr0_ALL_B)
#ifdef PCA9535D_PIO_0_HERE
//*******************************************************************c
#pragma weh_all3 "   PCA9535D_PIO_0_HERE         Hardware Init \n"
   PCA9535D_PIO_0_INIT(); //weh function  
#else
#pragma weh_all3 "NO PCA9535D_PIO_0_HERE \n"
#endif //(PCA9535D_PIO_0_HERE)

//*******************************************************************b
//* MCP3428_ADC_0 (in fr0_ALL_B)
#ifdef MCP3428_ADC_0_HERE
//*******************************************************************c
#pragma weh_all3 "   MCP3428_ADC_0_HERE          Hardware Init \n"
   MCP3428_ADC_0_INIT(); //weh function  
#else
#pragma weh_all3 "NO MCP3428_ADC_0_HERE \n"
#endif //(MCP3428_ADC_0_HERE)

//*******************************************************************b
//* OPT3001_LIGHTSENS_0 (in fr0_ALL_B)
#ifdef OPT3001_LIGHTSENS_0_HERE
//*******************************************************************c
#pragma weh_all3 "   OPT3001_LIGHTSENS_0_HERE    Hardware Init \n"
   OPT3001_LIGHTSENS_0_INIT(); //weh function
#else
#pragma weh_all3 "NO OPT3001_LIGHTSENS_0_HERE \n"
#endif //(OPT3001_LIGHTSENS_0_HERE) 



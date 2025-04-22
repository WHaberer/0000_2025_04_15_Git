
//******************************************a
// p_UART_USER_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_UART_USER_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d

//********************************j
//* 01 Defines

// #define TEXTE_AT_PROG_START_ON_UART_USER

// see: The difference between function(UARTCharPutNonBlocking) and (UARTCharPut) .jpg
// Blocking Mode for Receive
// default is NON_BLOCKING_MODE
#define UART_USER_REC_BLOCKING_MODE

// Blocking Mode for Transmit
// default is NON_BLOCKING_MODE
#define UART_USER_TRA_BLOCKING_MODE

// immediately send after receive
//#define UART_USER_DIRECT_ECHO

// print string for each Protocoll
//#define PRINT_UART_USER_STRING


//********************************j
//* 05 Defines for UART Port           Pins, Baudrate, misc
#undef KLAPPE0

//* 10 UART Port and Pin Settings

   // Port
#define UART_USER_SYSCTL_PERIPH_PORT  SYSCTL_PERIPH_GPIOJ         // uint32_t ui32PeripheralGpio;       SYSCTL_PERIPH_GPIOJ,    // ui32 on GPIO J                                                   
      //  ... SYSCTL_PERIPH_GPIOJ

   // Port Base
#define UART_USER_PORT_BASE           GPIO_PORTJ_BASE             // uint32_t ui32PortGpioBase;         GPIO_PORTJ_BASE,        // ui32 J                                                           
      // GPIO_PORTA_BASE, GPIO_PORTB_BASE,   GPIO_PORTJ_BASE  

   // Pin Number for UART RXD use  (always Pin 0 ?)        for : Set GPIO Pin Type   with:   MAP_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1)
#define UART_USER_PIN_NO_RXD          GPIO_PIN_0                  // uint8_t  ui8PinGpioRx;             GPIO_PIN_0,             // ui8  Pin 0 = RXD                                                 
      // GPIO_PIN_0, GPIO_PIN_0,         GPIO_PIN_0

   // Pin Number for UART TXD use  (always Pin 1 OR Pin2 )  siehe auch SEt drüber !
#define UART_USER_PIN_NO_TXD          GPIO_PIN_1                  // uint8_t  ui8PinGpioTx;             GPIO_PIN_1,             // ui8  Pin 5 = TXD                                                 
      // GPIO_PIN_1, GPIO_PIN_1,         GPIO_PIN_1

   // GPIO Pins for UART RXD                 with:   MAP_GPIOPinConfigure (GPIO_PA0_U0RX); 
#define UART_USER_PIN_RXD             GPIO_PJ0_U3RX               // uint32_t ui32PinConfigRx;          GPIO_PJ0_U3RX,          // ui32 J0 UART3 RX                                                 
      // GPIO_PA0_U0RX, GPIO_PB0_U1RX,   GPIO_PJ0_U3RX 

   // GPIO Pins for UART TXD                 with:   MAP_GPIOPinConfigure (GPIO_PA1_U0TX);
#define UART_USER_PIN_TXD             GPIO_PJ1_U3TX               // uint32_t ui32PinConfigTx;          GPIO_PJ1_U3TX,          // ui32 J1 UART3 TX                                                 
      // GPIO_PA1_U0TX, GPIO_PB1_U1TX,   GPIO_PJ1_U3TX 

//* 11 UART Uart Settings

   // UART Number                 for Enable the UART           with:     MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
#define UART_USER_PERIPH_UART_NO      SYSCTL_PERIPH_UART3         // uint32_t ui32PeripheralUart;       SYSCTL_PERIPH_UART3,    // ui32 Systemkonstante: UART 3                                     
      //SYSCTL_PERIPH_UART0, SYSCTL_PERIPH_UART1,   SYSCTL_PERIPH_UART3

   // UART Base                   for Configure the UART for 115,200, 8-N-1 operation  with:  MAP_UARTConfigSetExpClk(UART3_BASE, ui32SysClock, 115200,(UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE));
#define UART_USER_UART_BASE           UART3_BASE                  // uint32_t ui32UartBase;             UART3_BASE,             // ui32 Uart_Base_Address                                           
      // UART0_BASE, UART1_BASE,     UART3_BASE
   
   // UART Port Number            not necessary
//#define UART_USER_UART_PORT_NO        3                           // uint32_t ui32UartPort;             3,                      // ui32 Uart Port Nummer                                            

//* 12 UART System Fifo Settings
#define UART_USER_SYS_FIFOS_ON        false                       // bool     bUart_Fifos_On;           false,                  // b    Uart_Fifos_ON                                               
#define UART_USER_SYS_FIFO_RX_SIZE    UART_FIFO_RX1_8             // uint32_t ui32Uart_Fifo_RX;         UART_FIFO_RX1_8,        // ui32 Uart_Fifo_RX   _RX1_8,_RX2_8,_RX4_8,_RX6_8,_RX7_8   *1      
#define UART_USER_SYS_FIFO_TX_SIZE    UART_FIFO_TX1_8             // uint32_t ui32Uart_Fifo_TX;         UART_FIFO_TX1_8,        // ui32 Uart_Fifo_TX   _TX1_8,_TX2_8,_TX4_8,_TX6_8,_TX7_8   *1      

//* 13 UART Hardware Settings

   // Baudrate
//#define UART_USER_BAUD_RATE           115200                      // uint32_t ui32UartBaud;             115200,                 // ui32 Uart Baudrate                                               
#define UART_USER_BAUD_RATE           128000                      // uint32_t ui32UartBaud;             115200,                 // ui32 Uart Baudrate                                               
      // 115200
   
   // Set WLEN 8 Bits
#define UART_USER_BITS_DATA           UART_CONFIG_WLEN_8          // uint32_t ui32UartBits;             UART_CONFIG_WLEN_8,     // ui32 Uart Bits          // besser als Flags Variable (siehe I2C) 
      // UART_CONFIG_WLEN_8, UART_CONFIG_WLEN_8, UART_CONFIG_WLEN_8 

   // Set Stop Bits
#define UART_USER_BITS_STOP           UART_CONFIG_STOP_ONE        // uint32_t ui32UartStopBit;          UART_CONFIG_STOP_ONE,   // ui32 Uart Stop Bits                                              
      // UART_CONFIG_STOP_ONE, UART_CONFIG_STOP_ONE, UART_CONFIG_STOP_ONE

   // Set Parity  
#define UART_USER_PARYTY              UART_CONFIG_PAR_NONE        // uint32_t ui32UartParity;           UART_CONFIG_PAR_NONE    // ui32 Uart Parity                                                 
      // UART_CONFIG_PAR_NONE, UART_CONFIG_PAR_NONE, UART_CONFIG_PAR_NONE

//* 14 UART Interupt Settings

   // Set UART Interupt     with: MAP_IntEnable(INT_UART0);
#define UART_USER_INT                 INT_UART3
      // INT_UART0, INT_UART1, INT_UART3

   // Switch Interrupt ON   with:   MAP_UARTIntEnable(UART0_BASE, UART_INT_RX | UART_INT_RT);
   //                         or:   MAP_UARTIntEnable(UART3_BASE, UART_INT_RX );

#undef KLAPPE1
   

//********************************j
//* 20 Defines (do not change)

//* 21 UART_USER Receive by Main_Poll (not via Serial Interrupt)
// wenn kein Buffer da ist ist keine Int steuerung möglich und es muss über poll received werden !
#ifndef UART_USER_BUFFER_TX_HERE
#define UART_USER_REC_BY_MAINPOLL
#endif // NOT 







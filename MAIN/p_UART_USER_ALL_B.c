
//******************************************a
// p_UART_USER_ALL_B.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU 


//* Doku Typedef struct UART
typedef struct {
    uint32_t ui32PeripheralUart;
    uint32_t ui32PeripheralGpio;
    uint32_t ui32PortGpioBase;
    uint8_t  ui8PinGpioRx;
    uint8_t  ui8PinGpioTx;
    uint32_t ui32PinConfigRx;
    uint32_t ui32PinConfigTx;
    uint32_t ui32UartBase;
    uint32_t ui32UartPort;
    bool     bUart_Fifos_On; 
    uint32_t ui32Uart_Fifo_RX; 
    uint32_t ui32Uart_Fifo_TX; 
    uint32_t ui32UartSrcClock;
    uint32_t ui32UartBaud;
    uint32_t ui32UartBits;
    uint32_t ui32UartStopBit;
    uint32_t ui32UartParity;
} t_Uart;

//war: tUart g_sUartUSER = {
t_Uart t_UartUSER = {
    SYSCTL_PERIPH_UART3,    // ui32 Systemkonstante: UART 3
    SYSCTL_PERIPH_GPIOJ,    // ui32 on GPIO J
    GPIO_PORTJ_BASE,        // ui32 J
    GPIO_PIN_0,             // ui8  Pin 0 = RXD
    GPIO_PIN_1,             // ui8  Pin 5 = TXD
    GPIO_PJ0_U3RX,          // ui32 J0 UART3 RX
    GPIO_PJ1_U3TX,          // ui32 J1 UART3 TX
    UART3_BASE,             // ui32 Uart_Base_Address
    3,                      // ui32 Uart Port Nummer
    false,                  // b    Uart_Fifos_ON
    UART_FIFO_RX1_8,        // ui32 Uart_Fifo_RX   _RX1_8,_RX2_8,_RX4_8,_RX6_8,_RX7_8   *1
    UART_FIFO_TX1_8,        // ui32 Uart_Fifo_TX   _TX1_8,_TX2_8,_TX4_8,_TX6_8,_TX7_8   *1
    0,                      // ui32 Uart Clock (wird später festgelegt)
    115200,                 // ui32 Uart Baudrate
    UART_CONFIG_WLEN_8,     // ui32 Uart Bits          // besser als Flags Variable (siehe I2C)
    UART_CONFIG_STOP_ONE,   // ui32 Uart Stop Bits
    UART_CONFIG_PAR_NONE    // ui32 Uart Parity
};
// *1   UARTIFLS legt fest bei welchem Bit ein INT ausgelöst wird
//      1/8tel bis 7/8tel der Übertragung

//
// ui32RxLevel	is the receive FIFO interrupt level, specified as one of
//   _RX1_8,_RX2_8,_RX4_8,_RX6_8,_RX7_8


//* Doku Blocking_Mode   NonBlocking_Mode
   // er schreibt "SPUV" im Blocking Mode
   // er schreibt "SP"   im NonBlocking Mode 
   P_UART_USER_DAT('S');
   P_UART_USER_DAT('P');
   P_UART_USER_DAT('U');
   P_UART_USER_DAT(0x56);  //= 'V'
   
   // NonBlocking      er schreibt "12"
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'1');
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'2');
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'3');
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'4');
   MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,'5');
   
   // Blocking         er schreibt "54321" 
   //MAP_UARTCharPut(UART_USER_UART_BASE,chr(RAND_MAX+48));
   MAP_UARTCharPut(UART_USER_UART_BASE,'5');
   MAP_UARTCharPut(UART_USER_UART_BASE,'4');
   MAP_UARTCharPut(UART_USER_UART_BASE,'3');
   MAP_UARTCharPut(UART_USER_UART_BASE,'2');
   MAP_UARTCharPut(UART_USER_UART_BASE,'1');


#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_UART_USER_ALL_B.c \n"
//***********************************************d

//********************************j
//* Functions

// Print one Dat Byte to RS232 (Buffer) = Central UART Function
// with or without Buffer !
#define F_P_UART_USER_DAT

// Print one Dat Byte direct to RS232 (without Buffer)
//#define F_P_UART_USER_DAT_DIRECT

#define F_P_UART_USER_STR
#define F_P_UART_USER_HEX_1B
#define F_P_UART_USER_HEX_2B
#define F_P_UART_USER_HEX_4B


#define F_P_UART_USER_DEZ_4B


// is defined 
//#define F_UART_USER_SEND_INC

// test 2 Function
#define F_UART_USER_TEST_2

// 1 Byte Funktion test 0 
#define F_UART_USER_F1B_TEST_0

//********************************j

//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//!
//! - \b UART_INT_9BIT - 9 Bit Address Match interrupt
//! - \b UART_INT_OE   - Overrun Error interrupt
//! - \b UART_INT_BE   - Break Error interrupt
//! - \b UART_INT_PE   - Parity Error interrupt
//! - \b UART_INT_FE   - Framing Error interrupt
//! - \b UART_INT_RT   - Receive Timeout interrupt
//! - \b UART_INT_TX   - Transmit interrupt
//! - \b UART_INT_RX   - Receive interrupt
//! - \b UART_INT_DSR  - DSR interrupt
//! - \b UART_INT_DCD  - DCD interrupt
//! - \b UART_INT_CTS  - CTS interrupt
//! - \b UART_INT_RI   - RI interrupt


//* TI System Constants
// UART_INT_TX = TI System Constants
// UART_INT_RX = TI System Constants
// UART_INT_RT = TI System Constants


//********************************j
//* Defines for ALL (do not change)

//* switch On General UART usage
#ifndef UART_ALL_HERE
#define UART_ALL_HERE
#endif

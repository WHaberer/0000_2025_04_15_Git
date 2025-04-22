
//******************************************a
// p_UART_USER_BUFFER_TX_ALL_E.c 
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

Output ring buffer.
Buffer is full if ui32_Uart_User_TxBuffer_ReadIndex is one ahead of ui32_Uart_User_TxBuffer_WriteIndex.
Buffer is empty if the two indices are the same.

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_UART_USER_BUFFER_TX_ALL_E.c \n"
//***********************************************d






//********************************j
//* Variables

// Buffer Array
uint8_t aui8_Uart_User_TxBuffer[UART_USER_TX_BUFFER_SIZE];

// Adresses Points in Array
volatile uint32_t ui32_Uart_User_TxBuffer_WriteIndex = 0;
volatile uint32_t ui32_Uart_User_TxBuffer_ReadIndex = 0;

uint16_t ui16_Uart_User_TX_Wait_Counter;

// ich muss das bit mit Timer wieder abschalten !
bool b_Uart_TX_Wait_Error;

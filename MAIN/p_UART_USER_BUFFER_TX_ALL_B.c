
//******************************************a
// p_UART_USER_BUFFER_TX_ALL_B.c 
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_UART_USER_BUFFER_TX_ALL_B.c \n"

//***********************************************d


//********************************j
//* Functions

// function for Uart Send steered by Interupt
#define F_UART_USER_INT_TRANSMIT_HERE


//********************************j
//* Defines Interrupt for UART_USER

//* switch On the UART_INT because Buffer is active
#ifndef UART_USER_INT_HERE
#define UART_USER_INT_HERE
#endif

//********************************j
//* Defines for ALL (do not change)

//* switch On General UART_ALL_BUFFER_TX usage
#ifndef UART_ALL_BUFFER_TX_HERE
#define UART_ALL_BUFFER_TX_HERE
#endif

#ifndef F_UART_ALL_BUFFER_IS_EMPTY
#define F_UART_ALL_BUFFER_IS_EMPTY
#endif

#ifndef F_UART_ALL_BUFFER_IS_FULL
#define F_UART_ALL_BUFFER_IS_FULL
#endif

//********************************j
//* Prototypes

#ifdef F_UART_ALL_BUFFER_IS_EMPTY
static bool IsBufferEmpty(volatile uint32_t *pui32Read,volatile uint32_t *pui32Write);
#endif

#ifdef F_UART_ALL_BUFFER_IS_FULL
static bool IsBufferFull(volatile uint32_t *pui32Read,volatile uint32_t *pui32Write, uint32_t ui32Size);
#endif

//********************************j
//* Macros

// Macros to determine number of free and used bytes in the transmit buffer.
// diese Macros benutzen Funktionen die in einen AFG File stehen !
// entweder Funktions Prototypen oder nach den Funktionen definieren !

// Hint: UART_USER_BUFFER_TX_EMPTY
   // schalte alle TX Interrupts aus damit pointer nicht von INT verändert werden
   // muss auch passieren wenn ich buffer Full / Empty abfrage !


#define UART_USER_BUFFER_TX_EMPTY    (IsBufferEmpty(&ui32_Uart_User_TxBuffer_ReadIndex,   \
                                                   &ui32_Uart_User_TxBuffer_WriteIndex))


// was: ADVANCE_TX_BUFFER_INDEX(Index)
#define UART_USER_ADVANCE_BUFFER_TX_INDEX(Index) \
                                (Index) = ((Index) + 1) % UART_USER_TX_BUFFER_SIZE


#define UART_USER_BUFFER_TX_FULL    (IsBufferFull(&ui32_Uart_User_TxBuffer_ReadIndex,  \
                                                  &ui32_Uart_User_TxBuffer_WriteIndex, \
                                                  UART_USER_TX_BUFFER_SIZE))



#ifdef NO
#define TX_BUFFER_USED          (GetBufferCount(&ui32_Uart_User_TxBuffer_ReadIndex,  \
                                                &ui32_Uart_User_TxBuffer_WriteIndex, \
                                                UART_USER_TX_BUFFER_SIZE))
#define TX_BUFFER_FREE          (UART_USER_TX_BUFFER_SIZE - TX_BUFFER_USED)

#endif //(NO)





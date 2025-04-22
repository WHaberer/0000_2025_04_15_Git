
//******************************************a
// afg_UART_ALL_BUFFER_TX.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_UART_ALL_BUFFER_TX.c \n"
//***********************************************d


//*******************************************************************b
//! Determines whether the ring buffer whose pointers and size are provided
//! is empty or not.
//!
//! \param pui32Read points to the read index for the buffer.
//! \param pui32Write points to the write index for the buffer.
//!
//! This function is used to determine whether or not a given ring buffer is
//! empty.  The structure of the code is specifically to ensure that we do not
//! see warnings from the compiler related to the order of volatile accesses
//! being undefined.
//!
//! \return Returns \b true if the buffer is empty or \b false otherwise.

// from:
// uartstdio.c - Utility driver to provide simple UART console functions.

#ifdef F_UART_ALL_BUFFER_IS_EMPTY
//*******************************************************************c
// Function for Macro
static bool IsBufferEmpty(volatile uint32_t *pui32_Ori_Read,volatile uint32_t *pui32_Ori_Write) {
   uint32_t ui32_Write;
   uint32_t ui32_Read;

   ui32_Write = *pui32_Ori_Write;
   ui32_Read  = *pui32_Ori_Read;

   return((ui32_Write == ui32_Read) ? true : false);
} //end function
#endif //(F_UART_ALL_BUFFER_IS_EMPTY)


//*******************************************************************b
//! Determines whether the ring buffer whose pointers and size are provided
//! is full or not.
//!
//! \param pui32Read points to the read index for the buffer.
//! \param pui32Write points to the write index for the buffer.
//! \param ui32Size is the size of the buffer in bytes.
//!
//! This function is used to determine whether or not a given ring buffer is
//! full.  The structure of the code is specifically to ensure that we do not
//! see warnings from the compiler related to the order of volatile accesses
//! being undefined.
//!
//! \return Returns \b true if the buffer is full or \b false otherwise.
#ifdef F_UART_ALL_BUFFER_IS_FULL
//*******************************************************************c
static bool IsBufferFull(volatile uint32_t *pui32_Ori_Read,volatile uint32_t *pui32_Ori_Write, uint32_t ui32_Ori_Size) {
    uint32_t ui32_Write;
    uint32_t ui32_Read;

    ui32_Write = *pui32_Ori_Write;
    ui32_Read  = *pui32_Ori_Read;

    return((((ui32_Write + 1) % ui32_Ori_Size) == ui32_Read) ? true : false);
} //end function
#endif //(F_UART_ALL_BUFFER_IS_FULL)

//******************************************a
// afg_UART_USER_BUFFER_TX.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_UART_USER_BUFFER_TX.c \n"
//***********************************************d

//*******************************************************************b
//* UART_USER_Int_Transmit(); //weh function     Interupt Funct 
#ifdef F_UART_USER_INT_TRANSMIT_HERE
// Take as many bytes from the transmit buffer as we have space for and move
// them into the UART transmit FIFO.
// from:
// uartstdio.c - Utility driver to provide simple UART console functions.
// was: static void UARTPrimeTransmit(uint32_t ui32Base)

// wird in TXD INT aufgerufen !
// function for Uart Send steered by Interupt
// was: UARTPrimeTransmit(uint32_t ui32Base)
//*******************************************************************c
void UART_USER_Int_Transmit() {
   // check if data in Buffer
   if(!UART_USER_BUFFER_TX_EMPTY) {
      //HERE: Buffer ist filled

      // Disable the UART interrupt
      // weil hier Buffer geändert wird
      
      // from uartstudio.c 
      //MAP_IntDisable(g_ui32UARTInt[g_ui32PortNum]);
      //MAP_IntDisable(UART_USER_INT);
      // was on
      MAP_UARTIntDisable(UART_USER_UART_BASE, UART_INT_TX);

      // send datas in Buffer direct to the uart system transmit FIFI
      while(MAP_UARTSpaceAvail(UART_USER_UART_BASE) && !UART_USER_BUFFER_TX_EMPTY) {
         // sende Value direkt to UART
         MAP_UARTCharPutNonBlocking(UART_USER_UART_BASE,aui8_Uart_User_TxBuffer[ui32_Uart_User_TxBuffer_ReadIndex]);
         // setze die Pointer auf den nächste Stelle im Buffer   
         UART_USER_ADVANCE_BUFFER_TX_INDEX(ui32_Uart_User_TxBuffer_ReadIndex);
      }

      // Enable UART Interrupt

      // from uartstudio.c 
      //MAP_IntEnable(g_ui32UARTInt[g_ui32PortNum]);
      //MAP_IntEnable(UART_USER_INT);
      
      //was on
      MAP_UARTIntEnable(UART_USER_UART_BASE, UART_INT_TX);
   }
} //end function
#endif //(F_UART_USER_INT_TRANSMIT_HERE)

//*******************************************************************b
//* UART_USER_IntHandler
#undef KLAPPE0
// Interrupt Handler for UART_USER      (only if BUFFER active)
//*******************************************************************b
void UART_USER_IntHandler(void) {
//*******************************************************************c
#pragma weh_all3 "File:      UART_USER_IntHandler \n"

// Get the interrrupt status
// true ist with internal mask oder without internal mask
   ui32_Uart_User_Status = MAP_UARTIntStatus(UART_USER_UART_BASE, true);
   
// Clear the asserted interrupts
   MAP_UARTIntClear(UART_USER_UART_BASE, ui32_Uart_User_Status);

// TXD Interrupt Tokens to send availiable
   if(ui32_Uart_User_Status & UART_INT_TX) {

   // Move as many bytes as we can into the transmit FIFO.
   // UARTPrimeTransmit(g_ui32Base);
   // sende Zeiche vom Buffer
   // old UART_USER_Int_Transmit(UART_USER_UART_BASE);  //weh function
      UART_USER_Int_Transmit();  //weh function
      
   // If the output buffer is empty, turn off the transmit interrupt.
   // Wird beim ersten Token im Buffer wieder eingeschaltet
      if(UART_USER_BUFFER_TX_EMPTY) {
        MAP_UARTIntDisable(UART_USER_UART_BASE, UART_INT_TX);
      }
   
   } //(if(ui32Status & UART_INT_TX) )

// RXD Interrupt Token received
   if(ui32_Uart_User_Status & (UART_INT_RX | UART_INT_RT)) {
   // Get all the available characters from the UART.
      while(MAP_UARTCharsAvail(UART_USER_UART_BASE)) {

   // Read a character and Do something
#ifndef UART_USER_REC_BY_MAINPOLL
         UART_USER_RECEIVE_DAT(); //weh function in UART_USER_IntHandler
#endif //NOT (UART_USER_REC_BY_MAINPOLL)

      } //end while
   } //end (if(ui32_Uart_User_Status & (UART_INT_RX | UART_INT_RT)))
   
} //end function
#undef KLAPPE1

//*******************************************************************b
//* UART_USER_UART_INIT(); //weh_function
#ifdef UART_USER_INT_HERE
// Initialize the Interrupts for the UART_USER Interface
//*******************************************************************c
void UART_USER_INT_INIT() {

// Set the UART to interrupt whenever the TX FIFO is almost empty or when any character is received.
   MAP_UARTFIFOLevelSet (UART_USER_UART_BASE, UART_USER_SYS_FIFO_TX_SIZE, UART_USER_SYS_FIFO_RX_SIZE);

   // von Help
   //UARTIntRegister(UART_USER_UART_BASE, UART_USER_IntHandler);
   //MAP_UARTIntRegister(UART_USER_UART_BASE, UART_USER_IntHandler);

   // switch on UART Interrupt sources
   // We are configured for buffered output so enable the master interrupt
   // for this UART and the receive interrupts.  We don't actually enable the
   // transmit interrupt in the UART itself until some data has been placed
   // in the transmit buffer.
   
   MAP_UARTIntDisable(UART_USER_UART_BASE, 0xFFFFFFFF);
   MAP_UARTIntEnable(UART_USER_UART_BASE, UART_INT_RX | UART_INT_RT );

// switch on General Interrupts for INT_UARTx
   MAP_IntEnable(UART_USER_INT);


} //end function
#endif //(UART_USER_INT_HERE)
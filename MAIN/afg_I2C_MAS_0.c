
//******************************************a
// afg_I2C_MAS_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

 aus p_File
   // mache einen NACK not Ack ist ende am I2C bus
   MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_SEND_FINISH);
   MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_SEND_ERROR_STOP);
   MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_RECEIVE_FINISH);
   MAP_I2CMasterControl(t_I2C0.ui32_BaseI2C, I2C_MAS_0_CMD_BURST_RECEIVE_ERROR_STOP);

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_I2C_MAS_0.c \n"
//***********************************************d

//********************************j
//* 01 Prototypes

//*******************************************************************b
//* I2C_MAS_0_INIT(); //weh_function
#ifdef F_I2C_MAS_0_INIT
//*******************************************************************c
void I2C_MAS_0_INIT() {
// Initialize the I2C Master interface and its pins

// Enable the GPIO peripheral used by the I2C Master
   MAP_SysCtlPeripheralEnable(I2C_MAS_0_SYSCTL_PERIPH_PORT);

// Configure GPIO pins for I2C mode
   MAP_GPIOPinConfigure (I2C_MAS_0_PIN_SCL);  // SCL
   MAP_GPIOPinConfigure (I2C_MAS_0_PIN_SDA);  // SDA
   MAP_GPIOPinTypeI2CSCL(I2C_MAS_0_PORT_BASE, I2C_MAS_0_PIN_NO_SCL);   // SCL
   MAP_GPIOPinTypeI2C   (I2C_MAS_0_PORT_BASE, I2C_MAS_0_PIN_NO_SDA);   // SDA

// Set up the I2C Master peripheral
   MAP_SysCtlPeripheralDisable(I2C_MAS_0_PERIPH_I2C_NO);
   MAP_SysCtlPeripheralReset  (I2C_MAS_0_PERIPH_I2C_NO);
   MAP_SysCtlPeripheralEnable (I2C_MAS_0_PERIPH_I2C_NO);

// wait I2C Master if its ready   von MAF    ACHTUNG gefährlich !
// while(!MAP_SysCtlPeripheralReady(p_I2C->ui32PeripheralI2C)); // hat so MAF gemacht !
   while(!MAP_SysCtlPeripheralReady(I2C_MAS_0_PERIPH_I2C_NO)) {
      ; // hier evtl. Endlosschleife (weh)!
   }

// HERE: I2C Master should be ready (weh)

// Set I2C Master Settings
   MAP_I2CMasterInitExpClk(I2C_MAS_0_I2C_BASE, ui32SysClock, I2C_MAS_0_I2C_SPEED_FAST);

// Master Interrupt ENABLE
// was macht das ???
// brauch ich das schon ?
   MAP_I2CMasterIntEnableEx(I2C_MAS_0_I2C_BASE, I2C_MAS_0_INT_FLAGS);

   // CAUTION: Do *not* set the timeout if repeated start is required!
   // I2CMasterTimeoutSet(p_I2C->ui32_BaseI2C, p_I2C->ui32_Timeout);
// Set the timeout to 0 (no timeout).
   MAP_I2CMasterTimeoutSet(I2C_MAS_0_I2C_BASE, 0);

// Enable I2C Master
   MAP_I2CMasterEnable(I2C_MAS_0_I2C_BASE);

} //end function
#endif //(F_I2C_MAS_0_INIT)

//*******************************************************************b
//* I2C_MAS_0_WRITE_ADV
//*******************************************************************c
#ifdef F_I2C_MAS_0_WRITE_ADV
// Write data to an I2C master (advanced). von MAF i2c.c
uint32_t I2C_MAS_0_WRITE_ADV(uint8_t ui8_Ori_SlaveAddr, uint8_t *pui8_Ori_Array, uint8_t ui8_Ori_Length, bool b_Ori_RepeatedStart, bool b_Ori_Stop) {

// Parts from File: i2c.c
// Auth: M. Fras, Electronics Division, MPI for Physics, Munich

// Variables
   uint32_t ui32_I2CMasterInt, ui32_I2CMasterErr;
   uint32_t i; // local
   uint8_t  ui8_DataNo; // local

// check if numbers of data to send is OK
   if (ui8_Ori_Length < 1) return 1;

// weh Test Send Dat to RS232 UART_USER = Test Ausgaben
#ifdef F_I2C_MAS_0_WRITE_ADV_P_UART_USER
   P_UART_USER_DAT('G');
   P_UART_USER_HEX_4B(ui8_Ori_SlaveAddr);
   P_UART_USER_DAT(T_SPACE);
   P_UART_USER_HEX_1B(ui8_Ori_Length);
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[0]);
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[1]);
   P_UART_USER_HEX_1B(ui8_I2C_MAS_0_Array[2]);
   P_UART_USER_DAT(T_NEWLINE);
#endif //(F_I2C_MAS_0_WRITE_ADV_P_UART_USER)

// Clear all I2C master interrupts.
   I2CMasterIntClearEx(I2C_MAS_0_I2C_BASE, 0xffffffffU);

// Set the I2C slave address.
   I2CMasterSlaveAddrSet(I2C_MAS_0_I2C_BASE, ui8_Ori_SlaveAddr, false); // false = write; true = read

   // Wait until the I2C bus is free, if no repeated start.
   if (!b_Ori_RepeatedStart) {
      for (i = 0; i <= (I2C_MAS_0_TIMEOUT+10); i++) {
         if (!I2CMasterBusBusy(I2C_MAS_0_I2C_BASE)) break;

         ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.
                                                 // Note: The SysCtlDelay executes a simple 3 instruction cycle loop.
         // Timeout while waiting for the I2C bus to be free.
         if (i == (I2C_MAS_0_TIMEOUT+10)) return I2C_MASTER_INT_ARB_LOST;
      }
   }

   // Send data.
   for (ui8_DataNo = 0; ui8_DataNo < ui8_Ori_Length; ui8_DataNo++) {
      I2CMasterDataPut(I2C_MAS_0_I2C_BASE, pui8_Ori_Array[ui8_DataNo]);

// weh Test Send Dat to RS232 UART_USER = Test Ausgaben
#ifdef F_I2C_MAS_0_WRITE_ADV_P_UART_USER
      P_UART_USER_HEX_1B (pui8_Ori_Array[ui8_DataNo]); //weh function
      P_UART_USER_DAT(T_NEWLINE);
#endif //(F_I2C_MAS_0_WRITE_ADV_P_UART_USER)

      if (ui8_Ori_Length == 1 && b_Ori_Stop) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_SINGLE_SEND);
      }
      else {
         if (ui8_DataNo == 0) I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_START);
         else if ((ui8_DataNo == ui8_Ori_Length - 1) && b_Ori_Stop) I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);
         else I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_CONT);
      }

      // Wait until the transfer is finished.
      ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.

      for (i = 0; i <= (I2C_MAS_0_TIMEOUT+10); i++) {
         if (!I2CMasterBusy(I2C_MAS_0_I2C_BASE)) break;
            ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.

            // Timeout while waiting for the I2C master to be ready.
            if (i == (I2C_MAS_0_TIMEOUT+10)) {
               I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_ERROR_STOP);
               return I2C_MASTER_INT_TIMEOUT;
            }
         }

      // Read I2C master interrupts.
      ui32_I2CMasterInt = I2CMasterIntStatusEx(I2C_MAS_0_I2C_BASE, false);
      // mask for different Interrupt Sources
      ui32_I2CMasterInt &= I2C_MASTER_INT_ARB_LOST | I2C_MASTER_INT_NACK | I2C_MASTER_INT_TIMEOUT;

      // schaue ob ein maskierter Int aufgetreten ist
      if (ui32_I2CMasterInt) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_ERROR_STOP);
         break;
      }

      // Check for I2C errors.
      ui32_I2CMasterErr = I2CMasterErr(I2C_MAS_0_I2C_BASE);

      if (ui32_I2CMasterErr != I2C_MASTER_ERR_NONE) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_ERROR_STOP);
         return 1;
      }
   }

    return ui32_I2CMasterInt;
} //end function
#endif //(F_I2C_MAS_0_WRITE_ADV)

//*******************************************************************b
//* I2C_MAS_0_READ_ADV
#ifdef F_I2C_MAS_0_READ_ADV
//*******************************************************************c
uint32_t I2C_MAS_0_READ_ADV(uint8_t ui8_Ori_SlaveAddr, uint8_t *pui8_Ori_Array, uint8_t ui8_Ori_Length, bool b_Ori_RepeatedStart, bool b_Ori_Stop) {
// Read data from an I2C master (advanced) Parts from MAF i2c.c

// Variables
   uint32_t ui32_I2CMasterInt, ui32_I2CMasterErr;
   uint32_t i; // local
   uint8_t  ui8_DataNo; // local

// Check bytes to transfer
   if (ui8_Ori_Length < 1) return 1;

   // Clear all I2C master interrupts.
   // wird eigentlich im Interrupt Handler benutzt
   //I2CMasterIntClearEx(I2C_MAS_0_I2C_BASE, 0xffffffffU);
   I2CMasterIntClearEx(I2C_MAS_0_I2C_BASE, 0xffffffff);

   // Set the I2C slave address.
   I2CMasterSlaveAddrSet(I2C_MAS_0_I2C_BASE, ui8_Ori_SlaveAddr, true);    // false = write; true = read

   // Wait until the I2C bus is free, if no repeated start.
   if (!b_Ori_RepeatedStart) {
      for (i = 0; i <= (I2C_MAS_0_TIMEOUT+10); i++) {
         if (!I2CMasterBusBusy(I2C_MAS_0_I2C_BASE)) break;
         ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.
                                                // Note: The SysCtlDelay executes a simple 3 instruction cycle loop.
         // Timeout while waiting for the I2C bus to be free.
         if (i == (I2C_MAS_0_TIMEOUT+10)) return I2C_MASTER_INT_ARB_LOST;
      }
   }

   // Receive data.
   for (ui8_DataNo = 0; ui8_DataNo < ui8_Ori_Length; ui8_DataNo++) {
      if (ui8_Ori_Length == 1 && b_Ori_Stop) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_SINGLE_RECEIVE);
      }
      else {
         if (ui8_DataNo == 0) I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_RECEIVE_START);
         else if ((ui8_DataNo == ui8_Ori_Length - 1) && b_Ori_Stop) I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);
         else I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_RECEIVE_CONT);
      }


      // Wait until the transfer is finished.
      ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.

      for (i = 0; i <= (I2C_MAS_0_TIMEOUT+10); i++) {
         if (!I2CMasterBusy(I2C_MAS_0_I2C_BASE)) break;
         ROM_SysCtlDelay(ui32SysClock / 3e5);   // 10 us delay.

         // Timeout while waiting for the I2C master to be ready.
         if (i == (I2C_MAS_0_TIMEOUT+10)) {
            I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_SEND_ERROR_STOP);
            return I2C_MASTER_INT_TIMEOUT;
         }
      }

      // Read I2C master interrupts.
      ui32_I2CMasterInt = I2CMasterIntStatusEx(I2C_MAS_0_I2C_BASE, false);
      ui32_I2CMasterInt &= I2C_MASTER_INT_ARB_LOST | I2C_MASTER_INT_NACK | I2C_MASTER_INT_TIMEOUT;

      if (ui32_I2CMasterInt) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP);
         break;
      }

      // Check for I2C errors.
      ui32_I2CMasterErr = I2CMasterErr(I2C_MAS_0_I2C_BASE);

      if (ui32_I2CMasterErr != I2C_MASTER_ERR_NONE) {
         I2CMasterControl(I2C_MAS_0_I2C_BASE, I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP);
         return 1;
      }

      // Get the data byte from the I2C master.
      pui8_Ori_Array[ui8_DataNo] = I2CMasterDataGet(I2C_MAS_0_I2C_BASE);
   }

   return ui32_I2CMasterInt;
} //end function
#endif //(F_I2C_MAS_0_READ_ADV)

//*******************************************************************b
//* I2C_MAS_0_WRITE
#ifdef F_I2C_MAS_0_WRITE
//*******************************************************************c
uint32_t I2C_MAS_0_WRITE(uint8_t ui8_Ori_SlaveAddr, uint8_t *pui8_Ori_Array, uint8_t ui8_Ori_Length) {
// write n Bytes from Data_Array to I2C Master
   return I2C_MAS_0_WRITE_ADV(ui8_Ori_SlaveAddr, pui8_Ori_Array, ui8_Ori_Length, false, true);
} //end function
#endif //(F_I2C_MAS_0_WRITE)

//*******************************************************************b
//* I2C_MAS_0_READ
#ifdef F_I2C_MAS_0_READ
//*******************************************************************c
uint32_t I2C_MAS_0_READ(uint8_t ui8_Ori_SlaveAddr, uint8_t *pui8_Ori_Array, uint8_t ui8_Ori_Length) {
// read n Bytes from a Slave at I2C Master to Data_Array
    return I2C_MAS_0_READ_ADV(ui8_Ori_SlaveAddr, pui8_Ori_Array, ui8_Ori_Length, false, true);
} //end function
#endif //(F_I2C_MAS_0_READ)

//*******************************************************************b
//* x NO I2C_TEST_WEH
#ifdef NO
uint32_t I2CTestWeh(uint8_t ui8SlaveAddr,uint8_t cValue) {
//*******************************************************************c
uint8_t ui8_I2C_MAS_0_Array[1] = {cValue};


// return I2C_MAS_0_WRITE(ui8SlaveAddr, ui8_I2C_MAS_0_Array, 3);
   return I2C_MAS_0_WRITE(ui8SlaveAddr, ui8_I2C_MAS_0_Array, 1);

} //end function
#endif //(NO)


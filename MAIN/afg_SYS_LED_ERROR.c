//******************************************a
// afg_SYS_LED_ERROR.c
//******************************************a
// afg_SYS_OR..IGINAL.c

// Edit ONLY the  O R I G I N A L   File  !!!
//
//     ***    *   *   *      *   *
//    *   *   **  *   *       * *
//    *   *   * * *   *        *
//    *   *   *  **   *        *
//     ***    *   *   *****    *
//
// The word OR..IGINAL will be replaced by the nummer x (or the Name)

#ifdef NO //DOKU

    //GpioInit(&g_sGpioLed1);

    // old GpioInit(&g_sGpioLed3);
    // old GpioInit(&g_sGpioLed4);

#endif //(NO //DOKU)

//***********************************************d

//*******************************************************************b
//* SYS_LED_ERROR_INIT(); //weh_function
#undef KLAPPE0
//*******************************************************************c
void SYS_LED_ERROR_INIT(void) {
   // Enable the GPIO peripheral for the Pin
   MAP_SysCtlPeripheralEnable(SYS_LED_ERROR_GPIO);

   // Unlock a GPIO pin which had been previously locked. This is required for
   // pins that by default are locked against inadvertent reconfiguration.
   // These are e.g. pins used by the JTAG/SWD interface and any pin capable
   // of acting as an NMI input.
   MAP_GPIOUnlockPin(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN);

   if (SYS_LED_ERROR_PIN_INPUT) {
      // Set the direction as input.
      MAP_GPIOPinTypeGPIOInput(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN);
   }
   else {
      //HERE: Output
      // check if it is Open Drain
      if (SYS_LED_ERROR_PIN_TYPE == GPIO_PIN_TYPE_OD) {
         //HERE: Open Drain
         // Set the direction as output with open drain.
         MAP_GPIOPinTypeGPIOOutputOD(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN);
      }
      else {
         // Set the direction as normal output.
         MAP_GPIOPinTypeGPIOOutput  (SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN);
      }
   }   

   // Enable the GPIO pins for digital function.
   MAP_GPIOPadConfigSet(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, SYS_LED_ERROR_STRENGTH, SYS_LED_ERROR_PIN_TYPE);
} //end function
#undef KLAPPE1

//*******************************************************************b
//* SYS_LED_ERROR_ON(); //weh_function
#undef KLAPPE0
//*******************************************************************c
void SYS_LED_ERROR_ON(void) {
#ifdef SYS_LED_ERROR_LOW_ACTIVE
   MAP_GPIOPinWrite(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, 0);
   b_SYS_LED_ERROR_NOW_ON_BIT = false;
#else // Default ist High active
   MAP_GPIOPinWrite(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, SYS_LED_ERROR_PIN);
   b_SYS_LED_ERROR_NOW_ON_BIT = true;
#endif
} //end function
#undef KLAPPE1

//*******************************************************************b
//* SYS_LED_ERROR_OFF(); //weh_function
#undef KLAPPE0
//*******************************************************************c
void SYS_LED_ERROR_OFF(void) {
#ifdef SYS_LED_ERROR_LOW_ACTIVE
   MAP_GPIOPinWrite(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, SYS_LED_ERROR_PIN);
   b_SYS_LED_ERROR_NOW_ON_BIT = true;
#else  // Default ist High active
   MAP_GPIOPinWrite(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, 0);
   b_SYS_LED_ERROR_NOW_ON_BIT = false;
#endif
} //end function
#undef KLAPPE1

//*******************************************************************b
//* SYS_LED_ERROR_CPL(); //weh_function
#undef KLAPPE0
//*******************************************************************c
void SYS_LED_ERROR_CPL(void) {
   // schreibe den invertierten gelesenen wert
   //ui8_A = GPIOPinRead(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN);
    
   // invert the bool variable
   b_SYS_LED_ERROR_NOW_ON_BIT ^= 1; 
   // set int variable to bool value
   if (b_SYS_LED_ERROR_NOW_ON_BIT) ui8_A = SYS_LED_ERROR_PIN;
     else ui8_A = 0;
   MAP_GPIOPinWrite(SYS_LED_ERROR_BASE, SYS_LED_ERROR_PIN, ui8_A);
}
#undef KLAPPE1

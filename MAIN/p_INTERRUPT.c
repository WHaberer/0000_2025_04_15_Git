
//******************************************************************
// p_INTERRUPT.c
//******************************************************************

#ifdef NO //Doku


// von interrupts.c
// ist in U:\WORK\0_TM4C\examples\boards\ek-tm4c1294xl\drivers\pinout.c
// umschalten der UserLeds für USB,LAN,User
// hab ich nicht drin - geht aber trotzdem
// wo werden die User Pins für User geschaltet ?
// in GpioLedInit
    //
    // Configure the device pins.
    //
//    PinoutSet(false, false);

*******************



    // Set the interrupt priorities so that they are decreasing (i.e. C > B >
    // A).
    //
//    MAP_IntPrioritySet(INT_GPIOA, 0x80);
//    MAP_IntPrioritySet(INT_GPIOB, 0x40);  //lower
//    MAP_IntPrioritySet(INT_GPIOC, 0x00);  // highest


//! // Set the UART 0 interrupt priority to the lowest priority.
//! //
//! IntPrioritySet(INT_UART0, 0xE0);
//!
//! //
//! // Set the USB 0 interrupt priority to the highest priority.
//! //
//! IntPrioritySet(INT_USB0, 0);


#endif //(NO //DOKU)



//********************************j
//* Functions



//********************************j
//* Variables



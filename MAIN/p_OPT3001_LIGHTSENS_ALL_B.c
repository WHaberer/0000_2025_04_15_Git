
//******************************************************************
// p_OPT3001_LIGHTSENS_ALL_B.c
//******************************************************************

#ifdef NO //Doku

#endif //(NO //DOKU)

//********************************j
//* Defines

// Unter Adressen für alle OPT3001
#define OPT3001_LIGHTSENS_UADR_RESULT  0x00 // OPT3001_LIGHTSENS_ Unter Adresse
#define OPT3001_LIGHTSENS_UADR_CONFIG  0x01 // OPT3001_LIGHTSENS_ Unter Adresse


// Config Value High und Low Byte
#ifdef NO // (NO) Doku
Bit 15 14 13 12 11 10 09 08

     1  1  0  0             // Full Range is 0x0c0 hex
                 1          // Conversion Time 1=800 ms 0=100ms
                    1  1    // Mode of conversion: 00=Shutdown 01=Single-shot 10 or 11 =Continuous conversions
                          0 // Overflow flag field (read-only)
#endif //(NO (Doku))


//#define OPT3001_LIGHTSENS_0_CONF_H 0x0ce // Full Range; 800ms; Continuous; 0
#define OPT3001_LIGHTSENS_0_CONF_H 0x0c6 // Full Range; 100ms; Continuous; 0


#ifdef NO // (NO) Doku
Bit 07 06 05 04 03 02 01 00

     0                      // Conversion ready field (read-only)
        0                   // Flag high field (read-only) ... than a specified level of interest
           0                // Flag low field (read-only)  ... than a specified level of interest
              1             // Latch field (read or write) ... functionality of the interrupt reporting mechanisms
                 0          // Polarity field (read or write) ... of interrupt Pin
                    0       // Mask exponent field (read or write)
                       0  0 // Fault count field (read or write)  ... to trigger the interrupt reporting mechanisms
#endif //(NO (Doku))


#define OPT3001_LIGHTSENS_0_CONF_L 0x010  // Latch field is on (I do not use this functionality)



//********************************j
//* Includes

//********************************j
//* Libs

//********************************j
//* Functions

//********************************j
//* Variables

uint8_t ui8_Lumi_Exp;
uint32_t ui32_Lumi_Val; 

// solle ui8 sein ... oder ?
uint32_t Lumi_Val_H,Lumi_Val_L;

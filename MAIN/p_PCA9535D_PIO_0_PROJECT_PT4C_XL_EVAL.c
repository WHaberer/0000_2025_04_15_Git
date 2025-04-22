
//******************************************a
// p_PCA9535D_PIO_0_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

Device is on :
L0MDT_CM_Command_Module
LORA_GROSS Testboard

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_PCA9535D_PIO_0_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d

//********************************j
//* Defines

// the PCA9535D_PIO_0 is at I2C_MASter_0 
#define PCA9535D_PIO_0_AT_I2C_MAS_0

// Print Read-Values to UartUser
//#define PCA9535D_PIO_0_PRINT2UU

// I2C Device : PCA9535D PIO 16 Bit (on L0MDT_CM_Command_Module)
// Adresse wie PCF8574 PIO
// Alle 3 Adress Jumper gesteckt = alle Adressen auf 0
#define PCA9535D_PIO_0_ADR  0x20 //0x20   LSB Bit 0 = WR oder RD ist separat. Hier sind nur die oberen 7 Bits
//das RW Bit ist nicht in der ADR ! Die ADR muss vor dem senden verschoben werden !!
// um das RW Bit unten anzuhängen !


//* Pins usage Port 0 = P0
// KEY0 Sensor Taste
#define PCA9535D_PIO_0_TEST_OUT   0x01
#define PCA9535D_PIO_0_KEY0       0x02

//* Pins usage Port 1 = P1
#define PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_D 0x08 // zum Test verdrahtet (brauner Draht)
#define PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_C 0x04
#define PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_B 0x02
#define PCA9535D_PIO_0_OUT_BCD_DRIV_0_INP_A 0x01

// Default Init Values for Output
#define PCA9535D_PIO_0_VAL_P1_WR_DEF 0x00      // 0x0 = Output
#define PCA9535D_PIO_0_VAL_P0_WR_DEF 0x00      // 0x0 = Output

// init DIR Bits dir einbauen !!! //"- still to be revised -"
#define PCA9535D_PIO_0_P0_BIT7 PCA9535D_PIO_OUTPUT    // P0_7 IC Pin 11: 
#define PCA9535D_PIO_0_P0_BIT6 PCA9535D_PIO_OUTPUT    // P0_6 IC Pin 10: 
#define PCA9535D_PIO_0_P0_BIT5 PCA9535D_PIO_OUTPUT    // P0_5 IC Pin 9 : 
#define PCA9535D_PIO_0_P0_BIT4 PCA9535D_PIO_OUTPUT    // P0_4 IC Pin 8 : 
#define PCA9535D_PIO_0_P0_BIT3 PCA9535D_PIO_OUTPUT    // P0_3 IC Pin 7 : 
#define PCA9535D_PIO_0_P0_BIT2 PCA9535D_PIO_OUTPUT    // P0_2 IC Pin 6 : LED_T ? was war das ?
#define PCA9535D_PIO_0_P0_BIT1 PCA9535D_PIO_INPUT     // P0_1 IC Pin 5 : Sensor Taste Input
#define PCA9535D_PIO_0_P0_BIT0 PCA9535D_PIO_OUTPUT    // P0_0 IC Pin 4 : Test Line


// init DIR Bits dir einbauen !!! //"- still to be revised -"
//* Pins usage Port 1 = P1
#define PCA9535D_PIO_0_P1_BIT7 PCA9535D_PIO_OUTPUT    // P1_7 IC Pin 20:
#define PCA9535D_PIO_0_P1_BIT6 PCA9535D_PIO_OUTPUT    // P1_6 IC Pin 19:
#define PCA9535D_PIO_0_P1_BIT5 PCA9535D_PIO_OUTPUT    // P1_5 IC Pin 18:
#define PCA9535D_PIO_0_P1_BIT4 PCA9535D_PIO_OUTPUT    // P1_4 IC Pin 17:
#define PCA9535D_PIO_0_P1_BIT3 PCA9535D_PIO_OUTPUT    // P1_3 IC Pin 16: Display Driver Input D
#define PCA9535D_PIO_0_P1_BIT2 PCA9535D_PIO_OUTPUT    // P1_2 IC Pin 15:                      C
#define PCA9535D_PIO_0_P1_BIT1 PCA9535D_PIO_OUTPUT    // P1_1 IC Pin 14:                      B
#define PCA9535D_PIO_0_P1_BIT0 PCA9535D_PIO_OUTPUT    // P1_0 IC Pin 13:                      A







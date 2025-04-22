
//******************************************************************
// p_PCF8574_PIO_0_PROJECT_PT4C_XL_EVAL.c
//******************************************************************

#ifdef NO //Doku

#endif //(NO //DOKU)


//********************************j
//* Defines

// I2C Device : PCF8574 PIO auf kleiner Lochraster Platine LORA (with Pull Ups for SCL SDA)
// Alle 3 Adress Jumper gesteckt = alle Adressen auf 0
#define PCF8574_PIO_0_ADR  0x20 //0x20   LSB Bit 0 = WR oder RD ist separat. Hier sind nur die oberen 7 Bits
//das RW Bit ist nicht in der ADR ! Die ADR muss vor dem senden verschoben werden !!
// um das RW Bit unten anzuhängen !



//********************************j
//* Functions




//********************************j
//* Variables


//******************************************************************
// p_OPT3001_LIGHTSENS_0_PROJECT_PT4C_XL_EVAL.c
//******************************************************************

#ifdef NO //Doku

#endif //(NO //DOKU)


//********************************j
//* Defines

// I2C Device : auf Sensor Pack Sensor_OPT3001_Ambient_Light
// Adr Pin ist auf SCL -> Adr: 1000111 laut datenblatt = 47 hex
// im Sensors Booster Pack PDF : OPT3001 I2C Address: 0x47 (7 bit)

// OPT3001
// bei write zuerst Device Adress und dann das Register Adress
// diese Register Adresse wird dann fürs read gespeichert !
// also zuerst einmal an die zu lesende Adresse schreiben !

// OPT3001_LIGHTSENS auf Sensors Booster Pack
#define OPT3001_LIGHTSENS_0_ADR  0x47 //0x47   LSB Bit 0 = WR oder RD ist separat. Hier sind nur die oberen 7 Bits
// MAF hat 0x44 ??? anderes Board EDUMKII_I2C_OPT3001_SLV_ADR
//                                EDUMKII_I2C_TMP006_SLV_ADR  0x40



//********************************j
//* Functions




//********************************j
//* Variables

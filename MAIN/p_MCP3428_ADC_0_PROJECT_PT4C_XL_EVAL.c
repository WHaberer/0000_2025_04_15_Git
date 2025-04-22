
//******************************************************************
// p_MCP3428_ADC_0_PROJECT_PT4C_XL_EVAL.c
//******************************************************************

#ifdef NO //Doku

Device is on :
LORA_GROSS Testboard

CH_1 = NC
CH_2 = NC
CH_3 = Pins (Stiftleiste Rund 5 polig) = Analog Sensor
CH_4 = NC

jeder Kanal muss separat ausgelesen werden
RD :
1 Byte : Send Adressbyte   
2 Byte : Read Data Byte H
3 Byte : Read Data Byte L
4 Byte : Read Configuration Byte (Optional)
n Byte : Read Configuration Byte (Optional)

PART File:
p_DO..PULSE_MCP3428_ADC_0_CH_3_PROJECT_PT4C_XL_EVAL.c
muss NACH diesem File includiert werden !

#endif //(NO //DOKU)


//********************************j
//* Defines


// I2C Device : MCP3428_ADC_0 auf TI Lochraster Platine LORA Gross
// Beide 2 Adress Jumper auf GND (gesteckt) = alle Adressen auf 0
#define MCP3428_ADC_0_ADR  MCP3428_ADC_ADR_IC_ADR_0

// Print Read-Values to UartUser
//#define MCP3428_ADC_0_CD_3_PRINT2UU


#define DOPULSE_MCP3428_ADC_0_CH_3_HERE








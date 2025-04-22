
//******************************************a
// p_MCP3428_ADC_ALL_B.c
//******************************************a

// for all Projects

// "only one _B File!" Here !

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

The Device has 2 Pins für Adresses !!!

internal are 3 Adress Bits A0..A2 

// die Tabelle im Datenblatt ist Komisch !!!! 2 x 000 :-O
// so müsste es passen ! wh25

IC   Address Bits     Logic Status of Address 
Nr.  in ADR           Selection Pins

     A2 A1 A0        Adr0 Pin       Adr1 Pin
    
 0    0  0  0        Float          Float
    
 0    0  0  0        0 (Addr_Low)   0 (Addr_Low)
 1    0  0  1        0 (Addr_Low)   Float
 2    0  1  0        0 (Addr_Low)   1 (Addr_High)
 3    0  1  1        Float          0 (Addr_Low)
     
 4    1  0  0        1 (Addr_High)  0 (Addr_Low)
 5    1  0  1        1 (Addr_High)  Float
 6    1  1  0        1 (Addr_High)  1 (Addr_High)
 7    1  1  1        Float          1 (Addr_High)

aus : MCP3426_und_7_und_8_Datenblatt_3443558.pdf

7 Bit Adresse : 

 A6 A5 A4 A3´
  1  1  0  1     Adresse Grund = 0x68 h
 dazu kommen die oberen 3 Adr. Sel. Bits von den 2 Jumpern 
 
das 8te Bit (unter A0) ist R/_W  

ganzes Byte: wäre: 0xd0
    1  1  0  1  0  0  0  RW
//falsch ! #define MCP3428_ADC_0_ADR  0xd0
Hex wert für die Funktionen 0x68 (in der TI Software)
// Hier sind nur die oberen 7 Bits
// LSB Bit 0 = R/_W ist separat !
 0  1  1  0  1  0  0  0  

Im Prog so verwenden:
        IC Nummer 0        Gesetzt auf Adresse 0
#define MCP3428_ADC_0_ADR  MCP3428_ADC_ADR_IC_ADR_0 //0x68
        IC Nummer 1        Gesetzt auf Adresse 5
#define MCP3428_ADC_1_ADR  MCP3428_ADC_ADR_IC_ADR_5 //0x6d

#endif //(NO //DOKU)

#define MCP3428_ADC_ADR_IC_ADR_0  0x68
#define MCP3428_ADC_ADR_IC_ADR_1  0x69
#define MCP3428_ADC_ADR_IC_ADR_2  0x6a
#define MCP3428_ADC_ADR_IC_ADR_3  0x6b
#define MCP3428_ADC_ADR_IC_ADR_4  0x6c
#define MCP3428_ADC_ADR_IC_ADR_5  0x6d
#define MCP3428_ADC_ADR_IC_ADR_6  0x6e
#define MCP3428_ADC_ADR_IC_ADR_7  0x6f

#ifdef NO //DOKU

Configuration Register

|--------|--------|--------|--------|--------|--------|--------|--------|
| Bit7   | Bit6   | Bit5   | Bit4   | Bit3   | Bit2   | Bit1   |  Bit0  |
| Ready  |   ADC Channel   | One-Sh |  Sample Rate    |  Gain           |
|        |        |        | Contin |        |        |        |        |
| _RDY   | C1     | C2     | _O/C   | S1     | S0     | G1     |  G0    |
|--------|--------|--------|--------|--------|--------|--------|--------|

// ADC Käanäle von 1 bis 4 [1..4] weil die im Datenblatt auch so bezeichnet werden !


Write Ch 1..4 [1..4] Continuous Mode 16 Bit
  1        0        0        1        1        0        0        0
  1        0        1        1        1        0        0        0
  1        1        0        1        1        0        0        0
  1        1        1        1        1        0        0        0

#endif //(NO //DOKU)

#define MCP3428_ADC_CONF_WR_CH1_CON_16BIT_G1  0x98 //0x98 // Config Byte for ADC Channel 1 [1..4] Continuous-Mode 16Bit SPS=15 Gain=1
#define MCP3428_ADC_CONF_WR_CH2_CON_16BIT_G1  0xb8 //0xb8 // Config Byte for ADC Channel 2 [1..4] Continuous-Mode 16Bit SPS=15 Gain=1
#define MCP3428_ADC_CONF_WR_CH3_CON_16BIT_G1  0xd8 //0xd8 // Config Byte for ADC Channel 3 [1..4] Continuous-Mode 16Bit SPS=15 Gain=1
#define MCP3428_ADC_CONF_WR_CH4_CON_16BIT_G1  0xf8 //0xf8 // Config Byte for ADC Channel 4 [1..4] Continuous-Mode 16Bit SPS=15 Gain=1

#ifdef NO //DOKU

Write and start new Conversion Ch 1..4 [1..4] One Shot 16 Bit
  1        0        0        0        1        0        0        0
  1        0        1        0        1        0        0        0
  1        1        0        0        1        0        0        0
  1        1        1        0        1        0        0        0

#endif //(NO //DOKU)

#define MCP3428_ADC_CONF_WR_CH1_ONE_16BIT_G1  0x88 //0x88 // Config Byte for ADC Channel 1 [1..4] One-Shot-Mode   SPS=15 Gain=0
#define MCP3428_ADC_CONF_WR_CH2_ONE_16BIT_G1  0xa8 //0xa8 // Config Byte for ADC Channel 2 [1..4] One-Shot-Mode   SPS=15 Gain=0
#define MCP3428_ADC_CONF_WR_CH3_ONE_16BIT_G1  0xc8 //0xc8 // Config Byte for ADC Channel 3 [1..4] One-Shot-Mode   SPS=15 Gain=0
#define MCP3428_ADC_CONF_WR_CH4_ONE_16BIT_G1  0xe8 //0xe8 // Config Byte for ADC Channel 4 [1..4] One-Shot-Mode   SPS=15 Gain=0

#ifdef NO //DOKU


Bit 7  RDY  : Ready Bit
 This bit is the data ready flag.
 In read mode, this bit indicates if the output register has been updated
 with a latest conversion result.
 In One-Shot Conversion mode, writing this bit to “1” initiates a new
 conversion.

 Reading RDY bit with the read command:
 1 = Output register has not been updated.
 0 = Output register has been updated with the latest conversion result.
 Writing RDY bit with the write command:
 Continuous Conversion mode: No effect 
 One-Shot Conversion mode:
 1 = Initiate a new conversion.
 0 = No effect.

;***

Bit 6-5
 C1-C0: Channel Selection Bits
 00 = Select Channel 1 (Default)
 01 = Select Channel 2
 10 = Select Channel 3 (MCP3428 only, treated as “00” by the MCP3426/MCP3427)
 11 = Select Channel 4 (MCP3428 only, treated as “01” by the MCP3426/MCP3427)

Bit 4
 _O/C: Conversion Mode Bit
 1 = Continuous Conversion Mode (Default). The device performs data conversions continuously.
 The device performs a Continuous Conversion if the /C bit is set to logic “high”. 
 0 = One-Shot Conversion Mode.
 The device performs a single conversion and enters a low power
 standby mode until it receives another write or read command. 

Bit 3-2 
 S1-S0: Sample Rate Selection Bit
 00 = 240 SPS (12 bits) (Default)
 01 =  60 SPS (14 bits)
 10 =  15 SPS (16 bits)
 
Bit 1-0
 G1-G0: PGA Gain Selection Bits
 00 = x1 (Default)
 01 = x2 
 10 = x4 
 11 = x8


#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_MCP3428_ADC_ALL_B.c \n"
//***********************************************d

//********************************j
//* Defines

#define MCP3428_ADC_CONF_WR_CH3_ONE_16BIT_G1  0xc8 //0xc8   // 8 Bit Config Byte


//******************************************a
// afg_MCP3428_ADC_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_MCP3428_ADC_0.c \n"
//***********************************************d

//********************************j
//* 01 Prototypes

//*******************************************************************b
// MCP3428_ADC_0_INIT(); //weh function
#ifdef MCP3428_ADC_0_HERE
//*******************************************************************c
void MCP3428_ADC_0_INIT() {


   // Config device
   ui8_I2C_MAS_0_Array[0] = MCP3428_ADC_CONF_WR_CH3_ONE_16BIT_G1;
   I2C_MAS_0_WRITE(MCP3428_ADC_0_ADR, ui8_I2C_MAS_0_Array, 1);

   //"Reset NVH "New Value Here" Variable"
   b_MCP3428_ADC_0_CH_3_NVH = false;

} //end function

#endif //(MCP3428_ADC_0_HERE)


 
//******************************************a
// afg_OPT3001_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_OPT3001_0.c \n"
//***********************************************d

//********************************j
//* 01 Prototypes


  
   
//*******************************************************************b
// Initialize the OPT3001 sensor IC.
#ifdef NO
//*******************************************************************c
uint32_t I2C_Opt3001_0_Init(tI2C *psI2C, uint8_t ui8_Ori_SlaveAddr) {
   uint8_t ui8_I2C_MAS_0_Array[3] = {0x01, 0xce, 0x10};
   return I2C_MAS_0_WRITE(psI2C, ui8SlaveAddr, ui8_I2C_MAS_0_Array, 3);
}
#endif


//*******************************************************************b
// OPT3001_LIGHTSENS_0_INIT(); //weh function
#ifdef OPT3001_LIGHTSENS_0_HERE
//*******************************************************************c
void OPT3001_LIGHTSENS_0_INIT() {

//    uint8_t ui8_I2C_MAS_0_Array[3] = {0x01, 0xce, 0x10};
//    I2C_MAS_0_WRITE(&t_I2C0, OPT3001_LIGHTSENS_0_ADR, ui8_I2C_MAS_0_Array, 3);
//    uint8_t ui8_I2C_MAS_0_Array[3] = {0x00, 0x00, 0x00};
    
    // The OPT3001 sensor IC accepts the general-call reset command. This is
    // done by writing the value 0x06 to slave address 0x00. For details see
    // the OPT3001 datasheet, section 7.5.1.2 "General-Call Reset Command".
    // OPT3001 Reset
    ui8_I2C_MAS_0_Array[0] = 0x06;
    I2C_MAS_0_WRITE(&t_I2C0, 0x00, ui8_I2C_MAS_0_Array, 1);
    
    // Config device
    ui8_I2C_MAS_0_Array[0] = OPT3001_LIGHTSENS_UADR_CONFIG;
    ui8_I2C_MAS_0_Array[1] = OPT3001_LIGHTSENS_0_CONF_H;
    ui8_I2C_MAS_0_Array[2] = OPT3001_LIGHTSENS_0_CONF_L;
    I2C_MAS_0_WRITE(&t_I2C0, OPT3001_LIGHTSENS_0_ADR, ui8_I2C_MAS_0_Array, 3);

    // Set the pointer register of the OPT3001 IC to the result register (0x00).
    ui8_I2C_MAS_0_Array[0] = OPT3001_LIGHTSENS_UADR_RESULT;
    I2C_MAS_0_WRITE(&t_I2C0, OPT3001_LIGHTSENS_0_ADR, ui8_I2C_MAS_0_Array, 1);

} //end function

#endif //(OPT3001_LIGHTSENS_0_HERE) 

   
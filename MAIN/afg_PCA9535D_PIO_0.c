
//******************************************a
// afg_PCA9535D_PIO_0.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_PCA9535D_PIO_0.c \n"
//***********************************************d

//********************************j
//* 01 Prototypes

//*******************************************************************b
// PCA9535D_PIO_0_INIT(); //weh function
#ifdef PCA9535D_PIO_0_HERE
//*******************************************************************c
void PCA9535D_PIO_0_INIT() {

// Config device Register is Input 0
   ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_INP0;
#ifdef PCA9535D_PIO_0_AT_I2C_MAS_0
   I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 1);
#endif

// Config device Direction Start with Port 0
   ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_CONFP0;   //conf P0
   ui8_I2C_MAS_0_Array[1] = PCA9535D_PIO_0_P0_DIR;       //Dir for P0
   ui8_I2C_MAS_0_Array[2] = PCA9535D_PIO_0_P1_DIR;       //Dir for P1
#ifdef PCA9535D_PIO_0_AT_I2C_MAS_0
   I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 3);
#endif

// Write Default Write Value for Port 0 and Port 1 in Variable
   ui8_PCA9535D_PIO_0_VAL_P0_WR = PCA9535D_PIO_0_VAL_P0_WR_DEF;   //Default Byte for P0
   ui8_PCA9535D_PIO_0_VAL_P1_WR = PCA9535D_PIO_0_VAL_P1_WR_DEF;   //Default Byte for P1

   // Write two Output Bytes to Device
   ui8_I2C_MAS_0_Array[0] = PCA9535D_PIO_COM_OUTP0;       //Output P0
   ui8_I2C_MAS_0_Array[1] = ui8_PCA9535D_PIO_0_VAL_P0_WR;   //Byte for P0
   ui8_I2C_MAS_0_Array[2] = ui8_PCA9535D_PIO_0_VAL_P1_WR;   //Byte for P1
#ifdef PCA9535D_PIO_0_AT_I2C_MAS_0
   I2C_MAS_0_WRITE(PCA9535D_PIO_0_ADR, ui8_I2C_MAS_0_Array, 3);
#endif

   //"Reset NVH "New Value Here" Variable"
   b_PCA9535D_PIO_0_NVH = false;

} //end function

#endif //(PCA9535D_PIO_0_HERE)


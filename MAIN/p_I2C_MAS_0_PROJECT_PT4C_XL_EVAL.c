
//******************************************a
// p_I2C_MAS_0_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU  
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_I2C_MAS_0_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d

// I2C master No. 0 (BoosterPack 1).
// I2C master No. 0 (BoosterPack 1).

//********************************j
//* 05 Defines for I2C Port           Pins, Speed, Timeout, misc

//* 10 I2C Port and Pin Settings

   // Port
#define I2C_MAS_0_SYSCTL_PERIPH_PORT  SYSCTL_PERIPH_GPIOB     // ui32 on GPIO B 

   // Port Base
#define I2C_MAS_0_PORT_BASE           GPIO_PORTB_BASE         // ui32 Port B Baseaddress

   // Pin Number for I2C SCL use                           for :  Set GPIO Pin Type   with:   MAP_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1)
#define I2C_MAS_0_PIN_NO_SCL          GPIO_PIN_2              // ui8  Pin 2 = SCL

   // Pin Number for I2C SDS use
#define I2C_MAS_0_PIN_NO_SDA          GPIO_PIN_3              // ui8  Pin 3 = SDA

   // Set GPIO Pins for I2C SCL
#define I2C_MAS_0_PIN_SCL             GPIO_PB2_I2C0SCL        // ui32 Port B2 I2C0 SCL

   // Set GPIO Pins for I2C SDA
#define I2C_MAS_0_PIN_SDA             GPIO_PB3_I2C0SDA        // ui32 Port B3 I2C0 SDA

//* 11 I2C I2C Settings

   // I2C Number
#define I2C_MAS_0_PERIPH_I2C_NO       SYSCTL_PERIPH_I2C0      // ui32 Systemkonstante: I2C0

   // I2C Base
#define I2C_MAS_0_I2C_BASE            I2C0_BASE               // ui32 I2C 0 Baseaddress

   // I2C Speed
#define I2C_MAS_0_I2C_SPEED_FAST      false                   // b_Fast           false = 100 kbps; true = 400 kbps

   // I2C Interupt Flags   //ui32_IntFlags; 
   //I2C_MASTER_INT_ARB_LOST - Arbitration Lost interrupt
#define I2C_MAS_0_INT_FLAGS           I2C_MASTER_INT_ARB_LOST | I2C_MASTER_INT_STOP | I2C_MASTER_INT_START | I2C_MASTER_INT_NACK | I2C_MASTER_INT_TIMEOUT | I2C_MASTER_INT_DATA



   // I2C Timeout           // ui32_Timeout
#define I2C_MAS_0_TIMEOUT             100                  

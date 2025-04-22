
//******************************************a
// p_DOPULSE_MCP3428_ADC_0_CH_3_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //Doku
 für den ADC Read
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_DOPULSE_MCP3428_ADC_0_CH_3_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d



//********************************j
//* Defines

//#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P03                // 8000 Hz
#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A02               // 200 Hz war on ist aber eigentlich viel zu schnell (Saplingrate !)
//#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A00B02          //  40 Hz
//#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A00B00C01       //  10 Hz
//#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A00B00C00D01    //   2 Hz war ON !
//#define DOPULSE_MCP3428_ADC_0_CH_3_DOTI_BIT_IN_P00A00B00C00D00E01 //    0,1 Hz 

//Define T0INT State_ON
#ifndef T0INTA_P00A02_ON
#define T0INTA_P00A02_ON
#endif



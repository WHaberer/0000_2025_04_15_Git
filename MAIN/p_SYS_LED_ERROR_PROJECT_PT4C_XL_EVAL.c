
//******************************************a
// p_SYS_LED_ERROR_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

Led ist High Active

#endif //(NO //DOKU)


//***********************************************d
//* LOW_ACTIVE
        
//"- if not defined : High Active ! -"
//;high value at Port = current thru speaker

//"- if not defined : High Active ! -"
// #define SYS_LED_ERROR_LOW_ACTIVE


//***********************************************d
//* GPIO definitions. Was: g_sGpioLed4

// SYS_LED_ERROR is PF0
#define SYS_LED_ERROR_GPIO           SYSCTL_PERIPH_GPIOF // port F
#define SYS_LED_ERROR_BASE           GPIO_PORTF_BASE     // port F Base
#define SYS_LED_ERROR_PIN            GPIO_PIN_0          // Pin 0
#define SYS_LED_ERROR_STRENGTH       GPIO_STRENGTH_2MA   // 2 mA
#define SYS_LED_ERROR_PIN_TYPE       GPIO_PIN_TYPE_STD   // standard input or output. GPIO_PIN_TYPE_STD or GPIO_PIN_TYPE_OD
#define SYS_LED_ERROR_PIN_INPUT      false               // Input: false = output, true = input
#define SYS_LED_ERROR_PIN_INT        0                   // INT Type

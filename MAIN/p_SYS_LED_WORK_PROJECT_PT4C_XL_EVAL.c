
//******************************************a
// p_SYS_LED_WORK_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //Doku

Led ist High Active

#endif //(NO //DOKU)


//***********************************************d
//* LOW_ACTIVE
        
//"- if not defined : High Active ! -"
//;high value at Port = current thru speaker

//"- if not defined : High Active ! -"
// #define SYS_LED_WORK_LOW_ACTIVE


//***********************************************d
//* GPIO definitions. Was: g_sGpioLed1

//* SYS_LED_WORK is PN1
#define SYS_LED_WORK_GPIO           SYSCTL_PERIPH_GPION // port N
#define SYS_LED_WORK_BASE           GPIO_PORTN_BASE     // port N Base
#define SYS_LED_WORK_PIN            GPIO_PIN_1          // Pin 1
#define SYS_LED_WORK_STRENGTH       GPIO_STRENGTH_2MA   // 2 mA
#define SYS_LED_WORK_PIN_TYPE       GPIO_PIN_TYPE_STD   // standard input or output. GPIO_PIN_TYPE_STD or GPIO_PIN_TYPE_OD
#define SYS_LED_WORK_PIN_INPUT      false               // Input: false = output, true = input
#define SYS_LED_WORK_PIN_INT        0                   // INT Type

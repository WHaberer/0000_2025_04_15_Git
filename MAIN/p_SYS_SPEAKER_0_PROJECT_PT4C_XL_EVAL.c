
//******************************************a
// p_SYS_SPEAKER_0_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

 jetzt wegen Opto Koppler und High Side Driver = Low Active

#endif //(NO //DOKU)

//***********************************************d
//* LOW_ACTIVE
        
//"- if not defined : High Active ! -"
//;high value at Port = current thru speaker

//"- if not defined : High Active ! -"
#define SYS_SPEAKER_0_LOW_ACTIVE


//***********************************************d
//* GPIO definitions. Was: g_sGpioLed2

// SYS_SPEAKER_0 is PN0
#define SYS_SPEAKER_0_GPIO           SYSCTL_PERIPH_GPION // port N
#define SYS_SPEAKER_0_BASE           GPIO_PORTN_BASE     // port N Base
#define SYS_SPEAKER_0_PIN            GPIO_PIN_0          // Pin 0
#define SYS_SPEAKER_0_STRENGTH       GPIO_STRENGTH_2MA   // 2 mA
#define SYS_SPEAKER_0_PIN_TYPE       GPIO_PIN_TYPE_STD   // standard input or output. GPIO_PIN_TYPE_STD or GPIO_PIN_TYPE_OD
#define SYS_SPEAKER_0_PIN_INPUT      false               // Input: false = output, true = input
#define SYS_SPEAKER_0_PIN_INT        0                   // INT Type

//***********************************************d
//* SPEAKER_0_BEEP_AT_START
#define SPEAKER_0_BEEP_AT_START

//********************************j
//* Functions

// speaker off Timer wird auch ausgeschaltet
#define F_SPEAKER_0_OFF_AND_RUN_SPEAKER_0_OFF

// speaker line off (on gibt es nicht !)
#define F_SYS_SPEAKER_0_OFF 

// speaker inc function in TxINT
// speaker with T0 an Timer
#define F_SPEAKER_0_W_T0_AND_TIM

// only with TIMER_SPEAKER_1_HERE
#define F_SPEAKER_0_TONHIGH
#define F_SPEAKER_0_TONLOW

// für T0INT_TON_TEST Noten in T0INT
#define F_SPEAKER_0_TON_DATA


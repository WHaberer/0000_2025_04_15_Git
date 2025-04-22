
//******************************************a
// a_top_def.c
//******************************************a

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#undef KLAPPE0

#pragma weh_all3 "File:      a_top_def.c \n"
#pragma weh_all3 "Project:   "
#undef KLAPPE1

//***********************************************d

//* 0000 das ist jetzt aktiv !!!

//* PROJECT_PT4C_XL_EVAL
#define PROJECT_PT4C_XL_EVAL
//    Project Texas Instruments MCU 4C XL Eval Board
//    First Test Software for L0MDT_CM_Command_Module
#undef KLAPPE0
//      TI Eval Board mit LORA_GROSS als Testboard und Demonstrator
//      (einen Offiziellen Demonstrator gibt es auch !!!)
//*******o
#ifdef PROJECT_PT4C_XL_EVAL
#pragma weh_all3 "PROJECT_PT4C_XL_EVAL \n"
#pragma weh_all3 "// First Test Software for L0MDT_CM_Command_Module \n"
#endif //(PROJECT_PT4C_XL_EVAL)
#undef KLAPPE1


//* TI_EV_L0MDT_SOM_TEST
#define TI_EV_L0MDT_SOM_TEST
//    Test L0MDT SOM to from CM MCU Communication
//    First Test Software for L0MDT_CM_Command_Module
#undef KLAPPE0
//      TI Eval Board mit LORA_GROSS als Testboard und Demonstrator
//      (einen Offiziellen Demonstrator gibt es auch !!!)
//*******o
#ifdef TI_EV_L0MDT_SOM_TEST
#pragma weh_all3 "TI_EV_L0MDT_SOM_TEST \n"
#pragma weh_all3 "// Test L0MDT SOM to from CM MCU Communication \n"
#endif //(TI_EV_L0MDT_SOM_TEST)
#undef KLAPPE1


//* TI_EV_BOOT_LOADER
#define TI_EV_BOOT_LOADER
//    Boot Loader for Project Texas Instruments MCU 4C XL Eval Board
//    First Test Software for L0MDT_CM_Command_Module
#undef KLAPPE0
//      TI Eval Board mit LORA_GROSS als Testboard und Demonstrator
//      (einen Offiziellen Demonstrator gibt es auch !!!)
//*******o
#ifdef TI_EV_BOOT_LOADER
#pragma weh_all3 "TI_EV_BOOT_LOADER \n"
#pragma weh_all3 "// Boot Loader for Project Texas Instruments MCU 4C XL Eval Board \n"
#endif //(TI_EV_BOOT_LOADER)
#undef KLAPPE1


//* 0001 das war der letzte aktive !!!

//* TI_EV_00_MINI
//#define TI_EV_00_MINI
//    TI Controller PT4C. Mit dem Eval Board. Ohne Booster Packs. Minimal System
//    Blinken der SYS_LED_WORK
#undef KLAPPE0
//      TI Eval Board ohne LORA_GROSS
//      TI Eval Board Nur Hello World LED Blinken
//      Ohne T0INT Interrupt
//      Ohne UART
//*******o
#ifdef TI_EV_00_MINI
#pragma weh_all3 "TI_EV_00_MINI \n"
#pragma weh_all3 "// TI Controller PT4C. Mit dem Eval Board. Ohne Booster Packs. Minimal System \n"
#endif //(TI_EV_00_MINI)
#undef KLAPPE1


//* TI_EV_00_TEST
//#define TI_EV_00_TEST
//    TI Controller PT4C. Mit dem Eval Board. Noch ohne Booster Packs. Test System
#undef KLAPPE0
//      TI Eval Board ohne LORA_GROSS
//      TI Eval Board Hello World LED Blinken
//      Mit T0INT Interrupt
//      Mit UART
//*******o
#ifdef TI_EV_00_TEST
#pragma weh_all3 "TI_EV_00_TEST \n"
#pragma weh_all3 "// TI Controller PT4C. Mit dem Eval Board. Noch ohne Booster Packs. Test System \n"
#endif //(TI_EV_00_TEST)
#undef KLAPPE1



//***********************************************d

// 00 Project Echo End
#undef KLAPPE0
//#pragma weh_all3 "//\n"
#pragma weh_all3 "//******************************************a\n"
#undef KLAPPE1




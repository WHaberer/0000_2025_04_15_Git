
//******************************************a
// echo_p_T0INT.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

// for all Projects

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      "
#pragma weh_all3 "echo_p_T0INT.c \n"

//***********************************************d

//********************************j
// Echoes

#pragma weh_all3 "#undef KLAPPE0 \n"
#pragma weh_all3 "\n"

// 01 Schalte die vorherigen ON States ON
#ifdef NO  //brauch ich nicht  wird später abhänging von den Funktionen gemacht

#pragma weh_all3 "// 01 Schalte die vorherigen ON States ON \n"
#pragma weh_all3 "\n"


//* 01 Schalte die vorherigen ON States ON

#ifdef T0INTA_CE_HERE
#ifdef T0INTA_CE_ON
#pragma weh_all3 "       CE is HERE and ON \n"
//***
#ifdef T0INTA_CD_HERE
#ifndef T0INTA_CD_ON
#pragma weh_all3 "switch CD ON \n"
#define T0INTA_CD_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CE ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CE HERE\n"
#endif

#ifdef T0INTA_CD_HERE
#ifdef T0INTA_CD_ON
#pragma weh_all3 "       CD is HERE and ON \n"
//***
#ifdef T0INTA_CC_HERE
#ifndef T0INTA_CC_ON
#pragma weh_all3 "switch CC ON \n"
#define T0INTA_CC_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CD ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CD HERE\n"
#endif

#ifdef T0INTA_CC_HERE
#ifdef T0INTA_CC_ON
#pragma weh_all3 "       CC is HERE and ON \n"
//***
#ifdef T0INTA_CB_HERE
#ifndef T0INTA_CB_ON
#pragma weh_all3 "switch CB ON \n"
#define T0INTA_CB_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CC ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CC HERE\n"
#endif

#ifdef T0INTA_CB_HERE
#ifdef T0INTA_CB_ON
#pragma weh_all3 "       CB is HERE and ON \n"
//***
#ifdef T0INTA_CA_HERE
#ifndef T0INTA_CA_ON
#pragma weh_all3 "switch CA ON \n"
#define T0INTA_CA_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CB ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CB HERE\n"
#endif

#ifdef T0INTA_CA_HERE
#ifdef T0INTA_CA_ON
#pragma weh_all3 "       CA is HERE and ON \n"
//***
#ifdef T0INTA_CP_HERE
#ifndef T0INTA_CP_ON
#pragma weh_all3 "switch CP ON \n"
#define T0INTA_CP_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CA ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CA HERE\n"
#endif

#ifdef T0INTA_CP_HERE
#ifdef T0INTA_CP_ON
#pragma weh_all3 "       CP is HERE and ON \n"
//***
#ifdef T0INTA_CG_HERE
#ifndef T0INTA_CG_ON
#pragma weh_all3 "switch CG ON \n"
#define T0INTA_CG_ON
#endif
#endif
//***
#else
#pragma weh_all3 "    NO CP ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CP HERE\n"
#endif

#ifdef T0INTA_CG_HERE
#ifdef T0INTA_CG_ON
#pragma weh_all3 "       CG is HERE and ON \n"
#else
#pragma weh_all3 "    NO CG ON = OFF\n"
#endif
#else
#pragma weh_all3 "    NO CG HERE\n"
#endif


#endif //(NO  //brauch ich nicht  wird später abhänging von den Funktionen gemacht)

//* 02 Counter F SOLL

// CG F Soll
#ifdef T0INTA_CG_HERE
#pragma weh_all3 "T0INTA_G_F_Z_SOLL    "  // Z: in centy Hz
#pragma weh_all3 T0INTA_G_F_Z_SOLL
#pragma weh_all3 " Zenti Hz  cHz \n"
#else
#pragma weh_all3 "T0INTA_CG            not Here \n"
#endif

#ifdef T0INTA_CG_HERE
#pragma weh_all3 "T0INTA_G_F_SOLL      "  // for calculations in Hz  = 10,416666 us
#pragma weh_all3 T0INTA_G_F_SOLL          // for calculations in Hz  = 10,416666 us
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CG            not Here \n"
#endif

#ifdef T0INTA_CP_HERE
#pragma weh_all3 "T0INTA_P_F_Z_SOLL    "  // =  8000 Hz
#pragma weh_all3 T0INTA_P_F_Z_SOLL        // =  8000 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CP            not Here \n"
#endif

#ifdef T0INTA_CA_HERE
#pragma weh_all3 "T0INTA_A_F_Z_SOLL    "  // =   200 Hz
#pragma weh_all3 T0INTA_A_F_Z_SOLL        // =   200 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CA            not Here \n"
#endif

#ifdef T0INTA_CB_HERE
#pragma weh_all3 "T0INTA_B_F_Z_SOLL    "  // =    40 Hz
#pragma weh_all3 T0INTA_B_F_Z_SOLL        // =    40 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CB            not Here \n"
#endif

#ifdef T0INTA_CC_HERE
#pragma weh_all3 "T0INTA_C_F_Z_SOLL    "  // =    10 Hz
#pragma weh_all3 T0INTA_C_F_Z_SOLL        // =    10 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CC            not Here \n"
#endif

#ifdef T0INTA_CD_HERE
#pragma weh_all3 "T0INTA_D_F_Z_SOLL    "  // =     2 Hz
#pragma weh_all3 T0INTA_D_F_Z_SOLL        // =     2 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CD            not Here \n"
#endif

#ifdef T0INTA_CE_HERE
#pragma weh_all3 "T0INTA_E_F_Z_SOLL    "  // =     0,1 Hz (each 10 seconds)
#pragma weh_all3 T0INTA_E_F_Z_SOLL        // =     0,1 Hz (each 10 seconds)
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CE            not Here \n"
#endif


#pragma weh_all3 "\n"


//* 03 Counter F IS

#ifdef T0INTA_CG_HERE
#pragma weh_all3 "T0INTA_G_F_Z_IS      "  // in centy Hz
#pragma weh_all3 T0INTA_G_F_Z_IS          // in centy Hz
#pragma weh_all3 " Zenti Hz  cHz \n"
#else
#pragma weh_all3 "T0INTA_CG            not Here \n"
#endif

#ifdef T0INTA_CG_HERE
#pragma weh_all3 "T0INTA_G_F_IS        "  // for calculations in Hz  = 10,416666 us
#pragma weh_all3 T0INTA_G_F_IS            // for calculations in Hz  = 10,416666 us
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CG            not Here \n"
#endif

#ifdef T0INTA_CP_HERE
#pragma weh_all3 "T0INTA_P_F_Z_IS      "  // =  8000 Hz
#pragma weh_all3 T0INTA_P_F_Z_IS          // =  8000 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CP            not Here \n"
#endif

// CA F Is and P (ms)
#ifdef T0INTA_CA_HERE
#pragma weh_all3 "T0INTA_A_F_Z_IS      "  // =   200 Hz
#pragma weh_all3 T0INTA_A_F_Z_IS          // =   200 Hz
#pragma weh_all3 " Hz \n"

#pragma weh_all3 "T0INTA_A_P_MS_IS     "  // =   200 Hz = 5ms
#pragma weh_all3 T0INTA_A_P_MS_IS
#pragma weh_all3 " ms \n"

#else
#pragma weh_all3 "T0INTA_CA            not Here \n"
#endif

// CB F Is 
#ifdef T0INTA_CB_HERE
#pragma weh_all3 "T0INTA_B_F_Z_IS      "  // =    40 Hz
#pragma weh_all3 T0INTA_B_F_Z_IS          // =    40 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CB            not Here \n"
#endif

// CC F Is 
#ifdef T0INTA_CC_HERE
#pragma weh_all3 "T0INTA_C_F_Z_IS      "  // =    10 Hz
#pragma weh_all3 T0INTA_C_F_Z_IS          // =    10 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CC            not Here \n"
#endif

// CD F Is 
#ifdef T0INTA_CD_HERE
#pragma weh_all3 "T0INTA_D_F_Z_IS      "  // =     2 Hz
#pragma weh_all3 T0INTA_D_F_Z_IS          // =     2 Hz
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CD            not Here \n"
#endif

// CE F Is 
#ifdef T0INTA_CE_HERE
#pragma weh_all3 "T0INTA_E_F_Z_IS      "  // =     0,1 Hz (each 10 seconds)
#pragma weh_all3 T0INTA_E_F_Z_IS          // =     0,1 Hz (each 10 seconds)
#pragma weh_all3 " Hz \n"
#else
#pragma weh_all3 "T0INTA_CE            not Here \n"
#endif


#pragma weh_all3 "\n"


//* 04 Divisor for T0INT Steps

#pragma weh_all3 "Divisor for T0INT Steps \n"
#pragma weh_all3 "\n"

#ifdef T0INTA_CP_HERE
#pragma weh_all3 "T0INTA_D_VAL_G_TO_P         "    // T0INT Stufe G to P
#pragma weh_all3 T0INTA_D_VAL_G_TO_P
#pragma weh_all3 "\n"
#endif

#ifdef T0INTA_CA_HERE
#pragma weh_all3 "T0INTA_D_VAL_P_TO_A         "    //
#pragma weh_all3 T0INTA_D_VAL_P_TO_A
#pragma weh_all3 "\n"
#endif

#ifdef T0INTA_CB_HERE
#pragma weh_all3 "T0INTA_D_VAL_A_TO_B         "    //
#pragma weh_all3 T0INTA_D_VAL_A_TO_B
#pragma weh_all3 "\n"
#endif

#ifdef T0INTA_CC_HERE
#pragma weh_all3 "T0INTA_D_VAL_B_TO_C         "    //
#pragma weh_all3 T0INTA_D_VAL_B_TO_C
#pragma weh_all3 "\n"
#endif

#ifdef T0INTA_CD_HERE
#pragma weh_all3 "T0INTA_D_VAL_C_TO_D         "    //
#pragma weh_all3 T0INTA_D_VAL_C_TO_D
#pragma weh_all3 "\n"
#endif

#ifdef T0INTA_CE_HERE
#pragma weh_all3 "T0INTA_D_VAL_D_TO_E         "    //
#pragma weh_all3 T0INTA_D_VAL_D_TO_E
#pragma weh_all3 "\n"
#endif

#pragma weh_all3 "\n"

#pragma weh_all3 "#undef KLAPPE1 \n"
#pragma weh_all3 "\n"


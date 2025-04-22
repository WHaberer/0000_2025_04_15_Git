
//******************************************a
// echo_afg_T0INT.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

// for all Projects

// das wird nur einmal ausgeführt ! (wegen defines) !

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      "
#pragma weh_all3 "echo_afg_T0INT.c \n"

//***********************************************d

//********************************j
// Echoes

#pragma weh_all3 "#undef KLAPPE0 \n"
#pragma weh_all3 "\n"

//***********************************************d

//* ZZ Echo Include of the T0INT States

#pragma weh_all3 "\n"
#pragma weh_all3 "//******************************************a\n"
#pragma weh_all3 "T0INT States Here and Include afg Files : \n"
#pragma weh_all3 "\n"


//*  01 Define ON 
#ifdef T0INTA_P00A00B00C00D00E00_ON      // brauch ich das ????
#define T0INTA_CE_ON
#pragma weh_all3 "T0INTA_CE_ON !!\n"
#endif

#ifdef T0INTA_CP00A00B00C00D_ON          // noch falsch !!!
#define T0INTA_CD_ON
#pragma weh_all3 "T0INTA_CD_ON !!\n"
#endif

#ifdef T0INTA_CP00A00B00C_ON
#define T0INTA_CC_ON
#pragma weh_all3 "T0INTA_CC_ON !!\n"
#endif

#ifdef T0INTA_CP00A00B_ON
#define T0INTA_CB_ON
#pragma weh_all3 "T0INTA_CB_ON !!\n"
#endif

#ifdef T0INTA_CP00A_ON
#define T0INTA_CA_ON
#pragma weh_all3 "T0INTA_CA_ON !!\n"
#endif

#ifdef T0INTA_CP_ON
//#define T0INTA_CP_ON
#pragma weh_all3 "T0INTA_CP_ON !!\n"
#endif

#ifdef T0INTA_CG_ON
#pragma weh_all3 "T0INTA_CG_ON \n"
#endif


#pragma weh_all3 "\n"


//*  02 Define HERE

// brauch ich nicht      
//#ifdef T0INTA_CP00A00B00C00D00E_HERE
//#define T0INTA_CE_HERE
//#endif

//#pragma weh_all3 "\n"


//*  03 Include INC_T0_ECHO_xx and Error Output

#include "../INC/INC_T0_ECHO_P.c"
#include "../INC/INC_T0_ECHO_P00A.c"
#include "../INC/INC_T0_ECHO_P00A00B.c"
#include "../INC/INC_T0_ECHO_P00A00B00C.c"
#include "../INC/INC_T0_ECHO_P00A00B00C00D.c"
#include "../INC/INC_T0_ECHO_P00A00B00C00D00E.c"


#pragma weh_all3 "\n"


//* 04 Error Outputs
// der T0INTA_xx_ERROR kommt aus INC_T0_ECHO_xx.c

#ifdef T0INTA_CP00A00B00C00D00E_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP00A00B00C00D00E_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif

#ifdef T0INTA_CP00A00B00C00D_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP00A00B00C00D_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif

#ifdef T0INTA_CP00A00B00C_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP00A00B00C_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif

#ifdef T0INTA_CP00A00B_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP00A00B_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif

#ifdef T0INTA_CP00A_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP00A_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif

#ifdef T0INTA_CP_ERROR
#pragma weh_all3 "ERROR  WEH_ERROR      T0INTA_CP_ERROR !!\n"
#ifndef WEH_ERROR
#define WEH_ERROR
#endif
#endif


#pragma weh_all3 "\n"


//* Include GRUND with 96 kHz
#ifdef T0INTA_CG_ON
#ifdef T0INTA_CG_HERE
#pragma weh_all3 "   afg_T0INT_CG.c              T0INTA_CG_HERE and ON \n"
#include "../MAIN/afg_T0INT_CG.c"
#else
#pragma weh_all3 "NO afg_T0INT_CG.c           NO T0INTA_CG_HERE \n"
#endif
#else
#pragma weh_all3 "NO afg_T0INT_CG.c           NO T0INTA_CG_ON \n"
#endif


#pragma weh_all3 "\n"


// Include the next (if Counter is Zero) T0INT Counter Functions
// in INC_T0_STATES_P_xxx werden die afg Files für die einzelnen T0INT Stufen includiert
// 
#ifdef T0INTA_CE_HERE
#pragma weh_all3 "   INC_T0_STATES_P00A00B00C00D00E.c \n"
#include "../INC/INC_T0_STATES_P00A00B00C00D00E.c"
#else
#pragma weh_all3 "NO INC_T0_STATES_P00A00B00C00D00E.c \n"
#endif

#ifdef T0INTA_CD_HERE
#pragma weh_all3 "   INC_T0_STATES_P00A00B00C00D.c \n"
#include "../INC/INC_T0_STATES_P00A00B00C00D.c"
#else
#pragma weh_all3 "NO INC_T0_STATES_P00A00B00C00D.c \n"
#endif

#ifdef T0INTA_CC_HERE
#pragma weh_all3 "   INC_T0_STATES_P00A00B00C.c \n"
#include "../INC/INC_T0_STATES_P00A00B00C.c"
#else                                        
#pragma weh_all3 "NO INC_T0_STATES_P00A00B00C.c \n"
#endif

#ifdef T0INTA_CB_HERE
#pragma weh_all3 "   INC_T0_STATES_P00A00B.c \n"
#include "../INC/INC_T0_STATES_P00A00B.c"
#else
#pragma weh_all3 "NO INC_T0_STATES_P00A00B.c \n"
#endif

#ifdef T0INTA_CA_HERE
#pragma weh_all3 "   INC_T0_STATES_P00A.c \n"
#include "../INC/INC_T0_STATES_P00A.c"
#else
#pragma weh_all3 "NO INC_T0_STATES_P00A.c \n"
#endif

#ifdef T0INTA_CP_HERE
#pragma weh_all3 "   INC_T0_STATES_P.c \n"
#include "../INC/INC_T0_STATES_P.c"
#else
#pragma weh_all3 "NO INC_T0_STATES_P.c \n"
#endif

#ifdef T0INTA_CN_HERE
#include "../INC/INC_T0_STATES_N.c"
#endif


#pragma weh_all3 "\n"


// Include the afg CHECK_Files
// in afg CHECK werden Counter Stände überproft und die zugehörigen afg Files aufgerufen
#ifdef T0INTA_CE_HERE
#include "../INC/afg_CHECK_T0INT_P00A00B00C00D00E.c"
#endif

#ifdef T0INTA_CD_HERE
#include "../INC/afg_CHECK_T0INT_P00A00B00C00D.c"
#endif

#ifdef T0INTA_CC_HERE
#include "../INC/afg_CHECK_T0INT_P00A00B00C.c"
#endif

#ifdef T0INTA_CB_HERE
#include "../INC/afg_CHECK_T0INT_P00A00B.c"
#endif

#ifdef T0INTA_CA_HERE
#include "../INC/afg_CHECK_T0INT_P00A.c"
#endif

#ifdef T0INTA_CP_HERE
#include "../INC/afg_CHECK_T0INT_P.c"
#endif

#ifdef T0INTA_CN_HERE
#endif

#pragma weh_all3 "\n"

#pragma weh_all3 "#undef KLAPPE1 \n"
#pragma weh_all3 "\n"


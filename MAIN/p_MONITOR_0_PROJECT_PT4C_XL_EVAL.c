
//******************************************a
// p_MONITOR_0_PROJECT_PT4C_XL_EVAL.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_MONITOR_0_PROJECT_PT4C_XL_EVAL.c \n"
//***********************************************d


//********************************j
//* Defines

// Monitor ist nur die funktion der einzelnen protokolle
// ist LEVEL 2 siehe MDT Doku
//* MONITOR_0 is at UART_USER
#define MONITOR_0_AT_UART_USER

//* DEF NOH
// protokolle werden ohne header erwartet und gesendet
#define MONITOR_0_PROTO_NOH_HERE

//* DEF FULLH
// protokolle werden mit FULL header erwartet
//#define MONITOR_0_PROTO_FULLH_HERE


#ifdef MONITOR_0_PROTO_FULLH_HERE

#define MONITOR_0_PROTO_FULLH_REC


#endif //(MONITOR_0_PROTO_FULLH_HERE)



//***


//* DEF PROTO SINGLE 1BYTE 2BYTE 3BYTE
#ifdef MONITOR_0_PROTO_NOH_HERE
#define MONITOR_0_PROTO_NOH_REC        // protokolle werden ohne Header (erwartet) (was:PROTONOH)
                                       // dann MONITOR_0_P_NOH_PROTO_SINGLE, ProtoXbyte moeglich !

#define MONITOR_0_PROTO_NOH_SEND       // protokolle werden ohne Header gesendet (send)

#define MONITOR_0_P_NOH_PROTO_SINGLE   // protokoll mit single token 'A' 'b' ... erlauben
#define MONITOR_0_P_NOH_PROTO_1BYTE    // protokoll mit com + BYTE0 erlauben
//#define MONITOR_0_P_NOH_PROTO_2BYTE  // protokoll mit com + BYTE0 + BYTE1 erlauben
//#define MONITOR_0_P_NOH_PROTO_3BYTE  // protokoll mit com + BYTE0 + BYTE1 + BYTE2 erlauben

#endif //(MONITOR_0_PROTO_NOH_HERE)




//* DEF MONITOR_0_P_NOH_PROTO_SINGLE Tokens

#ifdef MONITOR_0_P_NOH_PROTO_SINGLE

// Monitor 0  Function 0 Bytes  xxx DIRECT
// Direct: not "steered" by "b_MONITOR_0_PROTO_xxx_DA"
// BBit  : steered by bit in Main Loop

//* Allow: TEST_0
//#define MONITOR_0_F0B_TEST_0_DIRECT    Sound Tests gehen nicht wenn "While 1" in MAIN !?!?
#define MONITOR_0_F0B_TEST_0_BBIT
#define MONITOR_0_F0B_TEST_0_TOK                 'q'  // Test Output 0
#define MONITOR_0_F0B_TEST_0_BYTES                0

//* Allow: TEST_1
//#define MONITOR_0_F0B_TEST_1_DIRECT
#define MONITOR_0_F0B_TEST_1_BBIT
#define MONITOR_0_F0B_TEST_1_TOK                 'w'  // Test Output 1
#define MONITOR_0_F0B_TEST_1_BYTES                0

//* Allow: TEST_2 
#define MONITOR_0_F0B_TEST_2_DIRECT
//#define MONITOR_0_F0B_TEST_2_BBIT
#define MONITOR_0_F0B_TEST_2_TOK                 'a'  // Test 2
#define MONITOR_0_F0B_TEST_2_BYTES                0

//* Allow: LOOP_WHILE1
#define MONITOR_0_F0B_LOOP_WHILE1_DIRECT
//#define MONITOR_0_F0B_LOOP_WHILE1_BBIT
#define MONITOR_0_F0B_LOOP_WHILE1_TOK            'e'  // Kill While Loop ON. Main is blocked INTs running (Serial Timer0)
#define MONITOR_0_F0B_LOOP_WHILE1_BYTES           0

//* Allow: NO_LOOP_WHILE1
#define MONITOR_0_F0B_NO_LOOP_WHILE1_DIRECT
//#define MONITOR_0_F0B_NO_LOOP_WHILE1_BBIT
#define MONITOR_0_F0B_NO_LOOP_WHILE1_TOK         'm'  // Kill While Loop OFF
#define MONITOR_0_F0B_NO_LOOP_WHILE1_BYTES        0

//* Allow: SEND_INC
#define MONITOR_0_F0B_SEND_INC_DIRECT
//#define MONITOR_0_F0B_SEND_INC_BBIT
#define MONITOR_0_F0B_SEND_INC_TOK               ' '  // INC Byte Output
#define MONITOR_0_F0B_SEND_INC_BYTES              0

//* Allow: AUTO_SEND
//#define MONITOR_0_F0B_AUTO_SEND_DIRECT
#define MONITOR_0_F0B_AUTO_SEND_BBIT
#define MONITOR_0_F0B_AUTO_SEND_TOK              'z'  // Toggle Automatic Output
#define MONITOR_0_F0B_AUTO_SEND_BYTES            0

#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)


// Proto 1 Byte

//* Allow: TEST_1B_0
#define MONITOR_0_F1B_TEST_0_DIRECT
//#define MONITOR_0_F1B_TEST_1B_0_BBIT
#define MONITOR_0_F1B_TEST_0_TOK                 'y'  // Test Output 0
#define MONITOR_0_F1B_TEST_0_BYTES                1



//********************************j
//* Functions

// defines for all MONITOR
//#DEFINE PRINTDAT              ;sind die ganzen Print Befehle  - koennte durch ifdef MONI OR ersegtzt werden !!! weh15
//#DEFINE F_PNEWLINE

// MONITOR_0 at UART_USER Receive Token
//"- should always all be defined ! -"
#define F_UART_USER_RECEIVE_DAT
#define F_START_TIMER_TIMEOUT_MONITOR_0

//********************************j
//* Tests (do not change)

// wenn defined both
//#ifdef F_MO..NITOR_0_REC_PROTO
//#ifdef MO..NITOR_0_REC_BY_MAINPOLL
//#pragma weh_all3 "ERROR  WEH_ERROR   F_MO..NITOR_0_BU..ILD_PR..OTO_SET_BITS   UA..RT_US..ER_REC_BY_MAINPOLL  !!\n"
//666 //The number of an Error
//#ifndef WEH_ERROR
//#define WEH_ERROR
//#endif
//#endif
//#endif





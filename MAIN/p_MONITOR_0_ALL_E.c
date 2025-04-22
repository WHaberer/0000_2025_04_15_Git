
//******************************************a
// p_MONITOR_0_ALL_E.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU

#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_MONITOR_0_ALL_E.c \n"
//***********************************************d

//********************************j
//* Functions

// if No   Header
#ifdef MONITOR_0_PROTO_NOH_REC

// interpretiert gleich nachdem daten Empfangen wurden
#define F_MONITOR_0_INTERPRET_PROTO_DIRECT
#define F_MONITOR_0_PROTO_DONE

// interpretiert in Main die No Header Protokolle
#define F_MONITOR_0_INTERPRET_PROTO_IN_MAIN

#endif //(MONITOR_0_PROTO_NOH_REC)

// if Full Header
//#ifdef MONITOR_0_PROTO_FULLH_REC

// baut die Protokolle mit Header zusammen
#define F_MONITOR_0_BUILD_PROTO_SET_BITS

//#endif //(MONITOR_0_PROTO_FULLH_REC)



//********************************j
//* Variables

// für Text Ausgaben
char *pac_UartText;

// pointer auf Funktion
void (*p_To_Funct) (void);  


//* Variable PROTO_PLACE
// auch bei NOH ! Auch bei Proto_SIngle
//#ifdef MONITOR_0_PROTO_FULLH_REC
uint8_t ui8_MONITOR_0_PROTO_PLACE;
//#endif //(MONITOR_0_PROTO_FULLH_REC)


// bytes protokoll SOLL
uint8_t ui8_Monitor_0_P_SOLL_Bytes;


#ifdef MONITOR_0_P_NOH_PROTO_SINGLE   
// Bits for "Is HERE"
bool b_Monitor_0_PROTO_SINGLE_HERE;
// Received Values
uint8_t ui8_Monitor_0_PROTOTOKEN;
#endif //(MONITOR_0_P_NOH_PROTO_SINGLE)

#ifdef MONITOR_0_P_NOH_PROTO_1BYTE
// Bits for "Is HERE"
bool b_Monitor_0_PROTO_1BYTE_HERE;
// Received Values
uint8_t ui8_Monitor_0_BYTE0;
#endif //(MONITOR_0_P_NOH_PROTO_1BYTE)

#ifdef MONITOR_0_P_NOH_PROTO_2BYTE
// Bits for "Is HERE"
bool b_Monitor_0_PROTO_2BYTE_HERE;
// Received Values
uint8_t ui8_Monitor_0_BYTE1;
#endif //(MONITOR_0_P_NOH_PROTO_2BYTE)




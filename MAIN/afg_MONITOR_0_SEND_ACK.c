
//******************************************a
// afg_MONITOR_0_SEND_ACK.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      afg_UART_USER_SEND_ACK.c \n"
//***********************************************d

//*******************************************************************b
//* MONITOR_0_SEND_ACK (); //weh function
#ifdef F_MONITOR_0_SEND_ACK
//*******************************************************************c
void MONITOR_0_SEND_ACK() {


#ifdef MONITOR_0_PROTO_NOH_HERE
         mov A,#ACK_ALTES_TOKEN
         lcall PDAT
#endif //(MONITOR_0_PROTO_NOH_HERE)


#ifdef MONITOR_0_PROTO_FULLH_HERE
//   SEND_ACK ;if TBUF_EMPTY - send ACK Protocol in BIN (Beginnt mit +)

         //       protonum   unitnumber  protodest    header_end  
         // + q   S_PROTONUM  from ROM   S_PROTODEST   26         

; teste ob buffer leer ist
         lcall TBUF_EMPTY         ;set C if the serial transmit buffer is empty
         jnc _END                 ;jump if buffer is not empty
         ;HERE: buffer is empty

         ;hole das Ack Token
         mov A,#PROTO_ACK_TOK
         
         ;sendet den Head mit dem Zeichen in A an den Sender des letzten Protokolls
         lcall SEND_PROTO_HEAD

#ifdef V_SSEND_SUM                ;wenn definiert sende als 15 Zeichen die Pruefsumme
 ;HERE: SSEND_SUM enthaelt die summe der obigen 14 gesendeten Values
         mov A,SSEND_SUM          ;Pruefsumme
         xrl A,#0ffh               ;invertieren
         add A,#01h               ;1 dazuaddieren
         ;und als Pruefsumme ausgeben
         lcall PDAT
         ;werden dann alle 15 values aufsummiert dann ist das ergebnis x00  (= Null) wenn alles OK ist.
#endif ;(V_SSEND_PSUM)

_END:    ret

#endif //(MONITOR_0_PROTO_FULLH_HERE)


} //end function
#endif //(F_MONITOR_0_SEND_ACK)

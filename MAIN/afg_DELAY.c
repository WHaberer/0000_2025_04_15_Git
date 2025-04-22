
//******************************************a
// afg_DELAY.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)


//***********************************************d

//********************************j
//* Functions


//*******************************************************************b
//* DELAY_Us(); // Delay in microseconds
#undef KLAPPE0
//*******************************************************************b
void DELAY_Us(uint32_t ui32_Ori_DelayUs) {
   // CAUTION: Calling SysCtlDelay(0) will hang the system.
   if (ui32_Ori_DelayUs > 0) {
      // Note: The SysCtlDelay executes a simple 3 instruction cycle loop.
      // 3e6 = 998 dez
      ROM_SysCtlDelay((ui32SysClock / 3e6) * ui32_Ori_DelayUs);
   }   
} //end function

#undef KLAPPE1

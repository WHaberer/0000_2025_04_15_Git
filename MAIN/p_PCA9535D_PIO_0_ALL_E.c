
//******************************************a
// p_PCA9535D_PIO_0_ALL_E.c
//******************************************a

// !!! NO !!!  O R I G I N A L   File  !!! availiable !!!
// Edit direct here !!!

#ifdef NO //DOKU
#endif //(NO //DOKU)

// 00 Echo Begin
#pragma weh_all3 "File:      p_PCA9535D_PIO_0_ALL_E.c \n"
//***********************************************d

// ************************************
//* Calculations : Direction
// Do not change

#define PCA9535D_PIO_0_P0_DIR (PCA9535D_PIO_0_P0_BIT7 << 7 |  \
                               PCA9535D_PIO_0_P0_BIT6 << 6 |  \
                               PCA9535D_PIO_0_P0_BIT5 << 5 |  \
                               PCA9535D_PIO_0_P0_BIT4 << 4 |  \
                               PCA9535D_PIO_0_P0_BIT3 << 3 |  \
                               PCA9535D_PIO_0_P0_BIT2 << 2 |  \
                               PCA9535D_PIO_0_P0_BIT1 << 1 |  \
                               PCA9535D_PIO_0_P0_BIT0 << 0 )

#define PCA9535D_PIO_0_P1_DIR (PCA9535D_PIO_0_P1_BIT7 << 7 |  \
                               PCA9535D_PIO_0_P1_BIT6 << 6 |  \
                               PCA9535D_PIO_0_P1_BIT5 << 5 |  \
                               PCA9535D_PIO_0_P1_BIT4 << 4 |  \
                               PCA9535D_PIO_0_P1_BIT3 << 3 |  \
                               PCA9535D_PIO_0_P1_BIT2 << 2 |  \
                               PCA9535D_PIO_0_P1_BIT1 << 1 |  \
                               PCA9535D_PIO_0_P1_BIT0 << 0 )

//********************************j
//* Variables

// Value Variables. Later in big array
uint8_t ui8_PCA9535D_PIO_0_VAL_P1_RD;
uint8_t ui8_PCA9535D_PIO_0_VAL_P0_RD;

uint8_t ui8_PCA9535D_PIO_0_VAL_P1_WR;
uint8_t ui8_PCA9535D_PIO_0_VAL_P0_WR;

//"NVH "New Value Here" Variable"
bool b_PCA9535D_PIO_0_NVH;

// DO Write Out Variable
bool b_PCA9535D_PIO_0_DO_WR_OUT_VAL;
//bool b_PCA9535D_PIO_0_DO_WR_OUT_VAL_P0;
//bool b_PCA9535D_PIO_0_DO_WR_OUT_VAL_P1;


//******************************************a
// p_I2C_MAS_0_ALL_B.c
//******************************************a

#ifdef NO //DOKU  

// ich glaub ich mach daraus defines !!!! 

#ifdef NO
// von MAF
typedef struct {
    uint32_t ui32PeripheralI2C;
    uint32_t ui32PeripheralGpio;
    uint32_t ui32PortGpioBase;
    uint8_t  ui8PinGpioScl;
    uint8_t  ui8PinGpioSda;
    uint32_t ui32PinConfigScl;
    uint32_t ui32PinConfigSda;
    uint32_t ui32BaseI2C;
    uint32_t ui32I2CClk;            // ui32 I2CClk I2C Clock (wird später festgelegt)
    bool     bFast;                 // false = 100 kbps; true = 400 kbps
    uint32_t ui32IntFlags;
    uint32_t ui32Timeout;
} tI2C;
#endif

// weh  from MAF  // Typedef I2C Master

typedef struct {
    uint32_t ui32_PeripheralI2C;
    uint32_t ui32_PeripheralGpio;
    uint32_t ui32_PortGpioBase;
    uint8_t  ui8_PinGpioScl;
    uint8_t  ui8_PinGpioSda;
    uint32_t ui32_PinConfigScl;
    uint32_t ui32_PinConfigSda;
    uint32_t ui32_BaseI2C;
    uint32_t ui32_I2CClk;            // ui32 I2CClk I2C Clock (wird später festgelegt)
    bool     b_Fast;                 // false = 100 kbps; true = 400 kbps
    uint32_t ui32_IntFlags;
    uint32_t ui32_Timeout;
// MAF } tI2C;
} t_I2C;


// von MAF
//tI2C g_sI2C0 = {
// weh Struct
t_I2C t_I2C0 = {
    SYSCTL_PERIPH_I2C0,
    SYSCTL_PERIPH_GPIOB,
    GPIO_PORTB_BASE,
    GPIO_PIN_2,             // SCL
    GPIO_PIN_3,             // SDA
    GPIO_PB2_I2C0SCL,       // SCL
    GPIO_PB3_I2C0SDA,       // SDA
    I2C0_BASE,
    0,                      // ui32I2CClk        0,                      // ui32 I2CClk I2C Clock (wird später festgelegt)
    false,                  // b_Fast            false = 100 kbps; true = 400 kbps
    I2C_MASTER_INT_ARB_LOST | I2C_MASTER_INT_STOP | I2C_MASTER_INT_START | I2C_MASTER_INT_NACK | I2C_MASTER_INT_TIMEOUT | I2C_MASTER_INT_DATA,   //ui32_IntFlags;
    100                     // ui32_Timeout
};



//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//!
//! - \b I2C_MASTER_INT_RX_FIFO_FULL - RX FIFO Full interrupt
//! - \b I2C_MASTER_INT_TX_FIFO_EMPTY - TX FIFO Empty interrupt
//! - \b I2C_MASTER_INT_RX_FIFO_REQ - RX FIFO Request interrupt
//! - \b I2C_MASTER_INT_TX_FIFO_REQ - TX FIFO Request interrupt
//! - \b I2C_MASTER_INT_ARB_LOST - Arbitration Lost interrupt
//! - \b I2C_MASTER_INT_STOP - Stop Condition interrupt
//! - \b I2C_MASTER_INT_START - Start Condition interrupt
//! - \b I2C_MASTER_INT_NACK - Address/Data NACK interrupt
//! - \b I2C_MASTER_INT_TX_DMA_DONE - TX DMA Complete interrupt
//! - \b I2C_MASTER_INT_RX_DMA_DONE - RX DMA Complete interrupt
//! - \b I2C_MASTER_INT_TIMEOUT - Clock Timeout interrupt
//! - \b I2C_MASTER_INT_DATA - Data interrupt




#endif //(NO //DOKU)


//********************************j
//* Define Functions


#define F_I2C_MAS_0_INIT

#define F_I2C_MAS_0_WRITE_ADV
// in Function:
// Test Print to RS232
//#define F_I2C_MAS_0_WRITE_ADV_P_UART_USER

#define F_I2C_MAS_0_WRITE



#define F_I2C_MAS_0_READ_ADV
#define F_I2C_MAS_0_READ

/******************************************************************************
 *
 * GRUND.ld - Linker configuration file from blinky.
 *
 * Copyright (c) 2013-2020 Texas Instruments Incorporated.  All rights reserved.
 * Software License Agreement
 * 
 * Texas Instruments (TI) is supplying this software for use solely and
 * exclusively on TI's microcontroller products. The software is owned by
 * TI and/or its suppliers, and is protected under applicable copyright
 * laws. You may not combine this software with "viral" open-source
 * software in order to form a larger program.
 * 
 * THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
 * NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
 * NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
 * CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES, FOR ANY REASON WHATSOEVER.
 * 
 * This is part of revision 2.2.0.295 of the EK-TM4C1294XL Firmware Package.
 *
 *****************************************************************************/

MEMORY
{
/*    FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x00100000 */
    /* Offset 0x4000 for boot loader. */

/*    FLASH (rx) : ORIGIN = 0x00004000, LENGTH = 0x000fc000
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x00040000
*/
    FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x00100000
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x00040000
}

SECTIONS
{
    .text :
    {
        _text = .;
        KEEP(*(.isr_vector))
        *(.text*)
        *(.rodata*)
        /* New entry (.ARM.exidx*) made for Compiler : arm-none-eabi_13.2.1 */
        *(.ARM.exidx*)        
        _etext = .;
    } > FLASH

    .data : AT(ADDR(.text) + SIZEOF(.text))
    {
        _data = .;
        _ldata = LOADADDR (.data);
        *(vtable)
        *(.data*)
        _edata = .;
    } > SRAM

    .bss :
    {
        _bss = .;
        *(.bss*)
        *(COMMON)
        _ebss = .;
    } > SRAM
}

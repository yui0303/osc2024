#ifndef __PERIPHERALS_IRQ_H__
#define __PERIPHERALS_IRQ_H__

#include "peripherals/base.h"

// BCM2835 page. 112-116
#define IRQ_BASIC_PENDING       ((volatile unsigned int*)(MMIO_BASE+0x0000B200))
#define IRQ_PENDING_1           ((volatile unsigned int*)(MMIO_BASE+0x0000B204))    // Holds All interrupts 0...31 from the GPU side.
#define IRQ_PENDING_2           ((volatile unsigned int*)(MMIO_BASE+0x0000B208))    // 32...63
#define FIQ_CONTROL             ((volatile unsigned int*)(MMIO_BASE+0x0000B20C))
#define ENABLE_IRQS_1           ((volatile unsigned int*)(MMIO_BASE+0x0000B210))    // Writing a 1 to  a bit will set the corresponding IRQ enable bit. (0-31)
#define ENABLE_IRQS_2           ((volatile unsigned int*)(MMIO_BASE+0x0000B214))    // (32-63)
#define ENABLE_BASIC_IRQS       ((volatile unsigned int*)(MMIO_BASE+0x0000B218))
#define DISABLE_IRQS_1          ((volatile unsigned int*)(MMIO_BASE+0x0000B21C))
#define DISABLE_IRQS_2          ((volatile unsigned int*)(MMIO_BASE+0x0000B220))
#define DISABLE_BASIC_IRQS      ((volatile unsigned int*)(MMIO_BASE+0x0000B224))                                           // AUX interrupt. 29

#define AUX_INT                 (1 << 29)

// QA7 page. 16
#define CORE0_IRQ_SOURCE        ((volatile unsigned int*)(0x40000060))              // Get the IRQ source for the core 0.

#define SYSTEM_TIMER_IRQ_1      (1 << 1)
#define GPU_IRQ                 (1 << 8)

#define ESR_ELx_EC_SHIFT		26
#define ESR_ELx_EC_SVC64		0x15

#endif
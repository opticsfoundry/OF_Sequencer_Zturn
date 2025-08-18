#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definition for CPU ID */
#define XPAR_CPU_ID 0U

/* Definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0001000
#define STDOUT_BASEADDRESS 0xE0001000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_ZYNQ
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 2U

/* Definitions for peripheral AXI_BRAM_CTRL_0 */
#define XPAR_AXI_BRAM_CTRL_0_DEVICE_ID 0U
#define XPAR_AXI_BRAM_CTRL_0_DATA_WIDTH 64U
#define XPAR_AXI_BRAM_CTRL_0_ECC 0U
#define XPAR_AXI_BRAM_CTRL_0_FAULT_INJECT 0U
#define XPAR_AXI_BRAM_CTRL_0_CE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_UE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_STATUS_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_CE_COUNTER_WIDTH 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_ONOFF_REGISTER 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_AXI_BRAM_CTRL_0_WRITE_ACCESS 0U
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR 0x40000000U
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_HIGHADDR 0x4007FFFFU
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_CTRL_HIGHADDR 0xFFFFFFFFU  


/* Definitions for peripheral AXI_BRAM_CTRL_INPUT_DATA */
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_DEVICE_ID 1U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_DATA_WIDTH 32U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_ECC 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_FAULT_INJECT 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_CE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_UE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_ECC_STATUS_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_CE_COUNTER_WIDTH 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_ECC_ONOFF_REGISTER 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_WRITE_ACCESS 0U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_S_AXI_BASEADDR 0x42000000U
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_S_AXI_HIGHADDR 0x42007FFFU
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_S_AXI_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_AXI_BRAM_CTRL_INPUT_DATA_S_AXI_CTRL_HIGHADDR 0xFFFFFFFFU  


/******************************************************************/

/* Canonical definitions for peripheral AXI_BRAM_CTRL_0 */
#define XPAR_BRAM_0_DEVICE_ID XPAR_AXI_BRAM_CTRL_0_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 64U
#define XPAR_BRAM_0_ECC 0U
#define XPAR_BRAM_0_FAULT_INJECT 0U
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0U
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0U
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0U
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_BRAM_0_WRITE_ACCESS 0U
#define XPAR_BRAM_0_BASEADDR 0x40000000U
#define XPAR_BRAM_0_HIGHADDR 0x4007FFFFU
#define XPAR_BRAM_0_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_BRAM_0_CTRL_HIGHADDR 0xFFFFFFFEU  

/* Canonical definitions for peripheral AXI_BRAM_CTRL_INPUT_DATA */
#define XPAR_BRAM_1_DEVICE_ID XPAR_AXI_BRAM_CTRL_INPUT_DATA_DEVICE_ID
#define XPAR_BRAM_1_DATA_WIDTH 32U
#define XPAR_BRAM_1_ECC 0U
#define XPAR_BRAM_1_FAULT_INJECT 0U
#define XPAR_BRAM_1_CE_FAILING_REGISTERS 0U
#define XPAR_BRAM_1_UE_FAILING_REGISTERS 0U
#define XPAR_BRAM_1_ECC_STATUS_REGISTERS 0U
#define XPAR_BRAM_1_CE_COUNTER_WIDTH 0U
#define XPAR_BRAM_1_ECC_ONOFF_REGISTER 0U
#define XPAR_BRAM_1_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_BRAM_1_WRITE_ACCESS 0U
#define XPAR_BRAM_1_BASEADDR 0x42000000U
#define XPAR_BRAM_1_HIGHADDR 0x42007FFFU
#define XPAR_BRAM_1_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_BRAM_1_CTRL_HIGHADDR 0xFFFFFFFEU  


/******************************************************************/


/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x3FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0U
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000U
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000U
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_PS7_ETHERNET_0_DEVICE_ID 0
#define XPAR_PS7_ETHERNET_0_BASEADDR 0xE000B000
#define XPAR_PS7_ETHERNET_0_HIGHADDR 0xE000BFFF
#define XPAR_PS7_ETHERNET_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 5
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 50
#define XPAR_PS7_ETHERNET_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/

#define XPAR_PS7_ETHERNET_0_IS_CACHE_COHERENT 0
#define XPAR_XEMACPS_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PS7_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xE000B000
#define XPAR_XEMACPS_0_HIGHADDR 0xE000BFFF
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 5
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV1 50
#define XPAR_XEMACPS_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/


/* Peripheral Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Peripheral Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Peripheral Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Peripheral Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Peripheral Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Peripheral Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Peripheral Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Peripheral Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Peripheral Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Peripheral Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Peripheral Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Peripheral Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Peripheral Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Peripheral Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Peripheral Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Peripheral Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/******************************************************************/






































/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 9

/* Definitions for peripheral AXI_GPIO_CONFIG_STATUS */
#define XPAR_AXI_GPIO_CONFIG_STATUS_BASEADDR 0x41260000
#define XPAR_AXI_GPIO_CONFIG_STATUS_HIGHADDR 0x4126FFFF
#define XPAR_AXI_GPIO_CONFIG_STATUS_DEVICE_ID 0
#define XPAR_AXI_GPIO_CONFIG_STATUS_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CONFIG_STATUS_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_0 */
#define XPAR_AXI_GPIO_CORE_STATUS_0_BASEADDR 0x41210000
#define XPAR_AXI_GPIO_CORE_STATUS_0_HIGHADDR 0x4121FFFF
#define XPAR_AXI_GPIO_CORE_STATUS_0_DEVICE_ID 1
#define XPAR_AXI_GPIO_CORE_STATUS_0_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_0_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_1 */
#define XPAR_AXI_GPIO_CORE_STATUS_1_BASEADDR 0x41240000
#define XPAR_AXI_GPIO_CORE_STATUS_1_HIGHADDR 0x4124FFFF
#define XPAR_AXI_GPIO_CORE_STATUS_1_DEVICE_ID 2
#define XPAR_AXI_GPIO_CORE_STATUS_1_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_1_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_2 */
#define XPAR_AXI_GPIO_CORE_STATUS_2_BASEADDR 0x41270000
#define XPAR_AXI_GPIO_CORE_STATUS_2_HIGHADDR 0x4127FFFF
#define XPAR_AXI_GPIO_CORE_STATUS_2_DEVICE_ID 3
#define XPAR_AXI_GPIO_CORE_STATUS_2_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_2_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_3 */
#define XPAR_AXI_GPIO_CORE_STATUS_3_BASEADDR 0x41280000
#define XPAR_AXI_GPIO_CORE_STATUS_3_HIGHADDR 0x4128FFFF
#define XPAR_AXI_GPIO_CORE_STATUS_3_DEVICE_ID 4
#define XPAR_AXI_GPIO_CORE_STATUS_3_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_3_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_4 */
#define XPAR_AXI_GPIO_CORE_STATUS_4_BASEADDR 0x41290000
#define XPAR_AXI_GPIO_CORE_STATUS_4_HIGHADDR 0x4129FFFF
#define XPAR_AXI_GPIO_CORE_STATUS_4_DEVICE_ID 5
#define XPAR_AXI_GPIO_CORE_STATUS_4_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_4_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_5 */
#define XPAR_AXI_GPIO_CORE_STATUS_5_BASEADDR 0x412A0000
#define XPAR_AXI_GPIO_CORE_STATUS_5_HIGHADDR 0x412AFFFF
#define XPAR_AXI_GPIO_CORE_STATUS_5_DEVICE_ID 6
#define XPAR_AXI_GPIO_CORE_STATUS_5_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_5_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_CORE_STATUS_6 */
#define XPAR_AXI_GPIO_CORE_STATUS_6_BASEADDR 0x412B0000
#define XPAR_AXI_GPIO_CORE_STATUS_6_HIGHADDR 0x412BFFFF
#define XPAR_AXI_GPIO_CORE_STATUS_6_DEVICE_ID 7
#define XPAR_AXI_GPIO_CORE_STATUS_6_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_CORE_STATUS_6_IS_DUAL 1


/* Definitions for peripheral AXI_GPIO_STOP_WATCH */
#define XPAR_AXI_GPIO_STOP_WATCH_BASEADDR 0x412C0000
#define XPAR_AXI_GPIO_STOP_WATCH_HIGHADDR 0x412CFFFF
#define XPAR_AXI_GPIO_STOP_WATCH_DEVICE_ID 8
#define XPAR_AXI_GPIO_STOP_WATCH_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_STOP_WATCH_IS_DUAL 1


/******************************************************************/

/* Canonical definitions for peripheral AXI_GPIO_CONFIG_STATUS */
#define XPAR_GPIO_0_BASEADDR 0x41260000
#define XPAR_GPIO_0_HIGHADDR 0x4126FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_AXI_GPIO_CONFIG_STATUS_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_GPIO_0_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_0 */
#define XPAR_GPIO_1_BASEADDR 0x41210000
#define XPAR_GPIO_1_HIGHADDR 0x4121FFFF
#define XPAR_GPIO_1_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_0_DEVICE_ID
#define XPAR_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_GPIO_1_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_1 */
#define XPAR_GPIO_2_BASEADDR 0x41240000
#define XPAR_GPIO_2_HIGHADDR 0x4124FFFF
#define XPAR_GPIO_2_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_1_DEVICE_ID
#define XPAR_GPIO_2_INTERRUPT_PRESENT 0
#define XPAR_GPIO_2_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_2 */
#define XPAR_GPIO_3_BASEADDR 0x41270000
#define XPAR_GPIO_3_HIGHADDR 0x4127FFFF
#define XPAR_GPIO_3_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_2_DEVICE_ID
#define XPAR_GPIO_3_INTERRUPT_PRESENT 0
#define XPAR_GPIO_3_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_3 */
#define XPAR_GPIO_4_BASEADDR 0x41280000
#define XPAR_GPIO_4_HIGHADDR 0x4128FFFF
#define XPAR_GPIO_4_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_3_DEVICE_ID
#define XPAR_GPIO_4_INTERRUPT_PRESENT 0
#define XPAR_GPIO_4_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_4 */
#define XPAR_GPIO_5_BASEADDR 0x41290000
#define XPAR_GPIO_5_HIGHADDR 0x4129FFFF
#define XPAR_GPIO_5_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_4_DEVICE_ID
#define XPAR_GPIO_5_INTERRUPT_PRESENT 0
#define XPAR_GPIO_5_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_5 */
#define XPAR_GPIO_6_BASEADDR 0x412A0000
#define XPAR_GPIO_6_HIGHADDR 0x412AFFFF
#define XPAR_GPIO_6_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_5_DEVICE_ID
#define XPAR_GPIO_6_INTERRUPT_PRESENT 0
#define XPAR_GPIO_6_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_CORE_STATUS_6 */
#define XPAR_GPIO_7_BASEADDR 0x412B0000
#define XPAR_GPIO_7_HIGHADDR 0x412BFFFF
#define XPAR_GPIO_7_DEVICE_ID XPAR_AXI_GPIO_CORE_STATUS_6_DEVICE_ID
#define XPAR_GPIO_7_INTERRUPT_PRESENT 0
#define XPAR_GPIO_7_IS_DUAL 1

/* Canonical definitions for peripheral AXI_GPIO_STOP_WATCH */
#define XPAR_GPIO_8_BASEADDR 0x412C0000
#define XPAR_GPIO_8_HIGHADDR 0x412CFFFF
#define XPAR_GPIO_8_DEVICE_ID XPAR_AXI_GPIO_STOP_WATCH_DEVICE_ID
#define XPAR_GPIO_8_INTERRUPT_PRESENT 0
#define XPAR_GPIO_8_IS_DUAL 1


/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 2

/* Definitions for peripheral AXI_IIC_0 */
#define XPAR_AXI_IIC_0_DEVICE_ID 0
#define XPAR_AXI_IIC_0_BASEADDR 0x41600000
#define XPAR_AXI_IIC_0_HIGHADDR 0x4160FFFF
#define XPAR_AXI_IIC_0_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_0_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_1 */
#define XPAR_AXI_IIC_1_DEVICE_ID 1
#define XPAR_AXI_IIC_1_BASEADDR 0x41610000
#define XPAR_AXI_IIC_1_HIGHADDR 0x4161FFFF
#define XPAR_AXI_IIC_1_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_1_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral AXI_IIC_0 */
#define XPAR_IIC_0_DEVICE_ID XPAR_AXI_IIC_0_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x41600000
#define XPAR_IIC_0_HIGHADDR 0x4160FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_1 */
#define XPAR_IIC_1_DEVICE_ID XPAR_AXI_IIC_1_DEVICE_ID
#define XPAR_IIC_1_BASEADDR 0x41610000
#define XPAR_IIC_1_HIGHADDR 0x4161FFFF
#define XPAR_IIC_1_TEN_BIT_ADR 0
#define XPAR_IIC_1_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0
#define XPAR_PS7_QSPI_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0
#define XPAR_XQSPIPS_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_CORE_WRAPPER_0_SECONDARY_PS_PL_INTERRUPT_INTR 62U
#define XPAR_FABRIC_CORE_WRAPPER_0_INPUT_MEM_PS_PL_INTERRUPT_INTR 63U

/******************************************************************/

/* Canonical definitions for Fabric interrupts connected to ps7_scugic_0 */

/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0U
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100U
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FFU
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0U
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100U
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FFU
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 50000000
#define XPAR_PS7_SD_0_HAS_CD 1
#define XPAR_PS7_SD_0_HAS_WP 1
#define XPAR_PS7_SD_0_BUS_WIDTH 0
#define XPAR_PS7_SD_0_MIO_BANK 0
#define XPAR_PS7_SD_0_HAS_EMIO 0
#define XPAR_PS7_SD_0_SLOT_TYPE 0
#define XPAR_PS7_SD_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_200_SDR_OTAP_DLY 0


/******************************************************************/

#define XPAR_PS7_SD_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 50000000
#define XPAR_XSDPS_0_HAS_CD 1
#define XPAR_XSDPS_0_HAS_WP 1
#define XPAR_XSDPS_0_BUS_WIDTH 0
#define XPAR_XSDPS_0_MIO_BANK 0
#define XPAR_XSDPS_0_HAS_EMIO 0
#define XPAR_XSDPS_0_SLOT_TYPE 0
#define XPAR_XSDPS_0_IS_CACHE_COHERENT 0
#define XPAR_XSDPS_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_200_SDR_OTAP_DLY 0


/******************************************************************/

/* Definitions for driver SPI */
#define XPAR_XSPI_NUM_INSTANCES 2U

/* Definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_AXI_QUAD_SPI_0_DEVICE_ID 0U
#define XPAR_AXI_QUAD_SPI_0_BASEADDR 0x41E00000U
#define XPAR_AXI_QUAD_SPI_0_HIGHADDR 0x41E0FFFFU
#define XPAR_AXI_QUAD_SPI_0_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_0_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_0_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_0_NUM_TRANSFER_BITS 8U
#define XPAR_AXI_QUAD_SPI_0_SPI_MODE 0U
#define XPAR_AXI_QUAD_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_0_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_0 */
#define XPAR_SPI_0_DEVICE_ID 0U
#define XPAR_SPI_0_BASEADDR 0x41E00000U
#define XPAR_SPI_0_HIGHADDR 0x41E0FFFFU
#define XPAR_SPI_0_FIFO_EXIST 1U
#define XPAR_SPI_0_FIFO_DEPTH 16U
#define XPAR_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_0_NUM_SS_BITS 1U
#define XPAR_SPI_0_NUM_TRANSFER_BITS 8U
#define XPAR_SPI_0_SPI_MODE 0U
#define XPAR_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_0_AXI4_BASEADDR 0U
#define XPAR_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_SPI_0_XIP_MODE 0U
#define XPAR_SPI_0_USE_STARTUP 0U



/* Definitions for peripheral AXI_QUAD_SPI_1 */
#define XPAR_AXI_QUAD_SPI_1_DEVICE_ID 1U
#define XPAR_AXI_QUAD_SPI_1_BASEADDR 0x41E10000U
#define XPAR_AXI_QUAD_SPI_1_HIGHADDR 0x41E1FFFFU
#define XPAR_AXI_QUAD_SPI_1_FIFO_EXIST 1U
#define XPAR_AXI_QUAD_SPI_1_FIFO_DEPTH 16U
#define XPAR_AXI_QUAD_SPI_1_SPI_SLAVE_ONLY 0U
#define XPAR_AXI_QUAD_SPI_1_NUM_SS_BITS 1U
#define XPAR_AXI_QUAD_SPI_1_NUM_TRANSFER_BITS 8U
#define XPAR_AXI_QUAD_SPI_1_SPI_MODE 0U
#define XPAR_AXI_QUAD_SPI_1_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_AXI_QUAD_SPI_1_AXI4_BASEADDR 0U
#define XPAR_AXI_QUAD_SPI_1_AXI4_HIGHADDR 0U
#define XPAR_AXI_QUAD_SPI_1_XIP_MODE 0U

/* Canonical definitions for peripheral AXI_QUAD_SPI_1 */
#define XPAR_SPI_1_DEVICE_ID 1U
#define XPAR_SPI_1_BASEADDR 0x41E10000U
#define XPAR_SPI_1_HIGHADDR 0x41E1FFFFU
#define XPAR_SPI_1_FIFO_EXIST 1U
#define XPAR_SPI_1_FIFO_DEPTH 16U
#define XPAR_SPI_1_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_1_NUM_SS_BITS 1U
#define XPAR_SPI_1_NUM_TRANSFER_BITS 8U
#define XPAR_SPI_1_SPI_MODE 0U
#define XPAR_SPI_1_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_1_AXI4_BASEADDR 0U
#define XPAR_SPI_1_AXI4_HIGHADDR 0U
#define XPAR_SPI_1_XIP_MODE 0U
#define XPAR_SPI_1_USE_STARTUP 0U



/******************************************************************/

/* Definitions for driver TTCPS */
#define XPAR_XTTCPS_NUM_INSTANCES 3U

/* Definitions for peripheral PS7_TTC_0 */
#define XPAR_PS7_TTC_0_DEVICE_ID 0U
#define XPAR_PS7_TTC_0_BASEADDR 0XF8001000U
#define XPAR_PS7_TTC_0_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_0_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_1_DEVICE_ID 1U
#define XPAR_PS7_TTC_1_BASEADDR 0XF8001004U
#define XPAR_PS7_TTC_1_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_1_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_2_DEVICE_ID 2U
#define XPAR_PS7_TTC_2_BASEADDR 0XF8001008U
#define XPAR_PS7_TTC_2_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Canonical definitions for peripheral PS7_TTC_0 */
#define XPAR_XTTCPS_0_DEVICE_ID XPAR_PS7_TTC_0_DEVICE_ID
#define XPAR_XTTCPS_0_BASEADDR 0xF8001000U
#define XPAR_XTTCPS_0_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_0_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_1_DEVICE_ID XPAR_PS7_TTC_1_DEVICE_ID
#define XPAR_XTTCPS_1_BASEADDR 0xF8001004U
#define XPAR_XTTCPS_1_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_1_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_2_DEVICE_ID XPAR_PS7_TTC_2_DEVICE_ID
#define XPAR_XTTCPS_2_BASEADDR 0xF8001008U
#define XPAR_XTTCPS_2_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Definitions for driver UARTNS550 */
#define XPAR_XUARTNS550_NUM_INSTANCES 1U
#define XPAR_XUARTNS550_CLOCK_HZ 100000000U

/* Definitions for peripheral AXI_UART16550_0 */
#define XPAR_AXI_UART16550_0_DEVICE_ID 0U
#define XPAR_AXI_UART16550_0_BASEADDR 0x43C00000U
#define XPAR_AXI_UART16550_0_HIGHADDR 0x43C0FFFFU
#define XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ 100000000U


/******************************************************************/

/* Canonical definitions for peripheral AXI_UART16550_0 */
#define XPAR_UARTNS550_0_DEVICE_ID 0U
#define XPAR_UARTNS550_0_BASEADDR 0x43C00000U
#define XPAR_UARTNS550_0_HIGHADDR 0x43C0FFFFU
#define XPAR_UARTNS550_0_CLOCK_FREQ_HZ XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ


/******************************************************************/

/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_UART_1 */
#define XPAR_PS7_UART_1_DEVICE_ID 0
#define XPAR_PS7_UART_1_BASEADDR 0xE0001000
#define XPAR_PS7_UART_1_HIGHADDR 0xE0001FFF
#define XPAR_PS7_UART_1_UART_CLK_FREQ_HZ 50000000
#define XPAR_PS7_UART_1_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_1 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_1_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0001000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0001FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 50000000
#define XPAR_XUARTPS_0_HAS_MODEM 0


/******************************************************************/

/* Definition for input Clock */
/* Definitions for driver USBPS */
#define XPAR_XUSBPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_USB_0 */
#define XPAR_PS7_USB_0_DEVICE_ID 0
#define XPAR_PS7_USB_0_BASEADDR 0xE0002000
#define XPAR_PS7_USB_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_USB_0 */
#define XPAR_XUSBPS_0_DEVICE_ID XPAR_PS7_USB_0_DEVICE_ID
#define XPAR_XUSBPS_0_BASEADDR 0xE0002000
#define XPAR_XUSBPS_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

#endif  /* end of protection macro */

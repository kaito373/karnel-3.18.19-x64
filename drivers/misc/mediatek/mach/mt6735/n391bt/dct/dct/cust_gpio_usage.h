/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6735. Copyright MediaTek Inc. (C) 2013.
 * Fri Nov 04 15:36:24 2016
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_OTG_IDDIG_EINT_PIN         (GPIO0 | 0x80000000)
#define GPIO_OTG_IDDIG_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_OTG_IDDIG_EINT_PIN_M_CLK   GPIO_MODE_03
#define GPIO_OTG_IDDIG_EINT_PIN_M_EINT   GPIO_MODE_07
#define GPIO_OTG_IDDIG_EINT_PIN_M_KCOL   GPIO_MODE_06
#define GPIO_OTG_IDDIG_EINT_PIN_M_PWM   GPIO_MODE_05
#define GPIO_OTG_IDDIG_EINT_PIN_M_IDDIG   GPIO_MODE_01
#define GPIO_OTG_IDDIG_EINT_PIN_CLK     CLK_OUT4
#define GPIO_OTG_IDDIG_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_SDHC_EINT_PIN         (GPIO1 | 0x80000000)
#define GPIO_SDHC_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_SDHC_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SDHC_EINT_PIN_M_MDEINT   GPIO_MODE_03
#define GPIO_SDHC_EINT_PIN_M_PWM   GPIO_MODE_01

#define GPIO_ALS_EINT_PIN         (GPIO3 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_CLK   GPIO_MODE_01
#define GPIO_ALS_EINT_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_ALS_EINT_PIN_CLK     CLK_OUT1
#define GPIO_ALS_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GSE_1_EINT_PIN         (GPIO4 | 0x80000000)
#define GPIO_GSE_1_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_CLK   GPIO_MODE_01
#define GPIO_GSE_1_EINT_PIN_CLK     CLK_OUT2
#define GPIO_GSE_1_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_SMARTPA_EINT_PIN         (GPIO5 | 0x80000000)
#define GPIO_SMARTPA_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_SMARTPA_EINT_PIN_M_GPIO   GPIO_MODE_00

#define GPIO_ACCDET_EINT_PIN         (GPIO6 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_GPIO   GPIO_MODE_00

#define GPIO_CAMERA_CMPDN_PIN         (GPIO7 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMPDN_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN_PIN_M_SDA   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN_PIN_M_TDD_TMS   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN_PIN_M_CONN_MCU_TMS   GPIO_MODE_05
#define GPIO_CAMERA_CMPDN_PIN_M_I2S1_BCK   GPIO_MODE_06
#define GPIO_CAMERA_CMPDN_PIN_M_TDD_TXD   GPIO_MODE_07

#define GPIO_CTP_EINT_PIN         (GPIO10 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_EINT   GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK   GPIO_MODE_02
#define GPIO_CTP_EINT_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_CTP_EINT_PIN_M_KROW   GPIO_MODE_03
#define GPIO_CTP_EINT_PIN_M_PWM   GPIO_MODE_01
#define GPIO_CTP_EINT_PIN_CLK     CLK_OUT1
#define GPIO_CTP_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMRST1_PIN         (GPIO11 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_CLK   GPIO_MODE_04
#define GPIO_CAMERA_CMRST1_PIN_M_MDEINT   GPIO_MODE_01
#define GPIO_CAMERA_CMRST1_PIN_M_IRTX_OUT   GPIO_MODE_02
#define GPIO_CAMERA_CMRST1_PIN_M_C2K_UIM0_HOT_PLUG_IN   GPIO_MODE_03
#define GPIO_CAMERA_CMRST1_PIN_M_I2S2_MCK   GPIO_MODE_05
#define GPIO_CAMERA_CMRST1_PIN_M_SCL   GPIO_MODE_06
#define GPIO_CAMERA_CMRST1_PIN_M_URXD   GPIO_MODE_07
#define GPIO_CAMERA_CMRST1_PIN_CLK     CLK_OUT0
#define GPIO_CAMERA_CMRST1_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO12 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_CLK   GPIO_MODE_06
#define GPIO_CAMERA_CMPDN1_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN1_PIN_M_KCOL   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN1_PIN_M_I2S0_MCK   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN1_PIN_M_C2K_UIM1_HOT_PLUG_IN   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN1_PIN_M_IRTX_OUT   GPIO_MODE_05
#define GPIO_CAMERA_CMPDN1_PIN_M_PCM1_DO   GPIO_MODE_07

#define GPIO_CTP_EN_PIN         (GPIO21 | 0x80000000)
#define GPIO_CTP_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_EN_PIN_M_MDEINT   GPIO_MODE_05
#define GPIO_CTP_EN_PIN_M_PWM   GPIO_MODE_02

#define GPIO_CAMERA_RDN0_A_PIN         (GPIO32 | 0x80000000)
#define GPIO_CAMERA_RDN0_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDN0_A_PIN_M_RDN0_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN0_A_PIN_M_CMHSYNC   GPIO_MODE_02
#define GPIO_CAMERA_RDN0_A_PIN_M_CMCSD   GPIO_MODE_03

#define GPIO_CAMERA_RDP0_A_PIN         (GPIO33 | 0x80000000)
#define GPIO_CAMERA_RDP0_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDP0_A_PIN_M_RDP0_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP0_A_PIN_M_CMVSYNC   GPIO_MODE_02
#define GPIO_CAMERA_RDP0_A_PIN_M_CMCSD   GPIO_MODE_03

#define GPIO_CAMERA_RDN1_A_PIN         (GPIO34 | 0x80000000)
#define GPIO_CAMERA_RDN1_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDN1_A_PIN_M_RDN1_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN1_A_PIN_M_CMDAT   GPIO_MODE_02
#define GPIO_CAMERA_RDN1_A_PIN_M_CMCSD   GPIO_MODE_03

#define GPIO_CAMERA_RDP1_A_PIN         (GPIO35 | 0x80000000)
#define GPIO_CAMERA_RDP1_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDP1_A_PIN_M_RDP1_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP1_A_PIN_M_CMDAT   GPIO_MODE_02
#define GPIO_CAMERA_RDP1_A_PIN_M_CMCSD   GPIO_MODE_03

#define GPIO_CAMERA_RCN_A_PIN         (GPIO36 | 0x80000000)
#define GPIO_CAMERA_RCN_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RCN_A_PIN_M_RCN_A   GPIO_MODE_01
#define GPIO_CAMERA_RCN_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_CAMERA_RCP_A_PIN         (GPIO37 | 0x80000000)
#define GPIO_CAMERA_RCP_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RCP_A_PIN_M_RCP_A   GPIO_MODE_01
#define GPIO_CAMERA_RCP_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_CAMERA_RDN2_A_PIN         (GPIO38 | 0x80000000)
#define GPIO_CAMERA_RDN2_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDN2_A_PIN_M_RDN2_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN2_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_CAMERA_RDP2_A_PIN         (GPIO39 | 0x80000000)
#define GPIO_CAMERA_RDP2_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDP2_A_PIN_M_RDP2_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP2_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_CAMERA_RDN3_A_PIN         (GPIO40 | 0x80000000)
#define GPIO_CAMERA_RDN3_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDN3_A_PIN_M_RDN3_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN3_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_CAMERA_RDP3_A_PIN         (GPIO41 | 0x80000000)
#define GPIO_CAMERA_RDP3_A_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_RDP3_A_PIN_M_RDP3_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP3_A_PIN_M_CMDAT   GPIO_MODE_02

#define GPIO_FLASH_LED_EN         (GPIO42 | 0x80000000)
#define GPIO_FLASH_LED_EN_M_GPIO   GPIO_MODE_00
#define GPIO_FLASH_LED_EN_M_CLK   GPIO_MODE_03
#define GPIO_FLASH_LED_EN_M_CMDAT   GPIO_MODE_01
#define GPIO_FLASH_LED_EN_M_CMCSD   GPIO_MODE_02
#define GPIO_FLASH_LED_EN_M_ANT_SEL   GPIO_MODE_05
#define GPIO_FLASH_LED_EN_M_CLKM   GPIO_MODE_06
#define GPIO_FLASH_LED_EN_M_DBG_MON_A   GPIO_MODE_07
#define GPIO_FLASH_LED_EN_CLK     CLK_OUT5
#define GPIO_FLASH_LED_EN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMRST_PIN         (GPIO43 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_CLK   GPIO_MODE_05
#define GPIO_CAMERA_CMRST_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_CAMERA_CMRST_PIN_CLK     CLK_OUT4
#define GPIO_CAMERA_CMRST_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_TORCH_EN         (GPIO44 | 0x80000000)
#define GPIO_TORCH_EN_M_GPIO   GPIO_MODE_00
#define GPIO_TORCH_EN_M_CLK   GPIO_MODE_01
#define GPIO_TORCH_EN_M_KCOL   GPIO_MODE_04
#define GPIO_TORCH_EN_M_PWM   GPIO_MODE_06
#define GPIO_TORCH_EN_M_CMCSK   GPIO_MODE_02
#define GPIO_TORCH_EN_M_CMCSD   GPIO_MODE_03
#define GPIO_TORCH_EN_M_SRCLKENAI   GPIO_MODE_05
#define GPIO_TORCH_EN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_CMMCLK         (GPIO45 | 0x80000000)
#define GPIO_CMMCLK_M_GPIO   GPIO_MODE_00
#define GPIO_CMMCLK_M_CLK   GPIO_MODE_01
#define GPIO_CMMCLK_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_I2C0_SDA_PIN         (GPIO47 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C0_SCA_PIN         (GPIO48 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         (GPIO49 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO50 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C2_SDA_PIN         (GPIO51 | 0x80000000)
#define GPIO_I2C2_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C2_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C2_SCA_PIN         (GPIO52 | 0x80000000)
#define GPIO_I2C2_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C2_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C3_SDA_PIN         (GPIO53 | 0x80000000)
#define GPIO_I2C3_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C3_SDA_PIN_M_MDEINT   GPIO_MODE_05
#define GPIO_I2C3_SDA_PIN_M_SDA   GPIO_MODE_01
#define GPIO_I2C3_SDA_PIN_M_IDDIG   GPIO_MODE_03
#define GPIO_I2C3_SDA_PIN_M_C2K_UIM1_HOT_PLUG_IN   GPIO_MODE_06

#define GPIO_I2C3_SCA_PIN         (GPIO54 | 0x80000000)
#define GPIO_I2C3_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C3_SCA_PIN_M_MDEINT   GPIO_MODE_05
#define GPIO_I2C3_SCA_PIN_M_SCL   GPIO_MODE_01
#define GPIO_I2C3_SCA_PIN_M_IDDIG   GPIO_MODE_03
#define GPIO_I2C3_SCA_PIN_M_C2K_UIM0_HOT_PLUG_IN   GPIO_MODE_06

#define GPIO_CTP_RST_PIN         (GPIO62 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_CLK   GPIO_MODE_05
#define GPIO_CTP_RST_PIN_M_KCOL   GPIO_MODE_04
#define GPIO_CTP_RST_PIN_M_PCM1_SYNC   GPIO_MODE_01
#define GPIO_CTP_RST_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_CTP_RST_PIN_M_I2S0_LRCK   GPIO_MODE_03
#define GPIO_CTP_RST_PIN_M_CMFLASH   GPIO_MODE_06
#define GPIO_CTP_RST_PIN_M_DBG_MON_A   GPIO_MODE_07
#define GPIO_CTP_RST_PIN_CLK     CLK_OUT3
#define GPIO_CTP_RST_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_OTG_DRVVBUS_PIN         (GPIO63 | 0x80000000)
#define GPIO_OTG_DRVVBUS_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_OTG_DRVVBUS_PIN_M_CLK   GPIO_MODE_05
#define GPIO_OTG_DRVVBUS_PIN_M_KROW   GPIO_MODE_06
#define GPIO_OTG_DRVVBUS_PIN_M_PCM1_DI   GPIO_MODE_01
#define GPIO_OTG_DRVVBUS_PIN_M_DPI_D   GPIO_MODE_02
#define GPIO_OTG_DRVVBUS_PIN_M_I2S0_DI   GPIO_MODE_03
#define GPIO_OTG_DRVVBUS_PIN_M_PCM1_DO   GPIO_MODE_04
#define GPIO_OTG_DRVVBUS_PIN_M_DBG_MON_A   GPIO_MODE_07
#define GPIO_OTG_DRVVBUS_PIN_CLK     CLK_OUT5
#define GPIO_OTG_DRVVBUS_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_SWCHARGER_EN_PIN         (GPIO64 | 0x80000000)
#define GPIO_SWCHARGER_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SWCHARGER_EN_PIN_M_CLK   GPIO_MODE_05
#define GPIO_SWCHARGER_EN_PIN_M_KCOL   GPIO_MODE_06

#define GPIO_SMARTPA_RST_PIN         (GPIO65 | 0x80000000)
#define GPIO_SMARTPA_RST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SMARTPA_RST_PIN_M_KROW   GPIO_MODE_04
#define GPIO_SMARTPA_RST_PIN_M_SPI_CSA   GPIO_MODE_01

#define GPIO_SMARTPA_I2S_BCK_PIN         (GPIO66 | 0x80000000)
#define GPIO_SMARTPA_I2S_BCK_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SMARTPA_I2S_BCK_PIN_M_KCOL   GPIO_MODE_04
#define GPIO_SMARTPA_I2S_BCK_PIN_M_I2S3_BCK   GPIO_MODE_03

#define GPIO_SMARTPA_I2S_DOUT_PIN         (GPIO67 | 0x80000000)
#define GPIO_SMARTPA_I2S_DOUT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SMARTPA_I2S_DOUT_PIN_M_I2S3_DO   GPIO_MODE_03

#define GPIO_SMARTPA_I2S_WS_PIN         (GPIO68 | 0x80000000)
#define GPIO_SMARTPA_I2S_WS_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SMARTPA_I2S_WS_PIN_M_I2S3_LRCK   GPIO_MODE_03

#define GPIO_JTAG_TMS_PIN         (GPIO70 | 0x80000000)
#define GPIO_JTAG_TMS_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_JTAG_TMS_PIN_M_JTMS   GPIO_MODE_01
#define GPIO_JTAG_TMS_PIN_M_CONN_MCU_TMS   GPIO_MODE_02
#define GPIO_JTAG_TMS_PIN_M_LTE_MD32_JTAG_TMS   GPIO_MODE_03
#define GPIO_JTAG_TMS_PIN_M_TDD_TMS   GPIO_MODE_04
#define GPIO_JTAG_TMS_PIN_M_CORESONIC_SWD   GPIO_MODE_05
#define GPIO_JTAG_TMS_PIN_M_DM_OTMS   GPIO_MODE_06
#define GPIO_JTAG_TMS_PIN_M_DFD_TMS   GPIO_MODE_07

#define GPIO_JTAG_TCK_PIN         (GPIO71 | 0x80000000)
#define GPIO_JTAG_TCK_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_JTAG_TCK_PIN_M_JTCK   GPIO_MODE_01
#define GPIO_JTAG_TCK_PIN_M_CONN_MCU_TCK   GPIO_MODE_02
#define GPIO_JTAG_TCK_PIN_M_LTE_MD32_JTAG_TCK   GPIO_MODE_03
#define GPIO_JTAG_TCK_PIN_M_TDD_TCK   GPIO_MODE_04
#define GPIO_JTAG_TCK_PIN_M_CORESONIC_SWCK   GPIO_MODE_05
#define GPIO_JTAG_TCK_PIN_M_DM_OTCK   GPIO_MODE_06
#define GPIO_JTAG_TCK_PIN_M_DFD_TCK_XI   GPIO_MODE_07

#define GPIO_JTAG_TDI_PIN         (GPIO72 | 0x80000000)
#define GPIO_JTAG_TDI_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_JTAG_TDI_PIN_M_JTDI   GPIO_MODE_01
#define GPIO_JTAG_TDI_PIN_M_CONN_MCU_TDI   GPIO_MODE_02
#define GPIO_JTAG_TDI_PIN_M_LTE_MD32_JTAG_TDI   GPIO_MODE_03
#define GPIO_JTAG_TDI_PIN_M_TDD_TDI   GPIO_MODE_04
#define GPIO_JTAG_TDI_PIN_M_DM_OTDI   GPIO_MODE_06
#define GPIO_JTAG_TDI_PIN_M_DFD_TDI   GPIO_MODE_07

#define GPIO_JTAG_TDO_PIN         (GPIO73 | 0x80000000)
#define GPIO_JTAG_TDO_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_JTAG_TDO_PIN_M_JTDO   GPIO_MODE_01
#define GPIO_JTAG_TDO_PIN_M_CONN_MCU_TDO   GPIO_MODE_02
#define GPIO_JTAG_TDO_PIN_M_LTE_MD32_JTAG_TDO   GPIO_MODE_03
#define GPIO_JTAG_TDO_PIN_M_TDD_TDO   GPIO_MODE_04
#define GPIO_JTAG_TDO_PIN_M_DM_OTDO   GPIO_MODE_06
#define GPIO_JTAG_TDO_PIN_M_DFD_TDO   GPIO_MODE_07

#define GPIO_UART_URXD0_PIN         (GPIO74 | 0x80000000)
#define GPIO_UART_URXD0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_URXD0_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD0_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD0_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD0_PIN_M_SDA   GPIO_MODE_04
#define GPIO_UART_URXD0_PIN_M_C2K_UART0_RXD   GPIO_MODE_05
#define GPIO_UART_URXD0_PIN_M_LTE_URXD   GPIO_MODE_06
#define GPIO_UART_URXD0_PIN_M_AUXIF_ST   GPIO_MODE_07

#define GPIO_UART_UTXD0_PIN         (GPIO75 | 0x80000000)
#define GPIO_UART_UTXD0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_UTXD0_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD0_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD0_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD0_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD0_PIN_M_C2K_UART0_TXD   GPIO_MODE_05
#define GPIO_UART_UTXD0_PIN_M_LTE_UTXD   GPIO_MODE_06

#define GPIO_UART_URXD1_PIN         (GPIO76 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_CLK   GPIO_MODE_07
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD1_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD1_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD1_PIN_M_SCL   GPIO_MODE_04
#define GPIO_UART_URXD1_PIN_M_LTE_URXD   GPIO_MODE_05
#define GPIO_UART_URXD1_PIN_M_C2K_UART0_RXD   GPIO_MODE_06

#define GPIO_UART_UTXD1_PIN         (GPIO77 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD1_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD1_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD1_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD1_PIN_M_LTE_UTXD   GPIO_MODE_05
#define GPIO_UART_UTXD1_PIN_M_C2K_UART0_TXD   GPIO_MODE_06

#define GPIO_SMARTPA_I2S_DIN_PIN         (GPIO78 | 0x80000000)
#define GPIO_SMARTPA_I2S_DIN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SMARTPA_I2S_DIN_PIN_M_PWM   GPIO_MODE_05
#define GPIO_SMARTPA_I2S_DIN_PIN_M_I2S3_DO   GPIO_MODE_03

#define GPIO_GPS_LNA_PIN         (GPIO79 | 0x80000000)
#define GPIO_GPS_LNA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_PWM   GPIO_MODE_05
#define GPIO_GPS_LNA_PIN_M_I2S0_LRCK   GPIO_MODE_01
#define GPIO_GPS_LNA_PIN_M_PCM1_SYNC   GPIO_MODE_02
#define GPIO_GPS_LNA_PIN_M_I2S3_LRCK   GPIO_MODE_03
#define GPIO_GPS_LNA_PIN_M_I2S1_LRCK   GPIO_MODE_04
#define GPIO_GPS_LNA_PIN_M_I2S2_LRCK   GPIO_MODE_06
#define GPIO_GPS_LNA_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_KPD_KROW0_PIN         (GPIO81 | 0x80000000)
#define GPIO_KPD_KROW0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KROW0_PIN_M_EINT   GPIO_MODE_07
#define GPIO_KPD_KROW0_PIN_M_KROW   GPIO_MODE_01
#define GPIO_KPD_KROW0_PIN_M_CONN_MCU_DBGI_N   GPIO_MODE_03
#define GPIO_KPD_KROW0_PIN_M_CORESONIC_SWCK   GPIO_MODE_04
#define GPIO_KPD_KROW0_PIN_M_C2K_TCK   GPIO_MODE_05

#define GPIO_KPD_KCOL0_PIN         (GPIO84 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_CLK   GPIO_MODE_06
#define GPIO_KPD_KCOL0_PIN_M_KCOL   GPIO_MODE_01
#define GPIO_KPD_KCOL0_PIN_M_URTS   GPIO_MODE_02
#define GPIO_KPD_KCOL0_PIN_M_CONN_MCU_DBGACK_N   GPIO_MODE_03
#define GPIO_KPD_KCOL0_PIN_M_SCL   GPIO_MODE_04
#define GPIO_KPD_KCOL0_PIN_M_C2K_TDO   GPIO_MODE_05

#define GPIO_KPD_KCOL1_PIN         (GPIO85 | 0x80000000)
#define GPIO_KPD_KCOL1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KCOL1_PIN_M_KCOL   GPIO_MODE_01
#define GPIO_KPD_KCOL1_PIN_M_UCTS   GPIO_MODE_02
#define GPIO_KPD_KCOL1_PIN_M_UCTS   GPIO_MODE_03
#define GPIO_KPD_KCOL1_PIN_M_SDA   GPIO_MODE_04
#define GPIO_KPD_KCOL1_PIN_M_C2K_TMS   GPIO_MODE_05
#define GPIO_KPD_KCOL1_PIN_M_AUXIF_ST   GPIO_MODE_06
#define GPIO_KPD_KCOL1_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_LCM_PWR         (GPIO94 | 0x80000000)
#define GPIO_LCM_PWR_M_GPIO   GPIO_MODE_00

#define GPIO_RFIC0_BSI_CK         (GPIO111 | 0x80000000)
#define GPIO_RFIC0_BSI_CK_M_GPIO   GPIO_MODE_00
#define GPIO_RFIC0_BSI_CK_M_CLK   GPIO_MODE_04
#define GPIO_RFIC0_BSI_CK_M_RFIC0_BSI_CK   GPIO_MODE_01
#define GPIO_RFIC0_BSI_CK_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_RFIC0_BSI_D2         (GPIO112 | 0x80000000)
#define GPIO_RFIC0_BSI_D2_M_GPIO   GPIO_MODE_00
#define GPIO_RFIC0_BSI_D2_M_RFIC0_BSI_D   GPIO_MODE_01
#define GPIO_RFIC0_BSI_D2_M_SPM_BSI_D   GPIO_MODE_04
#define GPIO_RFIC0_BSI_D2_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_RFIC0_BSI_D1         (GPIO113 | 0x80000000)
#define GPIO_RFIC0_BSI_D1_M_GPIO   GPIO_MODE_00
#define GPIO_RFIC0_BSI_D1_M_RFIC0_BSI_D   GPIO_MODE_01
#define GPIO_RFIC0_BSI_D1_M_SPM_BSI_D   GPIO_MODE_04
#define GPIO_RFIC0_BSI_D1_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_RFIC0_BSI_D0         (GPIO114 | 0x80000000)
#define GPIO_RFIC0_BSI_D0_M_GPIO   GPIO_MODE_00
#define GPIO_RFIC0_BSI_D0_M_RFIC0_BSI_D   GPIO_MODE_01
#define GPIO_RFIC0_BSI_D0_M_SPM_BSI_D   GPIO_MODE_04
#define GPIO_RFIC0_BSI_D0_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_LTE_VSRAM_EXT_POWER_EN_PIN         (GPIO140 | 0x80000000)
#define GPIO_LTE_VSRAM_EXT_POWER_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_LTE_VSRAM_EXT_POWER_EN_PIN_M_LTE_MD32_JTAG_TRST   GPIO_MODE_03
#define GPIO_LTE_VSRAM_EXT_POWER_EN_PIN_M_TDD_TRSTN   GPIO_MODE_04
#define GPIO_LTE_VSRAM_EXT_POWER_EN_PIN_M_DM_JTINTP   GPIO_MODE_05

#define GPIO_AUD_CLK_MOSI_PIN         (GPIO143 | 0x80000000)
#define GPIO_AUD_CLK_MOSI_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_CLK_MOSI_PIN_M_CLK   GPIO_MODE_01

#define GPIO_AUD_DAT_MISO_PIN         (GPIO144 | 0x80000000)
#define GPIO_AUD_DAT_MISO_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_DAT_MISO_PIN_M_AUD_DAT_MISO   GPIO_MODE_01
#define GPIO_AUD_DAT_MISO_PIN_M_AUD_DAT_MOSI   GPIO_MODE_03

#define GPIO_AUD_DAT_MOSI_PIN         (GPIO145 | 0x80000000)
#define GPIO_AUD_DAT_MOSI_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_DAT_MOSI_PIN_M_AUD_DAT_MOSI   GPIO_MODE_01
#define GPIO_AUD_DAT_MOSI_PIN_M_AUD_DAT_MISO   GPIO_MODE_03

#define GPIO_LCM_RST         (GPIO146 | 0x80000000)
#define GPIO_LCM_RST_M_GPIO   GPIO_MODE_00
#define GPIO_LCM_RST_M_LCM_RST   GPIO_MODE_01

#define GPIO_DSI_TE_PIN         (GPIO147 | 0x80000000)
#define GPIO_DSI_TE_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_DSI_TE_PIN_M_DSI_TE   GPIO_MODE_01

#define GPIO_SIM2_SCLK         (GPIO160 | 0x80000000)
#define GPIO_SIM2_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM2_SCLK_M_MD_SIM1_SCLK   GPIO_MODE_02
#define GPIO_SIM2_SCLK_M_UIM0_CLK   GPIO_MODE_03
#define GPIO_SIM2_SCLK_M_UIM1_CLK   GPIO_MODE_04

#define GPIO_SIM2_SRST         (GPIO161 | 0x80000000)
#define GPIO_SIM2_SRST_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SRST_M_MD_SIM2_SRST   GPIO_MODE_01
#define GPIO_SIM2_SRST_M_MD_SIM1_SRST   GPIO_MODE_02
#define GPIO_SIM2_SRST_M_UIM0_RST   GPIO_MODE_03
#define GPIO_SIM2_SRST_M_UIM1_RST   GPIO_MODE_04

#define GPIO_SIM2_SIO         (GPIO162 | 0x80000000)
#define GPIO_SIM2_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SIO_M_MD_SIM2_SDAT   GPIO_MODE_01
#define GPIO_SIM2_SIO_M_MD_SIM1_SDAT   GPIO_MODE_02
#define GPIO_SIM2_SIO_M_UIM0_IO   GPIO_MODE_03
#define GPIO_SIM2_SIO_M_UIM1_IO   GPIO_MODE_04

#define GPIO_SIM1_SCLK         (GPIO163 | 0x80000000)
#define GPIO_SIM1_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM1_SCLK_M_MD_SIM2_SCLK   GPIO_MODE_02
#define GPIO_SIM1_SCLK_M_UIM1_CLK   GPIO_MODE_03
#define GPIO_SIM1_SCLK_M_UIM0_CLK   GPIO_MODE_04

#define GPIO_SIM1_SRST         (GPIO164 | 0x80000000)
#define GPIO_SIM1_SRST_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SRST_M_MD_SIM1_SRST   GPIO_MODE_01
#define GPIO_SIM1_SRST_M_MD_SIM2_SRST   GPIO_MODE_02
#define GPIO_SIM1_SRST_M_UIM1_RST   GPIO_MODE_03
#define GPIO_SIM1_SRST_M_UIM0_RST   GPIO_MODE_04

#define GPIO_SIM1_SIO         (GPIO165 | 0x80000000)
#define GPIO_SIM1_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SIO_M_MD_SIM1_SDAT   GPIO_MODE_01
#define GPIO_SIM1_SIO_M_MD_SIM2_SDAT   GPIO_MODE_02
#define GPIO_SIM1_SIO_M_UIM1_IO   GPIO_MODE_03
#define GPIO_SIM1_SIO_M_UIM0_IO   GPIO_MODE_04

#define GPIO_MSDC1_CMD         (GPIO166 | 0x80000000)
#define GPIO_MSDC1_CMD_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_CMD_M_MSDC1_CMD   GPIO_MODE_01
#define GPIO_MSDC1_CMD_M_LTE_MD32_JTAG_TMS   GPIO_MODE_02
#define GPIO_MSDC1_CMD_M_C2K_TMS   GPIO_MODE_03
#define GPIO_MSDC1_CMD_M_TDD_TMS   GPIO_MODE_04
#define GPIO_MSDC1_CMD_M_CONN_DSP_JMS   GPIO_MODE_05
#define GPIO_MSDC1_CMD_M_JTMS   GPIO_MODE_06
#define GPIO_MSDC1_CMD_M_CONN_MCU_AICE_TMSC   GPIO_MODE_07

#define GPIO_MSDC1_CLK         (GPIO167 | 0x80000000)
#define GPIO_MSDC1_CLK_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_CLK_M_CLK   GPIO_MODE_01
#define GPIO_MSDC1_CLK_M_LTE_MD32_JTAG_TCK   GPIO_MODE_02
#define GPIO_MSDC1_CLK_M_C2K_TCK   GPIO_MODE_03
#define GPIO_MSDC1_CLK_M_TDD_TCK   GPIO_MODE_04
#define GPIO_MSDC1_CLK_M_CONN_DSP_JCK   GPIO_MODE_05
#define GPIO_MSDC1_CLK_M_JTCK   GPIO_MODE_06
#define GPIO_MSDC1_CLK_M_CONN_MCU_AICE_TCKC   GPIO_MODE_07

#define GPIO_MSDC1_DAT0         (GPIO168 | 0x80000000)
#define GPIO_MSDC1_DAT0_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT0_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT0_M_LTE_MD32_JTAG_TDI   GPIO_MODE_02
#define GPIO_MSDC1_DAT0_M_C2K_TDI   GPIO_MODE_03
#define GPIO_MSDC1_DAT0_M_TDD_TDI   GPIO_MODE_04
#define GPIO_MSDC1_DAT0_M_CONN_DSP_JDI   GPIO_MODE_05
#define GPIO_MSDC1_DAT0_M_JTDI   GPIO_MODE_06

#define GPIO_MSDC1_DAT1         (GPIO169 | 0x80000000)
#define GPIO_MSDC1_DAT1_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT1_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT1_M_LTE_MD32_JTAG_TDO   GPIO_MODE_02
#define GPIO_MSDC1_DAT1_M_C2K_TDO   GPIO_MODE_03
#define GPIO_MSDC1_DAT1_M_TDD_TDO   GPIO_MODE_04
#define GPIO_MSDC1_DAT1_M_CONN_DSP_JDO   GPIO_MODE_05
#define GPIO_MSDC1_DAT1_M_JTDO   GPIO_MODE_06

#define GPIO_MSDC1_DAT2         (GPIO170 | 0x80000000)
#define GPIO_MSDC1_DAT2_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT2_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT2_M_LTE_MD32_JTAG_TRST   GPIO_MODE_02
#define GPIO_MSDC1_DAT2_M_C2K_NTRST   GPIO_MODE_03
#define GPIO_MSDC1_DAT2_M_TDD_TRSTN   GPIO_MODE_04
#define GPIO_MSDC1_DAT2_M_CONN_DSP_JINTP   GPIO_MODE_05
#define GPIO_MSDC1_DAT2_M_DM_JTINTP   GPIO_MODE_06

#define GPIO_MSDC1_DAT3         (GPIO171 | 0x80000000)
#define GPIO_MSDC1_DAT3_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT3_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT3_M_C2K_RTCK   GPIO_MODE_03

#define GPIO_MSDC0_CMD         (GPIO172 | 0x80000000)
#define GPIO_MSDC0_CMD_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_CMD_M_MSDC0_CMD   GPIO_MODE_01

#define GPIO_MSDC0_DSL         (GPIO173 | 0x80000000)
#define GPIO_MSDC0_DSL_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DSL_M_MSDC0_DSL   GPIO_MODE_01

#define GPIO_MSDC0_CLK         (GPIO174 | 0x80000000)
#define GPIO_MSDC0_CLK_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_CLK_M_CLK   GPIO_MODE_01

#define GPIO_MSDC0_DAT0         (GPIO175 | 0x80000000)
#define GPIO_MSDC0_DAT0_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT0_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT1         (GPIO176 | 0x80000000)
#define GPIO_MSDC0_DAT1_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT1_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT2         (GPIO177 | 0x80000000)
#define GPIO_MSDC0_DAT2_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT2_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT3         (GPIO178 | 0x80000000)
#define GPIO_MSDC0_DAT3_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT3_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT4         (GPIO179 | 0x80000000)
#define GPIO_MSDC0_DAT4_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT4_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT5         (GPIO180 | 0x80000000)
#define GPIO_MSDC0_DAT5_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT5_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT6         (GPIO181 | 0x80000000)
#define GPIO_MSDC0_DAT6_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT6_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT7         (GPIO182 | 0x80000000)
#define GPIO_MSDC0_DAT7_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT7_M_MSDC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_RSTB         (GPIO183 | 0x80000000)
#define GPIO_MSDC0_RSTB_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_RSTB_M_MSDC0_RSTB   GPIO_MODE_01

#define GPIO_MSDC2_CMD         (GPIO198 | 0x80000000)
#define GPIO_MSDC2_CMD_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC2_CMD_M_MSDC2_CMD   GPIO_MODE_01
#define GPIO_MSDC2_CMD_M_SDA   GPIO_MODE_02
#define GPIO_MSDC2_CMD_M_C2K_UART0_RXD   GPIO_MODE_03
#define GPIO_MSDC2_CMD_M_C2K_TMS   GPIO_MODE_04
#define GPIO_MSDC2_CMD_M_ANT_SEL   GPIO_MODE_05
#define GPIO_MSDC2_CMD_M_DM_OTMS   GPIO_MODE_07

#define GPIO_MSDC2_CLK         (GPIO199 | 0x80000000)
#define GPIO_MSDC2_CLK_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC2_CLK_M_CLK   GPIO_MODE_01
#define GPIO_MSDC2_CLK_M_SCL   GPIO_MODE_02
#define GPIO_MSDC2_CLK_M_C2K_UART0_TXD   GPIO_MODE_03
#define GPIO_MSDC2_CLK_M_C2K_TCK   GPIO_MODE_04
#define GPIO_MSDC2_CLK_M_ANT_SEL   GPIO_MODE_05
#define GPIO_MSDC2_CLK_M_TDD_TXD   GPIO_MODE_06
#define GPIO_MSDC2_CLK_M_DM_OTCK   GPIO_MODE_07


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */



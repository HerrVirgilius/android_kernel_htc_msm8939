/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "msm8x16_wcd_registers.h"
#include "msm8x16-wcd.h"

const u8 msm8x16_wcd_reg_readable[MSM8X16_WCD_CACHE_SIZE] = {
		[MSM8X16_WCD_A_DIGITAL_REVISION1] = 1,
		[MSM8X16_WCD_A_DIGITAL_REVISION2] = 1,
		[MSM8X16_WCD_A_DIGITAL_PERPH_TYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_PERPH_SUBTYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_RT_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_SET_TYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_HIGH] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_LOW] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_EN_SET] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_EN_CLR] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_LATCHED_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_PENDING_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_MID_SEL] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_PRIORITY] = 1,
		[MSM8X16_WCD_A_DIGITAL_GPIO_MODE] = 1,
		[MSM8X16_WCD_A_DIGITAL_PIN_CTL_OE] = 1,
		[MSM8X16_WCD_A_DIGITAL_PIN_CTL_DATA] = 1,
		[MSM8X16_WCD_A_DIGITAL_PIN_STATUS] = 1,
		[MSM8X16_WCD_A_DIGITAL_HDRIVE_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_RST_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_TOP_CLK_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_ANA_CLK_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_DIG_CLK_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX1_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX2_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_HPHR_DAC_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX1_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX2_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX3_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX_LB_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL1] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL2] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL3] = 1,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA0] = 1,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA1] = 1,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA2] = 1,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA3] = 1,
		[MSM8X16_WCD_A_DIGITAL_DIG_DEBUG_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_SPARE_0] = 1,
		[MSM8X16_WCD_A_DIGITAL_SPARE_1] = 1,
		[MSM8X16_WCD_A_DIGITAL_SPARE_2] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION1] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION2] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION3] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION4] = 1,
		[MSM8X16_WCD_A_ANALOG_PERPH_TYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_PERPH_SUBTYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_RT_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_SET_TYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_HIGH] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_LOW] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_EN_SET] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_EN_CLR] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_LATCHED_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_PENDING_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_MID_SEL] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_PRIORITY] = 1,
		[MSM8X16_WCD_A_ANALOG_MICB_1_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_MICB_1_VAL] = 1,
		[MSM8X16_WCD_A_ANALOG_MICB_1_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MICB_1_INT_RBIAS] = 1,
		[MSM8X16_WCD_A_ANALOG_MICB_2_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_ATEST_CTL_2] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_1] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_2] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_FSM_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_DBNC_TIMER] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN0_ZDETL_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN1_ZDETM_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN2_ZDETH_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN3_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN4_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN_RESULT] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_ZDET_ELECT_RESULT] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_2_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_1] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_2] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_ATEST_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_OPAMP_BIAS] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TXFE_CLKDIV] = 1,
		[MSM8X16_WCD_A_ANALOG_TX_3_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_CLK] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_DEGLITCH] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_FBCTRL] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_BIAS] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_VCTRL] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_TEST] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_CLOCK_DIVIDER] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_COM_OCP_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_COM_OCP_COUNT] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_COM_BIAS_DAC] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_PA] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_LDO_OCP] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_CNP] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_EN] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_TIME] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_L_TEST] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_L_PA_DAC_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_R_TEST] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_R_PA_DAC_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_EAR_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_ATEST] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_EAR_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DAC_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_CLIP_DET] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_ANA_BIAS_SET] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_OCP_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_PWRSTG_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_MISC] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_DBG] = 1,
		[MSM8X16_WCD_A_ANALOG_CURRENT_LIMIT] = 1,
		[MSM8X16_WCD_A_ANALOG_OUTPUT_VOLTAGE] = 1,
		[MSM8X16_WCD_A_ANALOG_BYPASS_MODE] = 1,
		[MSM8X16_WCD_A_ANALOG_BOOST_EN_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_SLOPE_COMP_IP_ZERO] = 1,
		[MSM8X16_WCD_A_ANALOG_RDSON_MAX_DUTY_CYCLE] = 1,
		[MSM8X16_WCD_A_ANALOG_BOOST_TEST1_1] = 1,
		[MSM8X16_WCD_A_ANALOG_BOOST_TEST_2] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_SAR_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_PBUS_ADD_CSR] = 1,
		[MSM8X16_WCD_A_ANALOG_PBUS_ADD_SEL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_RX_RESET_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_TX_RESET_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_DMIC_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_RX_I2S_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_TX_I2S_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_OTHR_RESET_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_TX_CLK_EN_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_OTHR_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_RX_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_MCLK_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_PDM_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_SD_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_WSA_VI_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B5_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B5_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B5_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TOP_GAIN_UPDATE] = 1,
		[MSM8X16_WCD_A_CDC_TOP_CTL] = 1,
		[MSM8X16_WCD_A_CDC_DEBUG_DESER1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_DEBUG_DESER2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_DEBUG_B1_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_DEBUG_B2_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_DEBUG_B3_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B5_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B5_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B7_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B7_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B8_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B8_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_TIMER_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_TIMER_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_COEF_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_COEF_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_COEF_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_COEF_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX3_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_RX3_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_TX_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B2_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B3_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B4_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CONN_TX_I2S_SD1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX1_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX2_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX3_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX1_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX2_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX3_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX1_DMIC_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX2_DMIC_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX3_DMIC_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_DMIC_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MASTER_BIAS_CTL] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_LATCHED_CLR] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_LATCHED_CLR] = 1,
		[MSM8X16_WCD_A_ANALOG_NCP_CLIM_ADDR] = 1,
		[MSM8X16_WCD_A_DIGITAL_SEC_ACCESS] = 1,
		[MSM8X16_WCD_A_DIGITAL_PERPH_RESET_CTL3] = 1,
		[MSM8X16_WCD_A_ANALOG_SEC_ACCESS] = 1,
};

const u8 msm8x16_wcd_reg_readonly[MSM8X16_WCD_CACHE_SIZE] = {
		[MSM8X16_WCD_A_DIGITAL_REVISION1] = 1,
		[MSM8X16_WCD_A_DIGITAL_REVISION2] = 1,
		[MSM8X16_WCD_A_DIGITAL_PERPH_TYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_PERPH_SUBTYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_RT_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_SET_TYPE] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_HIGH] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_LOW] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_LATCHED_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_INT_PENDING_STS] = 1,
		[MSM8X16_WCD_A_DIGITAL_PIN_STATUS] = 1,
		[MSM8X16_WCD_A_DIGITAL_SEC_ACCESS] = 1,
		[MSM8X16_WCD_A_ANALOG_SEC_ACCESS] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION1] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION2] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION3] = 1,
		[MSM8X16_WCD_A_ANALOG_REVISION4] = 1,
		[MSM8X16_WCD_A_ANALOG_PERPH_TYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_PERPH_SUBTYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_RT_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_SET_TYPE] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_HIGH] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_LOW] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_LATCHED_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_INT_PENDING_STS] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN_RESULT] = 1,
		[MSM8X16_WCD_A_ANALOG_MBHC_ZDET_ELECT_RESULT] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_RX_EAR_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_SAR_STATUS] = 1,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_STATUS] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX1_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX2_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_RX3_B6_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_IIR1_COEF_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_IIR2_COEF_B1_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_MCLK_CTL] = 1,
		[MSM8X16_WCD_A_CDC_CLK_PDM_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_BYPASS_MODE] = 1,
		[MSM8X16_WCD_A_ANALOG_BOOST_EN_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_MASTER_BIAS_CTL] = 1,
		[MSM8X16_WCD_A_ANALOG_CURRENT_LIMIT] = 1,
		[MSM8X16_WCD_A_DIGITAL_CDC_DIG_CLK_CTL] = 1,
		
		[MSM8X16_WCD_A_ANALOG_NCP_FBCTRL] = 1,

};

const u8 cajon_digital_reg[MSM8X16_WCD_CACHE_SIZE] = {
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_TIMER] = 1,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_GAIN] = 1,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_CFG] = 1,
		[MSM8X16_WCD_A_CDC_TX3_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_MUX_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX3_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_CLK_FS_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX3_DMIC_CTL] = 1,
		[MSM8X16_WCD_A_CDC_TX4_DMIC_CTL] = 1,
};

const u8 msm8x16_wcd_reset_reg_defaults[MSM8X16_WCD_CACHE_SIZE] = {
		[MSM8X16_WCD_A_DIGITAL_REVISION1] =
			MSM8X16_WCD_A_DIGITAL_REVISION1__POR,
		[MSM8X16_WCD_A_DIGITAL_REVISION2] =
			MSM8X16_WCD_A_DIGITAL_REVISION2__POR,
		[MSM8X16_WCD_A_DIGITAL_PERPH_TYPE] =
			MSM8X16_WCD_A_DIGITAL_PERPH_TYPE__POR,
		[MSM8X16_WCD_A_DIGITAL_PERPH_SUBTYPE] =
			MSM8X16_WCD_A_DIGITAL_PERPH_SUBTYPE__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_RT_STS] =
			MSM8X16_WCD_A_DIGITAL_INT_RT_STS__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_SET_TYPE] =
			MSM8X16_WCD_A_DIGITAL_INT_SET_TYPE__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_HIGH] =
			MSM8X16_WCD_A_DIGITAL_INT_POLARITY_HIGH__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_POLARITY_LOW] =
			MSM8X16_WCD_A_DIGITAL_INT_POLARITY_LOW__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_LATCHED_CLR] =
			MSM8X16_WCD_A_DIGITAL_INT_LATCHED_CLR__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_EN_SET] =
			MSM8X16_WCD_A_DIGITAL_INT_EN_SET__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_EN_CLR] =
			MSM8X16_WCD_A_DIGITAL_INT_EN_CLR__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_LATCHED_STS] =
			MSM8X16_WCD_A_DIGITAL_INT_LATCHED_STS__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_PENDING_STS] =
			MSM8X16_WCD_A_DIGITAL_INT_PENDING_STS__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_MID_SEL] =
			MSM8X16_WCD_A_DIGITAL_INT_MID_SEL__POR,
		[MSM8X16_WCD_A_DIGITAL_INT_PRIORITY] =
			MSM8X16_WCD_A_DIGITAL_INT_PRIORITY__POR,
		[MSM8X16_WCD_A_DIGITAL_GPIO_MODE] =
			MSM8X16_WCD_A_DIGITAL_GPIO_MODE__POR,
		[MSM8X16_WCD_A_DIGITAL_PIN_CTL_OE] =
			MSM8X16_WCD_A_DIGITAL_PIN_CTL_OE__POR,
		[MSM8X16_WCD_A_DIGITAL_PIN_CTL_DATA] =
			MSM8X16_WCD_A_DIGITAL_PIN_CTL_DATA__POR,
		[MSM8X16_WCD_A_DIGITAL_PIN_STATUS] =
			MSM8X16_WCD_A_DIGITAL_PIN_STATUS__POR,
		[MSM8X16_WCD_A_DIGITAL_HDRIVE_CTL] =
			MSM8X16_WCD_A_DIGITAL_HDRIVE_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_RST_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_RST_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_TOP_CLK_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_TOP_CLK_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_ANA_CLK_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_ANA_CLK_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_DIG_CLK_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_DIG_CLK_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX1_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX1_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX2_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_TX2_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_HPHR_DAC_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_HPHR_DAC_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX1_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX1_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX2_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX2_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX3_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX3_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX_LB_CTL] =
			MSM8X16_WCD_A_DIGITAL_CDC_CONN_RX_LB_CTL__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL1] =
			MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL1__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL2] =
			MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL2__POR,
		[MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL3] =
			MSM8X16_WCD_A_DIGITAL_CDC_RX_CTL3__POR,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA0] =
			MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA0__POR,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA1] =
			MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA1__POR,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA2] =
			MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA2__POR,
		[MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA3] =
			MSM8X16_WCD_A_DIGITAL_DEM_BYPASS_DATA3__POR,
		[MSM8X16_WCD_A_DIGITAL_SPARE_0] =
			MSM8X16_WCD_A_DIGITAL_SPARE_0__POR,
		[MSM8X16_WCD_A_DIGITAL_SPARE_1] =
			MSM8X16_WCD_A_DIGITAL_SPARE_1__POR,
		[MSM8X16_WCD_A_DIGITAL_SPARE_2] =
			MSM8X16_WCD_A_DIGITAL_SPARE_2__POR,
		[MSM8X16_WCD_A_ANALOG_REVISION1] =
			MSM8X16_WCD_A_ANALOG_REVISION1__POR,
		[MSM8X16_WCD_A_ANALOG_REVISION2] =
			MSM8X16_WCD_A_ANALOG_REVISION2__POR,
		[MSM8X16_WCD_A_ANALOG_REVISION3] =
			MSM8X16_WCD_A_ANALOG_REVISION3__POR,
		[MSM8X16_WCD_A_ANALOG_REVISION4] =
			MSM8X16_WCD_A_ANALOG_REVISION4__POR,
		[MSM8X16_WCD_A_ANALOG_PERPH_TYPE] =
			MSM8X16_WCD_A_ANALOG_PERPH_TYPE__POR,
		[MSM8X16_WCD_A_ANALOG_PERPH_SUBTYPE] =
			MSM8X16_WCD_A_ANALOG_PERPH_SUBTYPE__POR,
		[MSM8X16_WCD_A_ANALOG_INT_RT_STS] =
			MSM8X16_WCD_A_ANALOG_INT_RT_STS__POR,
		[MSM8X16_WCD_A_ANALOG_INT_SET_TYPE] =
			MSM8X16_WCD_A_ANALOG_INT_SET_TYPE__POR,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_HIGH] =
			MSM8X16_WCD_A_ANALOG_INT_POLARITY_HIGH__POR,
		[MSM8X16_WCD_A_ANALOG_INT_POLARITY_LOW] =
			MSM8X16_WCD_A_ANALOG_INT_POLARITY_LOW__POR,
		[MSM8X16_WCD_A_ANALOG_INT_LATCHED_CLR] =
			MSM8X16_WCD_A_ANALOG_INT_LATCHED_CLR__POR,
		[MSM8X16_WCD_A_ANALOG_INT_EN_SET] =
			MSM8X16_WCD_A_ANALOG_INT_EN_SET__POR,
		[MSM8X16_WCD_A_ANALOG_INT_EN_CLR] =
			MSM8X16_WCD_A_ANALOG_INT_EN_CLR__POR,
		[MSM8X16_WCD_A_ANALOG_INT_LATCHED_STS] =
			MSM8X16_WCD_A_ANALOG_INT_LATCHED_STS__POR,
		[MSM8X16_WCD_A_ANALOG_INT_PENDING_STS] =
			MSM8X16_WCD_A_ANALOG_INT_PENDING_STS__POR,
		[MSM8X16_WCD_A_ANALOG_INT_MID_SEL] =
			MSM8X16_WCD_A_ANALOG_INT_MID_SEL__POR,
		[MSM8X16_WCD_A_ANALOG_INT_PRIORITY] =
			MSM8X16_WCD_A_ANALOG_INT_PRIORITY__POR,
		[MSM8X16_WCD_A_ANALOG_MICB_1_EN] =
			MSM8X16_WCD_A_ANALOG_MICB_1_EN__POR,
		[MSM8X16_WCD_A_ANALOG_MICB_1_VAL] =
			MSM8X16_WCD_A_ANALOG_MICB_1_VAL__POR,
		[MSM8X16_WCD_A_ANALOG_MICB_1_CTL] =
			MSM8X16_WCD_A_ANALOG_MICB_1_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MICB_1_INT_RBIAS] =
			MSM8X16_WCD_A_ANALOG_MICB_1_INT_RBIAS__POR,
		[MSM8X16_WCD_A_ANALOG_MICB_2_EN] =
			MSM8X16_WCD_A_ANALOG_MICB_2_EN__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_1] =
			MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_1__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_2] =
			MSM8X16_WCD_A_ANALOG_MBHC_DET_CTL_2__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_FSM_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_FSM_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_DBNC_TIMER] =
			MSM8X16_WCD_A_ANALOG_MBHC_DBNC_TIMER__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN0_ZDETL_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN0_ZDETL_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN1_ZDETM_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN1_ZDETM_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN2_ZDETH_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN2_ZDETH_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN3_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN3_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN4_CTL] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN4_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_BTN_RESULT] =
			MSM8X16_WCD_A_ANALOG_MBHC_BTN_RESULT__POR,
		[MSM8X16_WCD_A_ANALOG_MBHC_ZDET_ELECT_RESULT] =
			MSM8X16_WCD_A_ANALOG_MBHC_ZDET_ELECT_RESULT__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_EN] =
			MSM8X16_WCD_A_ANALOG_TX_1_EN__POR,
		[MSM8X16_WCD_A_ANALOG_TX_2_EN] =
			MSM8X16_WCD_A_ANALOG_TX_2_EN__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_1] =
			MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_1__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_2] =
			MSM8X16_WCD_A_ANALOG_TX_1_2_TEST_CTL_2__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_ATEST_CTL] =
			MSM8X16_WCD_A_ANALOG_TX_1_2_ATEST_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_OPAMP_BIAS] =
			MSM8X16_WCD_A_ANALOG_TX_1_2_OPAMP_BIAS__POR,
		[MSM8X16_WCD_A_ANALOG_TX_1_2_TXFE_CLKDIV] =
			MSM8X16_WCD_A_ANALOG_TX_1_2_TXFE_CLKDIV__POR,
		[MSM8X16_WCD_A_ANALOG_TX_3_EN] =
			MSM8X16_WCD_A_ANALOG_TX_3_EN__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_EN] =
			MSM8X16_WCD_A_ANALOG_NCP_EN__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_CLK] =
			MSM8X16_WCD_A_ANALOG_NCP_CLK__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_DEGLITCH] =
			MSM8X16_WCD_A_ANALOG_NCP_DEGLITCH__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_FBCTRL] =
			MSM8X16_WCD_A_ANALOG_NCP_FBCTRL__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_BIAS] =
			MSM8X16_WCD_A_ANALOG_NCP_BIAS__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_VCTRL] =
			MSM8X16_WCD_A_ANALOG_NCP_VCTRL__POR,
		[MSM8X16_WCD_A_ANALOG_NCP_TEST] =
			MSM8X16_WCD_A_ANALOG_NCP_TEST__POR,
		[MSM8X16_WCD_A_ANALOG_RX_CLOCK_DIVIDER] =
			MSM8X16_WCD_A_ANALOG_RX_CLOCK_DIVIDER__POR,
		[MSM8X16_WCD_A_ANALOG_RX_COM_OCP_CTL] =
			MSM8X16_WCD_A_ANALOG_RX_COM_OCP_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_RX_COM_OCP_COUNT] =
			MSM8X16_WCD_A_ANALOG_RX_COM_OCP_COUNT__POR,
		[MSM8X16_WCD_A_ANALOG_RX_COM_BIAS_DAC] =
			MSM8X16_WCD_A_ANALOG_RX_COM_BIAS_DAC__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_PA] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_PA__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_LDO_OCP] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_LDO_OCP__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_CNP] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_BIAS_CNP__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_EN] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_EN__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_CTL] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_TIME] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_CNP_WG_TIME__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_L_TEST] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_L_TEST__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_L_PA_DAC_CTL] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_L_PA_DAC_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_R_TEST] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_R_TEST__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_R_PA_DAC_CTL] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_R_PA_DAC_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_RX_EAR_CTL] =
			MSM8X16_WCD_A_ANALOG_RX_EAR_CTL___POR,
		[MSM8X16_WCD_A_ANALOG_RX_ATEST] =
			MSM8X16_WCD_A_ANALOG_RX_ATEST__POR,
		[MSM8X16_WCD_A_ANALOG_RX_HPH_STATUS] =
			MSM8X16_WCD_A_ANALOG_RX_HPH_STATUS__POR,
		[MSM8X16_WCD_A_ANALOG_RX_EAR_STATUS] =
			MSM8X16_WCD_A_ANALOG_RX_EAR_STATUS__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DAC_CTL] =
			MSM8X16_WCD_A_ANALOG_SPKR_DAC_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_CLIP_DET] =
			MSM8X16_WCD_A_ANALOG_SPKR_DRV_CLIP_DET__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_CTL] =
			MSM8X16_WCD_A_ANALOG_SPKR_DRV_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_ANA_BIAS_SET] =
			MSM8X16_WCD_A_ANALOG_SPKR_ANA_BIAS_SET__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_OCP_CTL] =
			MSM8X16_WCD_A_ANALOG_SPKR_OCP_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_PWRSTG_CTL] =
			MSM8X16_WCD_A_ANALOG_SPKR_PWRSTG_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_MISC] =
			MSM8X16_WCD_A_ANALOG_SPKR_DRV_MISC__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_DBG] =
			MSM8X16_WCD_A_ANALOG_SPKR_DRV_DBG__POR,
		[MSM8X16_WCD_A_ANALOG_CURRENT_LIMIT] =
			MSM8X16_WCD_A_ANALOG_CURRENT_LIMIT__POR,
		[MSM8X16_WCD_A_ANALOG_OUTPUT_VOLTAGE] =
			MSM8X16_WCD_A_ANALOG_OUTPUT_VOLTAGE__POR,
		[MSM8X16_WCD_A_ANALOG_BYPASS_MODE] =
			MSM8X16_WCD_A_ANALOG_BYPASS_MODE__POR,
		[MSM8X16_WCD_A_ANALOG_BOOST_EN_CTL] =
			MSM8X16_WCD_A_ANALOG_BOOST_EN_CTL__POR,
		[MSM8X16_WCD_A_ANALOG_SLOPE_COMP_IP_ZERO] =
			MSM8X16_WCD_A_ANALOG_SLOPE_COMP_IP_ZERO__POR,
		[MSM8X16_WCD_A_ANALOG_RDSON_MAX_DUTY_CYCLE] =
			MSM8X16_WCD_A_ANALOG_RDSON_MAX_DUTY_CYCLE__POR,
		[MSM8X16_WCD_A_ANALOG_BOOST_TEST1_1] =
			MSM8X16_WCD_A_ANALOG_BOOST_TEST1_1__POR,
		[MSM8X16_WCD_A_ANALOG_BOOST_TEST_2] =
			MSM8X16_WCD_A_ANALOG_BOOST_TEST_2__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_SAR_STATUS] =
			MSM8X16_WCD_A_ANALOG_SPKR_SAR_STATUS__POR,
		[MSM8X16_WCD_A_ANALOG_SPKR_DRV_STATUS] =
			MSM8X16_WCD_A_ANALOG_SPKR_DRV_STATUS__POR,
		[MSM8X16_WCD_A_ANALOG_PBUS_ADD_CSR] =
			MSM8X16_WCD_A_ANALOG_PBUS_ADD_CSR__POR,
		[MSM8X16_WCD_A_ANALOG_PBUS_ADD_SEL] =
			MSM8X16_WCD_A_ANALOG_PBUS_ADD_SEL__POR,
		[MSM8X16_WCD_A_CDC_CLK_RX_RESET_CTL] =
			MSM8X16_WCD_A_CDC_CLK_RX_RESET_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_TX_RESET_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_TX_RESET_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_DMIC_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_DMIC_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_RX_I2S_CTL] =
			MSM8X16_WCD_A_CDC_CLK_RX_I2S_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_TX_I2S_CTL] =
			MSM8X16_WCD_A_CDC_CLK_TX_I2S_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_OTHR_RESET_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_OTHR_RESET_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_TX_CLK_EN_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_TX_CLK_EN_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_OTHR_CTL] =
			MSM8X16_WCD_A_CDC_CLK_OTHR_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_RX_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_RX_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_MCLK_CTL] =
			MSM8X16_WCD_A_CDC_CLK_MCLK_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_PDM_CTL] =
			MSM8X16_WCD_A_CDC_CLK_PDM_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_SD_CTL] =
			MSM8X16_WCD_A_CDC_CLK_SD_CTL__POR,
		[MSM8X16_WCD_A_CDC_CLK_WSA_VI_B1_CTL] =
			MSM8X16_WCD_A_CDC_CLK_WSA_VI_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B3_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B3_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B3_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B4_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B4_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B4_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B5_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B5_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B5_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B5_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B5_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B5_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_B6_CTL] =
			MSM8X16_WCD_A_CDC_RX1_B6_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_B6_CTL] =
			MSM8X16_WCD_A_CDC_RX2_B6_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_B6_CTL] =
			MSM8X16_WCD_A_CDC_RX3_B6_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B1_CTL] =
			MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX1_VOL_CTL_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX2_VOL_CTL_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B2_CTL] =
			MSM8X16_WCD_A_CDC_RX3_VOL_CTL_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_TOP_GAIN_UPDATE] =
			MSM8X16_WCD_A_CDC_TOP_GAIN_UPDATE__POR,
		[MSM8X16_WCD_A_CDC_TOP_CTL] =
			MSM8X16_WCD_A_CDC_TOP_CTL__POR,
		[MSM8X16_WCD_A_CDC_DEBUG_DESER1_CTL] =
			MSM8X16_WCD_A_CDC_DEBUG_DESER1_CTL__POR,
		[MSM8X16_WCD_A_CDC_DEBUG_DESER2_CTL] =
			MSM8X16_WCD_A_CDC_DEBUG_DESER2_CTL__POR,
		[MSM8X16_WCD_A_CDC_DEBUG_B1_CTL_CFG] =
			MSM8X16_WCD_A_CDC_DEBUG_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_DEBUG_B2_CTL_CFG] =
			MSM8X16_WCD_A_CDC_DEBUG_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_DEBUG_B3_CTL_CFG] =
			MSM8X16_WCD_A_CDC_DEBUG_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B1_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B1_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B2_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B2_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B3_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B3_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B4_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B4_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B5_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B5_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B5_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B5_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B6_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B6_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B6_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B6_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B7_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B7_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B7_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B7_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_B8_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_B8_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_B8_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_B8_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_GAIN_TIMER_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_GAIN_TIMER_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_GAIN_TIMER_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_GAIN_TIMER_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_COEF_B1_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_COEF_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_COEF_B1_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_COEF_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR1_COEF_B2_CTL] =
			MSM8X16_WCD_A_CDC_IIR1_COEF_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_IIR2_COEF_B2_CTL] =
			MSM8X16_WCD_A_CDC_IIR2_COEF_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX1_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B2_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX1_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX1_B3_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX1_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX2_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B2_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX2_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX2_B3_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX2_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX3_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX3_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_RX3_B2_CTL] =
			MSM8X16_WCD_A_CDC_CONN_RX3_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_TX_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_TX_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ1_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B2_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ1_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B3_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ1_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ1_B4_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ1_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ2_B1_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B2_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ2_B2_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B3_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ2_B3_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_EQ2_B4_CTL] =
			MSM8X16_WCD_A_CDC_CONN_EQ2_B4_CTL__POR,
		[MSM8X16_WCD_A_CDC_CONN_TX_I2S_SD1_CTL] =
			MSM8X16_WCD_A_CDC_CONN_TX_I2S_SD1_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_TIMER] =
			MSM8X16_WCD_A_CDC_TX1_VOL_CTL_TIMER__POR,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_TIMER] =
			MSM8X16_WCD_A_CDC_TX2_VOL_CTL_TIMER__POR,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_TIMER] =
			MSM8X16_WCD_A_CDC_TX3_VOL_CTL_TIMER__POR,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_TIMER] =
			MSM8X16_WCD_A_CDC_TX4_VOL_CTL_TIMER__POR,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_GAIN] =
			MSM8X16_WCD_A_CDC_TX1_VOL_CTL_GAIN__POR,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_GAIN] =
			MSM8X16_WCD_A_CDC_TX2_VOL_CTL_GAIN__POR,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_GAIN] =
			MSM8X16_WCD_A_CDC_TX3_VOL_CTL_GAIN__POR,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_GAIN] =
			MSM8X16_WCD_A_CDC_TX4_VOL_CTL_GAIN__POR,
		[MSM8X16_WCD_A_CDC_TX1_VOL_CTL_CFG] =
			MSM8X16_WCD_A_CDC_TX1_VOL_CTL_CFG__POR,
		[MSM8X16_WCD_A_CDC_TX2_VOL_CTL_CFG] =
			MSM8X16_WCD_A_CDC_TX2_VOL_CTL_CFG__POR,
		[MSM8X16_WCD_A_CDC_TX3_VOL_CTL_CFG] =
			MSM8X16_WCD_A_CDC_TX3_VOL_CTL_CFG__POR,
		[MSM8X16_WCD_A_CDC_TX4_VOL_CTL_CFG] =
			MSM8X16_WCD_A_CDC_TX4_VOL_CTL_CFG__POR,
		[MSM8X16_WCD_A_CDC_TX1_MUX_CTL] =
			MSM8X16_WCD_A_CDC_TX1_MUX_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX2_MUX_CTL] =
			MSM8X16_WCD_A_CDC_TX2_MUX_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX3_MUX_CTL] =
			MSM8X16_WCD_A_CDC_TX3_MUX_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX4_MUX_CTL] =
			MSM8X16_WCD_A_CDC_TX4_MUX_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX1_CLK_FS_CTL] =
			MSM8X16_WCD_A_CDC_TX1_CLK_FS_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX2_CLK_FS_CTL] =
			MSM8X16_WCD_A_CDC_TX2_CLK_FS_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX3_CLK_FS_CTL] =
			MSM8X16_WCD_A_CDC_TX3_CLK_FS_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX4_CLK_FS_CTL] =
			MSM8X16_WCD_A_CDC_TX4_CLK_FS_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX1_DMIC_CTL] =
			MSM8X16_WCD_A_CDC_TX1_DMIC_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX2_DMIC_CTL] =
			MSM8X16_WCD_A_CDC_TX2_DMIC_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX3_DMIC_CTL] =
			MSM8X16_WCD_A_CDC_TX3_DMIC_CTL__POR,
		[MSM8X16_WCD_A_CDC_TX4_DMIC_CTL] =
			MSM8X16_WCD_A_CDC_TX4_DMIC_CTL__POR,
};

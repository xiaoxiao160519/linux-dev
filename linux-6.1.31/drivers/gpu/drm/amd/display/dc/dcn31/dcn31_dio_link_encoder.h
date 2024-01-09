/*
 * Copyright 2012-15 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: AMD
 *
 */

#ifndef __DC_LINK_ENCODER__DCN31_H__
#define __DC_LINK_ENCODER__DCN31_H__

#include "dcn30/dcn30_dio_link_encoder.h"


#define LE_DCN31_REG_LIST(id)\
	LE_DCN3_REG_LIST(id),\
	SRI(DP_DPHY_INTERNAL_CTRL, DP, id), \
	SR(DIO_LINKA_CNTL), \
	SR(DIO_LINKB_CNTL), \
	SR(DIO_LINKC_CNTL), \
	SR(DIO_LINKD_CNTL), \
	SR(DIO_LINKE_CNTL), \
	SR(DIO_LINKF_CNTL)

#define LINK_ENCODER_MASK_SH_LIST_DCN31(mask_sh) \
	LINK_ENCODER_MASK_SH_LIST_DCN10(mask_sh),\
	LE_SF(DP0_DP_DPHY_CNTL, DPHY_FEC_EN, mask_sh),\
	LE_SF(DP0_DP_DPHY_CNTL, DPHY_FEC_READY_SHADOW, mask_sh),\
	LE_SF(DP0_DP_DPHY_CNTL, DPHY_FEC_ACTIVE_STATUS, mask_sh),\
	LE_SF(DIG0_TMDS_CTL_BITS, TMDS_CTL0, mask_sh), \
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_START_WINDOW, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_HALF_SYM_DETECT_LEN, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_TRANSITION_FILTER_EN, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_ALLOW_BELOW_THRESHOLD_PHASE_DETECT, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_ALLOW_BELOW_THRESHOLD_START, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_ALLOW_BELOW_THRESHOLD_STOP, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_PHASE_DETECT_LEN, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL0, AUX_RX_DETECTION_THRESHOLD, mask_sh), \
	LE_SF(DP_AUX0_AUX_DPHY_TX_CONTROL, AUX_TX_PRECHARGE_LEN, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_TX_CONTROL, AUX_TX_PRECHARGE_SYMBOLS, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_TX_CONTROL, AUX_MODE_DET_CHECK_DELAY, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL1, AUX_RX_PRECHARGE_SKIP, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL1, AUX_RX_TIMEOUT_LEN, mask_sh),\
	LE_SF(DP_AUX0_AUX_DPHY_RX_CONTROL1, AUX_RX_TIMEOUT_LEN_MUL, mask_sh),\
	LE_SF(DIO_LINKA_CNTL, ENC_TYPE_SEL, mask_sh),\
	LE_SF(DIO_LINKA_CNTL, HPO_DP_ENC_SEL, mask_sh),\
	LE_SF(DIO_LINKA_CNTL, HPO_HDMI_ENC_SEL, mask_sh)

#define DPCS_DCN31_REG_LIST(id) \
	SRI(TMDS_CTL_BITS, DIG, id), \
	SRI(RDPCSTX_PHY_CNTL3, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL4, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL5, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL6, RDPCSTX, id), \
	SRI(RDPCSPIPE_PHY_CNTL6, RDPCSPIPE, id), \
	SRI(RDPCSTX_PHY_CNTL7, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL8, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL9, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL10, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL11, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL12, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL13, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL14, RDPCSTX, id), \
	SRI(RDPCSTX_CNTL, RDPCSTX, id), \
	SRI(RDPCSTX_CLOCK_CNTL, RDPCSTX, id), \
	SRI(RDPCSTX_INTERRUPT_CONTROL, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL0, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL2, RDPCSTX, id), \
	SRI(RDPCS_TX_CR_ADDR, RDPCSTX, id), \
	SRI(RDPCS_TX_CR_DATA, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE0, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE1, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE2, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE3, RDPCSTX, id), \
	SR(RDPCSTX0_RDPCSTX_SCRATCH), \
	SRI(RDPCSTX_PHY_RX_LD_VAL, RDPCSTX, id),\
	SRI(RDPCSTX_DMCU_DPALT_DIS_BLOCK_REG, RDPCSTX, id)

#define DPCS_DCN31_MASK_SH_LIST(mask_sh)\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_CLK_RDY, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_DATA_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_CLK_RDY, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_DATA_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_CLK_RDY, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_DATA_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_CLK_RDY, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_DATA_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL4, RDPCS_PHY_DP_TX0_TERM_CTRL, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL4, RDPCS_PHY_DP_TX1_TERM_CTRL, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL4, RDPCS_PHY_DP_TX2_TERM_CTRL, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL4, RDPCS_PHY_DP_TX3_TERM_CTRL, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL11, RDPCS_PHY_DP_MPLLB_MULTIPLIER, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL5, RDPCS_PHY_DP_TX0_WIDTH, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL5, RDPCS_PHY_DP_TX0_RATE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL5, RDPCS_PHY_DP_TX1_WIDTH, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL5, RDPCS_PHY_DP_TX1_RATE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL6, RDPCS_PHY_DP_TX2_PSTATE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL6, RDPCS_PHY_DP_TX3_PSTATE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL6, RDPCS_PHY_DP_TX2_MPLL_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL6, RDPCS_PHY_DP_TX3_MPLL_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL6, RDPCS_PHY_DPALT_DP4, mask_sh),\
	LE_SF(RDPCSPIPE0_RDPCSPIPE_PHY_CNTL6, RDPCS_PHY_DPALT_DP4, mask_sh),\
	LE_SF(RDPCSPIPE0_RDPCSPIPE_PHY_CNTL6, RDPCS_PHY_DPALT_DISABLE, mask_sh),\
	LE_SF(RDPCSPIPE0_RDPCSPIPE_PHY_CNTL6, RDPCS_PHY_DPALT_DISABLE_ACK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL7, RDPCS_PHY_DP_MPLLB_FRACN_QUOT, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL7, RDPCS_PHY_DP_MPLLB_FRACN_DEN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL8, RDPCS_PHY_DP_MPLLB_SSC_PEAK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL9, RDPCS_PHY_DP_MPLLB_SSC_UP_SPREAD, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL9, RDPCS_PHY_DP_MPLLB_SSC_STEPSIZE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL10, RDPCS_PHY_DP_MPLLB_FRACN_REM, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL11, RDPCS_PHY_DP_REF_CLK_MPLLB_DIV, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL11, RDPCS_PHY_HDMI_MPLLB_HDMI_DIV, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL12, RDPCS_PHY_DP_MPLLB_SSC_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL12, RDPCS_PHY_DP_MPLLB_DIV5_CLK_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL12, RDPCS_PHY_DP_MPLLB_TX_CLK_DIV, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL12, RDPCS_PHY_DP_MPLLB_WORD_DIV2_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL12, RDPCS_PHY_DP_MPLLB_STATE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL13, RDPCS_PHY_DP_MPLLB_DIV_CLK_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL13, RDPCS_PHY_DP_MPLLB_DIV_MULTIPLIER, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL14, RDPCS_PHY_DP_MPLLB_FRACN_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL14, RDPCS_PHY_DP_MPLLB_PMIX_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_LANE0_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_LANE1_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_LANE2_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_LANE3_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CNTL, RDPCS_TX_FIFO_RD_START_DELAY, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_EXT_REFCLK_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SRAMCLK_BYPASS, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SRAMCLK_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SRAMCLK_CLOCK_ON, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SYMCLK_DIV2_CLOCK_ON, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SYMCLK_DIV2_GATE_DIS, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_CLOCK_CNTL, RDPCS_SYMCLK_DIV2_EN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_DISABLE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_DISABLE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_DISABLE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_DISABLE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_REQ, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_REQ, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_REQ, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_REQ, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_ACK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_ACK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_ACK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_ACK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX0_RESET, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX1_RESET, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX2_RESET, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL3, RDPCS_PHY_DP_TX3_RESET, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_PHY_RESET, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_PHY_CR_MUX_SEL, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_PHY_REF_RANGE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_SRAM_BYPASS, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_SRAM_EXT_LD_DONE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_PHY_HDMIMODE_ENABLE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL0, RDPCS_SRAM_INIT_DONE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_CNTL2, RDPCS_PHY_DP4_POR, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_INTERRUPT_CONTROL, RDPCS_REG_FIFO_ERROR_MASK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_INTERRUPT_CONTROL, RDPCS_TX_FIFO_ERROR_MASK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_INTERRUPT_CONTROL, RDPCS_DPALT_DISABLE_TOGGLE_MASK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_INTERRUPT_CONTROL, RDPCS_DPALT_4LANE_TOGGLE_MASK, mask_sh),\
	LE_SF(RDPCSTX0_RDPCS_TX_CR_ADDR, RDPCS_TX_CR_ADDR, mask_sh),\
	LE_SF(RDPCSTX0_RDPCS_TX_CR_DATA, RDPCS_TX_CR_DATA, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE0, RDPCS_PHY_DP_MPLLB_V2I, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE0, RDPCS_PHY_DP_TX0_EQ_MAIN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE0, RDPCS_PHY_DP_TX0_EQ_PRE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE0, RDPCS_PHY_DP_TX0_EQ_POST, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE0, RDPCS_PHY_DP_MPLLB_FREQ_VCO, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE1, RDPCS_PHY_DP_MPLLB_CP_INT, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE1, RDPCS_PHY_DP_MPLLB_CP_PROP, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE1, RDPCS_PHY_DP_TX1_EQ_MAIN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE1, RDPCS_PHY_DP_TX1_EQ_PRE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE1, RDPCS_PHY_DP_TX1_EQ_POST, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE2, RDPCS_PHY_DP_TX2_EQ_MAIN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE2, RDPCS_PHY_DP_TX2_EQ_PRE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE2, RDPCS_PHY_DP_TX2_EQ_POST, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE3, RDPCS_PHY_DP_TX3_EQ_MAIN, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE3, RDPCS_PHY_DCO_FINETUNE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE3, RDPCS_PHY_DCO_RANGE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE3, RDPCS_PHY_DP_TX3_EQ_PRE, mask_sh),\
	LE_SF(RDPCSTX0_RDPCSTX_PHY_FUSE3, RDPCS_PHY_DP_TX3_EQ_POST, mask_sh)

#define DPCS_DCN314_REG_LIST(id) \
	SRI(TMDS_CTL_BITS, DIG, id), \
	SRI(RDPCSTX_PHY_CNTL3, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL4, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL5, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL7, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL8, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL9, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL10, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL11, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL12, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL13, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL14, RDPCSTX, id), \
	SRI(RDPCSTX_CNTL, RDPCSTX, id), \
	SRI(RDPCSTX_CLOCK_CNTL, RDPCSTX, id), \
	SRI(RDPCSTX_INTERRUPT_CONTROL, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL0, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_CNTL2, RDPCSTX, id), \
	SRI(RDPCS_TX_CR_ADDR, RDPCSTX, id), \
	SRI(RDPCS_TX_CR_DATA, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE0, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE1, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE2, RDPCSTX, id), \
	SRI(RDPCSTX_PHY_FUSE3, RDPCSTX, id), \
	SR(RDPCSTX0_RDPCSTX_SCRATCH), \
	SRI(RDPCSTX_PHY_RX_LD_VAL, RDPCSTX, id),\
	SRI(RDPCSTX_DMCU_DPALT_DIS_BLOCK_REG, RDPCSTX, id)

void dcn31_link_encoder_construct(
	struct dcn20_link_encoder *enc20,
	const struct encoder_init_data *init_data,
	const struct encoder_feature_support *enc_features,
	const struct dcn10_link_enc_registers *link_regs,
	const struct dcn10_link_enc_aux_registers *aux_regs,
	const struct dcn10_link_enc_hpd_registers *hpd_regs,
	const struct dcn10_link_enc_shift *link_shift,
	const struct dcn10_link_enc_mask *link_mask);

/*
 * Create a minimal link encoder object with no dc_link object associated with it.
 */
void dcn31_link_encoder_construct_minimal(
	struct dcn20_link_encoder *enc20,
	struct dc_context *ctx,
	const struct encoder_feature_support *enc_features,
	const struct dcn10_link_enc_registers *link_regs,
	enum engine_id eng_id);

void dcn31_link_encoder_set_dio_phy_mux(
	struct link_encoder *enc,
	enum encoder_type_select sel,
	uint32_t hpo_inst);

/*
 * Enable DP transmitter and its encoder.
 */
void dcn31_link_encoder_enable_dp_output(
	struct link_encoder *enc,
	const struct dc_link_settings *link_settings,
	enum clock_source_id clock_source);

/*
 * Enable DP transmitter and its encoder in MST mode.
 */
void dcn31_link_encoder_enable_dp_mst_output(
	struct link_encoder *enc,
	const struct dc_link_settings *link_settings,
	enum clock_source_id clock_source);

/*
 * Disable transmitter and its encoder.
 */
void dcn31_link_encoder_disable_output(
	struct link_encoder *enc,
	enum signal_type signal);

/*
 * Check whether USB-C DP Alt mode is disabled
 */
bool dcn31_link_encoder_is_in_alt_mode(
	struct link_encoder *enc);

void dcn31_link_encoder_get_max_link_cap(struct link_encoder *enc,
	struct dc_link_settings *link_settings);

#endif /* __DC_LINK_ENCODER__DCN31_H__ */

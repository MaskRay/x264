/*****************************************************************************
 * tables.h: const tables
 *****************************************************************************
 * Copyright (C) 2003-2019 x264 project
 *
 * Authors: Laurent Aimar <fenrir@via.ecp.fr>
 *          Loren Merritt <lorenm@u.washington.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 *
 * This program is also available under a commercial proprietary license.
 * For more information, contact us at licensing@x264.com.
 *****************************************************************************/

#ifndef X264_TABLES_H
#define X264_TABLES_H

typedef struct
{
    uint8_t i_bits;
    uint8_t i_size;
} vlc_t;

HIDDEN extern const x264_level_t x264_levels[];

HIDDEN extern const uint8_t x264_exp2_lut[64];
HIDDEN extern const float   x264_log2_lut[128];
HIDDEN extern const float   x264_log2_lz_lut[32];

#define QP_MAX_MAX (51+6*2+18)
HIDDEN extern const uint16_t x264_lambda_tab[QP_MAX_MAX+1];
HIDDEN extern const int      x264_lambda2_tab[QP_MAX_MAX+1];
HIDDEN extern const int      x264_trellis_lambda2_tab[2][QP_MAX_MAX+1];
#define MAX_CHROMA_LAMBDA_OFFSET 36
HIDDEN extern const uint16_t x264_chroma_lambda2_offset_tab[MAX_CHROMA_LAMBDA_OFFSET+1];

HIDDEN extern const uint8_t x264_hpel_ref0[16];
HIDDEN extern const uint8_t x264_hpel_ref1[16];

HIDDEN extern const uint8_t x264_cqm_jvt4i[16];
HIDDEN extern const uint8_t x264_cqm_jvt4p[16];
HIDDEN extern const uint8_t x264_cqm_jvt8i[64];
HIDDEN extern const uint8_t x264_cqm_jvt8p[64];
HIDDEN extern const uint8_t x264_cqm_flat16[64];
HIDDEN extern const uint8_t * const x264_cqm_jvt[8];
HIDDEN extern const uint8_t x264_cqm_avci50_4ic[16];
HIDDEN extern const uint8_t x264_cqm_avci50_p_8iy[64];
HIDDEN extern const uint8_t x264_cqm_avci50_1080i_8iy[64];
HIDDEN extern const uint8_t x264_cqm_avci100_720p_4ic[16];
HIDDEN extern const uint8_t x264_cqm_avci100_720p_8iy[64];
HIDDEN extern const uint8_t x264_cqm_avci100_1080_4ic[16];
HIDDEN extern const uint8_t x264_cqm_avci100_1080i_8iy[64];
HIDDEN extern const uint8_t x264_cqm_avci100_1080p_8iy[64];

HIDDEN extern const uint8_t x264_decimate_table4[16];
HIDDEN extern const uint8_t x264_decimate_table8[64];

HIDDEN extern const uint32_t x264_dct4_weight_tab[16];
HIDDEN extern const uint32_t x264_dct8_weight_tab[64];
HIDDEN extern const uint32_t x264_dct4_weight2_tab[16];
HIDDEN extern const uint32_t x264_dct8_weight2_tab[64];

HIDDEN extern const int8_t   x264_cabac_context_init_I[1024][2];
HIDDEN extern const int8_t   x264_cabac_context_init_PB[3][1024][2];
HIDDEN extern const uint8_t  x264_cabac_range_lps[64][4];
HIDDEN extern const uint8_t  x264_cabac_transition[128][2];
HIDDEN extern const uint8_t  x264_cabac_renorm_shift[64];
HIDDEN extern const uint16_t x264_cabac_entropy[128];

HIDDEN extern const uint8_t  x264_significant_coeff_flag_offset_8x8[2][64];
HIDDEN extern const uint8_t  x264_last_coeff_flag_offset_8x8[63];
HIDDEN extern const uint8_t  x264_coeff_flag_offset_chroma_422_dc[7];
HIDDEN extern const uint16_t x264_significant_coeff_flag_offset[2][16];
HIDDEN extern const uint16_t x264_last_coeff_flag_offset[2][16];
HIDDEN extern const uint16_t x264_coeff_abs_level_m1_offset[16];
HIDDEN extern const uint8_t  x264_count_cat_m1[14];

HIDDEN extern const vlc_t x264_coeff0_token[6];
HIDDEN extern const vlc_t x264_coeff_token[6][16][4];
HIDDEN extern const vlc_t x264_total_zeros[15][16];
HIDDEN extern const vlc_t x264_total_zeros_2x2_dc[3][4];
HIDDEN extern const vlc_t x264_total_zeros_2x4_dc[7][8];
HIDDEN extern const vlc_t x264_run_before_init[7][16];

HIDDEN extern uint8_t x264_zero[1024];

#endif

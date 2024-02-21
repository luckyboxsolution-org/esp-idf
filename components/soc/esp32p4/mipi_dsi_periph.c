/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/mipi_dsi_periph.h"

const soc_mipi_dsi_phy_pll_freq_range_t soc_mipi_dsi_phy_pll_ranges[] = {
    {80, 89, 0x00},     // [80,90) Mbps
    {90, 99, 0x10},     // [90,100) Mbps
    {100, 109, 0x20},   // [100,110) Mbps
    {110, 129, 0x01},   // [110,130) Mbps
    {130, 139, 0x11},   // [130,140) Mbps
    {140, 149, 0x21},   // [140,150) Mbps
    {150, 169, 0x02},   // [150,170) Mbps
    {170, 179, 0x12},   // [170,180) Mbps
    {180, 199, 0x22},   // [180,200) Mbps
    {200, 219, 0x03},   // [200,220) Mbps
    {220, 239, 0x13},   // [220,240) Mbps
    {240, 249, 0x23},   // [240,250) Mbps
    {250, 269, 0x04},   // [250,270) Mbps
    {270, 299, 0x14},   // [270,300) Mbps
    {300, 329, 0x05},   // [300,330) Mbps
    {330, 359, 0x15},   // [330,360) Mbps
    {360, 399, 0x25},   // [360,400) Mbps
    {400, 449, 0x06},   // [400,450) Mbps
    {450, 499, 0x16},   // [450,500) Mbps
    {500, 549, 0x07},   // [500,550) Mbps
    {550, 599, 0x17},   // [550,600) Mbps
    {600, 649, 0x08},   // [600,650) Mbps
    {650, 699, 0x18},   // [650,700) Mbps
    {700, 749, 0x09},   // [700,750) Mbps
    {750, 799, 0x19},   // [750,800) Mbps
    {800, 849, 0x29},   // [800,850) Mbps
    {850, 899, 0x39},   // [850,900) Mbps
    {900, 949, 0x0A},   // [900,950) Mbps
    {950, 999, 0x1A},   // [950,1000) Mbps
    {1000, 1049, 0x2A}, // [1000,1050) Mbps
    {1050, 1099, 0x3A}, // [1050,1100) Mbps
    {1100, 1149, 0x0B}, // [1100,1150) Mbps
    {1150, 1199, 0x1B}, // [1150,1200) Mbps
    {1200, 1249, 0x2B}, // [1200,1250) Mbps
    {1250, 1299, 0x3B}, // [1250,1300) Mbps
    {1300, 1349, 0x0C}, // [1300,1350) Mbps
    {1350, 1399, 0x1C}, // [1350,1400) Mbps
    {1400, 1449, 0x2C}, // [1400,1450) Mbps
    {1450, 1500, 0x3C}, // [1450,1500] Mbps
};

const size_t num_of_soc_mipi_dsi_phy_pll_ranges = sizeof(soc_mipi_dsi_phy_pll_ranges) / sizeof(soc_mipi_dsi_phy_pll_freq_range_t);
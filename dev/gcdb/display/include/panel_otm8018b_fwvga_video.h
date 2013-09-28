/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_OTM8018B_FWVGA_VIDEO_H_

#define _PANEL_OTM8018B_FWVGA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config otm8018b_fwvga_video_panel_data = {
  "qcom,mdss_dsi_otm8018b_fwvga_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution otm8018b_fwvga_video_panel_res = {
  480, 854, 80, 54, 8, 0, 12, 16, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info otm8018b_fwvga_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char otm8018b_fwvga_video_on_cmd0[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd1[] = {
0x04, 0x00, 0x29, 0xC0,
0xff, 0x80, 0x09, 0x01,
 };


static char otm8018b_fwvga_video_on_cmd2[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x80, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd3[] = {
0x03, 0x00, 0x29, 0xC0,
0xff, 0x80, 0x09, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd4[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x80, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd5[] = {
0x02, 0x00, 0x29, 0xC0,
0xd6, 0x48, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd6[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x03, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd7[] = {
0x02, 0x00, 0x29, 0xC0,
0xff, 0x01, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd8[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xB4, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd9[] = {
0x02, 0x00, 0x29, 0xC0,
0xC0, 0x10, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd10[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x82, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd11[] = {
0x02, 0x00, 0x29, 0xC0,
0xC5, 0xA3, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd12[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x90, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd13[] = {
0x03, 0x00, 0x29, 0xC0,
0xC5, 0x96, 0x87, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd14[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd15[] = {
0x03, 0x00, 0x29, 0xC0,
0xD8, 0x74, 0x72, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd16[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd17[] = {
0x02, 0x00, 0x29, 0xC0,
0xD9, 0x56, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd18[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd19[] = {
0x11, 0x00, 0x29, 0xC0,
0xE1, 0x00, 0x06, 0x0A,
0x07, 0x03, 0x16, 0x08,
0x0A, 0x04, 0x06, 0x07,
0x08, 0x0F, 0x23, 0x22,
0x05, 0xFF, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd20[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd21[] = {
0x11, 0x00, 0x29, 0xC0,
0xE2, 0x00, 0x06, 0x0A,
0x07, 0x03, 0x16, 0x08,
0x0A, 0x04, 0x06, 0x07,
0x08, 0x0F, 0x23, 0x22,
0x05, 0xFF, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd22[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x81, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd23[] = {
0x02, 0x00, 0x29, 0xC0,
0xC1, 0x77, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd24[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xA0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd25[] = {
0x02, 0x00, 0x29, 0xC0,
0xC1, 0xEA, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd26[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xA1, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd27[] = {
0x02, 0x00, 0x29, 0xC0,
0xC1, 0x08, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd28[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x89, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd29[] = {
0x02, 0x00, 0x29, 0xC0,
0xC4, 0x08, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd30[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x81, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd31[] = {
0x02, 0x00, 0x29, 0xC0,
0xC4, 0x83, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd32[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x92, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd33[] = {
0x02, 0x00, 0x29, 0xC0,
0xC5, 0x01, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd34[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xB1, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd35[] = {
0x02, 0x00, 0x29, 0xC0,
0xC5, 0xA9, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd36[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x92, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd37[] = {
0x02, 0x00, 0x29, 0xC0,
0xB3, 0x45, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd38[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x90, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd39[] = {
0x02, 0x00, 0x29, 0xC0,
0xB3, 0x02, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd40[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x80, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd41[] = {
0x06, 0x00, 0x29, 0xC0,
0xC0, 0x00, 0x58, 0x00,
0x14, 0x16, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd42[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x80, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd43[] = {
0x02, 0x00, 0x29, 0xC0,
0xC4, 0x30, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd44[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x90, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd45[] = {
0x07, 0x00, 0x29, 0xC0,
0xC0, 0x00, 0x44, 0x00,
0x00, 0x00, 0x03, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd46[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xA6, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd47[] = {
0x04, 0x00, 0x29, 0xC0,
0xC1, 0x01, 0x00, 0x00,
 };


static char otm8018b_fwvga_video_on_cmd48[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x80, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd49[] = {
0x0D, 0x00, 0x29, 0xC0,
0xCE, 0x87, 0x03, 0x00,
0x85, 0x03, 0x00, 0x86,
0x03, 0x00, 0x84, 0x03,
0x00, 0xFF, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd50[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xA0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd51[] = {
0x0f, 0x00, 0x29, 0xC0,
0xCE, 0x38, 0x03, 0x03,
0x58, 0x00, 0x00, 0x00,
0x38, 0x02, 0x03, 0x59,
0x00, 0x00, 0x00, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd52[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xB0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd53[] = {
0x0f, 0x00, 0x29, 0xC0,
0xCE, 0x38, 0x01, 0x03,
0x5A, 0x00, 0x00, 0x00,
0x38, 0x00, 0x03, 0x5B,
0x00, 0x00, 0x00, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd54[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xC0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd55[] = {
0x0f, 0x00, 0x29, 0xC0,
0xCE, 0x30, 0x00, 0x03,
0x5C, 0x00, 0x00, 0x00,
0x30, 0x01, 0x03, 0x5D,
0x00, 0x00, 0x00, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd56[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xD0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd57[] = {
0x0f, 0x00, 0x29, 0xC0,
0xCE, 0x30, 0x02, 0x03,
0x5E, 0x00, 0x00, 0x00,
0x30, 0x03, 0x03, 0x5F,
0x00, 0x00, 0x00, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd58[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xC7, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd59[] = {
0x02, 0x00, 0x29, 0xC0,
0xCF, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd60[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xC9, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd61[] = {
0x02, 0x00, 0x29, 0xC0,
0xCF, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd62[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xD0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd63[] = {
0x02, 0x00, 0x29, 0xC0,
0xCF, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd64[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xC4, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd65[] = {
0x07, 0x00, 0x29, 0xC0,
0xCB, 0x04, 0x04, 0x04,
0x04, 0x04, 0x04, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd66[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xD9, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd67[] = {
0x07, 0x00, 0x29, 0xC0,
0xCB, 0x04, 0x04, 0x04,
0x04, 0x04, 0x04, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd68[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x84, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd69[] = {
0x07, 0x00, 0x29, 0xC0,
0xCC, 0x0C, 0x0A, 0x10,
0x0E, 0x03, 0x04, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd70[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x9E, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd71[] = {
0x02, 0x00, 0x29, 0xC0,
0xCC, 0x0B, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd72[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xA0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd73[] = {
0x06, 0x00, 0x29, 0xC0,
0xCC, 0x09, 0x0F, 0x0D,
0x01, 0x02, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd74[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xB4, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd75[] = {
0x07, 0x00, 0x29, 0xC0,
0xCC, 0x0D, 0x0F, 0x09,
0x0B, 0x02, 0x01, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd76[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xCE, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd77[] = {
0x02, 0x00, 0x29, 0xC0,
0xCC, 0x0E, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd78[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0xD0, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd79[] = {
0x06, 0x00, 0x29, 0xC0,
0xCC, 0x10, 0x0A, 0x0C,
0x04, 0x03, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd80[] = {
0x02, 0x00, 0x29, 0xC0,
0x00, 0x00, 0xFF, 0xFF,  };


static char otm8018b_fwvga_video_on_cmd81[] = {
0x04, 0x00, 0x29, 0xC0,
0xff, 0xff, 0xff, 0xff,
 };


static char otm8018b_fwvga_video_on_cmd82[] = {
0x11, 0x00, 0x05, 0x80 };


static char otm8018b_fwvga_video_on_cmd83[] = {
0x29, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd otm8018b_fwvga_video_on_command[] = {
{ 0x8 , otm8018b_fwvga_video_on_cmd0},
{ 0x8 , otm8018b_fwvga_video_on_cmd1},
{ 0x8 , otm8018b_fwvga_video_on_cmd2},
{ 0x8 , otm8018b_fwvga_video_on_cmd3},
{ 0x8 , otm8018b_fwvga_video_on_cmd4},
{ 0x8 , otm8018b_fwvga_video_on_cmd5},
{ 0x8 , otm8018b_fwvga_video_on_cmd6},
{ 0x8 , otm8018b_fwvga_video_on_cmd7},
{ 0x8 , otm8018b_fwvga_video_on_cmd8},
{ 0x8 , otm8018b_fwvga_video_on_cmd9},
{ 0x8 , otm8018b_fwvga_video_on_cmd10},
{ 0x8 , otm8018b_fwvga_video_on_cmd11},
{ 0x8 , otm8018b_fwvga_video_on_cmd12},
{ 0x8 , otm8018b_fwvga_video_on_cmd13},
{ 0x8 , otm8018b_fwvga_video_on_cmd14},
{ 0x8 , otm8018b_fwvga_video_on_cmd15},
{ 0x8 , otm8018b_fwvga_video_on_cmd16},
{ 0x8 , otm8018b_fwvga_video_on_cmd17},
{ 0x8 , otm8018b_fwvga_video_on_cmd18},
{ 0x18 , otm8018b_fwvga_video_on_cmd19},
{ 0x8 , otm8018b_fwvga_video_on_cmd20},
{ 0x18 , otm8018b_fwvga_video_on_cmd21},
{ 0x8 , otm8018b_fwvga_video_on_cmd22},
{ 0x8 , otm8018b_fwvga_video_on_cmd23},
{ 0x8 , otm8018b_fwvga_video_on_cmd24},
{ 0x8 , otm8018b_fwvga_video_on_cmd25},
{ 0x8 , otm8018b_fwvga_video_on_cmd26},
{ 0x8 , otm8018b_fwvga_video_on_cmd27},
{ 0x8 , otm8018b_fwvga_video_on_cmd28},
{ 0x8 , otm8018b_fwvga_video_on_cmd29},
{ 0x8 , otm8018b_fwvga_video_on_cmd30},
{ 0x8 , otm8018b_fwvga_video_on_cmd31},
{ 0x8 , otm8018b_fwvga_video_on_cmd32},
{ 0x8 , otm8018b_fwvga_video_on_cmd33},
{ 0x8 , otm8018b_fwvga_video_on_cmd34},
{ 0x8 , otm8018b_fwvga_video_on_cmd35},
{ 0x8 , otm8018b_fwvga_video_on_cmd36},
{ 0x8 , otm8018b_fwvga_video_on_cmd37},
{ 0x8 , otm8018b_fwvga_video_on_cmd38},
{ 0x8 , otm8018b_fwvga_video_on_cmd39},
{ 0x8 , otm8018b_fwvga_video_on_cmd40},
{ 0xc , otm8018b_fwvga_video_on_cmd41},
{ 0x8 , otm8018b_fwvga_video_on_cmd42},
{ 0x8 , otm8018b_fwvga_video_on_cmd43},
{ 0x8 , otm8018b_fwvga_video_on_cmd44},
{ 0xc , otm8018b_fwvga_video_on_cmd45},
{ 0x8 , otm8018b_fwvga_video_on_cmd46},
{ 0x8 , otm8018b_fwvga_video_on_cmd47},
{ 0x8 , otm8018b_fwvga_video_on_cmd48},
{ 0x14 , otm8018b_fwvga_video_on_cmd49},
{ 0x8 , otm8018b_fwvga_video_on_cmd50},
{ 0x14 , otm8018b_fwvga_video_on_cmd51},
{ 0x8 , otm8018b_fwvga_video_on_cmd52},
{ 0x14 , otm8018b_fwvga_video_on_cmd53},
{ 0x8 , otm8018b_fwvga_video_on_cmd54},
{ 0x14 , otm8018b_fwvga_video_on_cmd55},
{ 0x8 , otm8018b_fwvga_video_on_cmd56},
{ 0x14 , otm8018b_fwvga_video_on_cmd57},
{ 0x8 , otm8018b_fwvga_video_on_cmd58},
{ 0x8 , otm8018b_fwvga_video_on_cmd59},
{ 0x8 , otm8018b_fwvga_video_on_cmd60},
{ 0x8 , otm8018b_fwvga_video_on_cmd61},
{ 0x8 , otm8018b_fwvga_video_on_cmd62},
{ 0x8 , otm8018b_fwvga_video_on_cmd63},
{ 0x8 , otm8018b_fwvga_video_on_cmd64},
{ 0xc , otm8018b_fwvga_video_on_cmd65},
{ 0x8 , otm8018b_fwvga_video_on_cmd66},
{ 0xc , otm8018b_fwvga_video_on_cmd67},
{ 0x8 , otm8018b_fwvga_video_on_cmd68},
{ 0xc , otm8018b_fwvga_video_on_cmd69},
{ 0x8 , otm8018b_fwvga_video_on_cmd70},
{ 0x8 , otm8018b_fwvga_video_on_cmd71},
{ 0x8 , otm8018b_fwvga_video_on_cmd72},
{ 0xc , otm8018b_fwvga_video_on_cmd73},
{ 0x8 , otm8018b_fwvga_video_on_cmd74},
{ 0xc , otm8018b_fwvga_video_on_cmd75},
{ 0x8 , otm8018b_fwvga_video_on_cmd76},
{ 0x8 , otm8018b_fwvga_video_on_cmd77},
{ 0x8 , otm8018b_fwvga_video_on_cmd78},
{ 0xc , otm8018b_fwvga_video_on_cmd79},
{ 0x8 , otm8018b_fwvga_video_on_cmd80},
{ 0x8 , otm8018b_fwvga_video_on_cmd81},
{ 0x4 , otm8018b_fwvga_video_on_cmd82},
{ 0x4 , otm8018b_fwvga_video_on_cmd83}
};
#define OTM8018B_FWVGA_VIDEO_ON_COMMAND 84


static char otm8018b_fwvga_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char otm8018b_fwvga_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd otm8018b_fwvga_video_off_command[] = {
{ 0x4 , otm8018b_fwvga_videooff_cmd0},
{ 0x4 , otm8018b_fwvga_videooff_cmd1}
};
#define OTM8018B_FWVGA_VIDEO_OFF_COMMAND 2


static struct command_state otm8018b_fwvga_video_state = {
  0, 0
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info otm8018b_fwvga_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info otm8018b_fwvga_video_video_panel = {
  1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration otm8018b_fwvga_video_lane_config = {
  2, 1, 1, 1, 0, 0
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t otm8018b_fwvga_video_timings[] = {
  0x72, 0x19, 0x11, 0x00, 0x3C, 0x46, 0x14, 0x1C, 0x1C, 0x03, 0x04, 0x00
};

static struct panel_timing otm8018b_fwvga_video_timing_info = {
  0, 4, 0x04, 0x1b
};

/*---------------------------------------------------------------------------*/
/* Panel Reset Sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence otm8018b_fwvga_video_reset_seq = {
  { 2, 0, 2, }, { 20, 2, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight otm8018b_fwvga_video_backlight = {
  0, 1, 255, 0, 1, 0
};


#endif /*_PANEL_OTM8018B_FWVGA_VIDEO_H_*/

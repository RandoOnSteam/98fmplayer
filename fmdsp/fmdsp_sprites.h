enum {
  TRACK_H = 32,
  TRACK_H_S = 24,
  TNAME_W = 26,
  TNAME_H = 5,
  TINFO_X = 47,
  TDETAIL_X = 67,
  TDETAIL_KN_V_X = TDETAIL_X+13,
  TDETAIL_TN_X = TDETAIL_KN_V_X+28,
  TDETAIL_TN_V_X = TDETAIL_TN_X+13,
  TDETAIL_VL_X = TDETAIL_TN_V_X+20,
  TDETAIL_VL_C_X = TDETAIL_VL_X+9,
  TDETAIL_VL_V_X = TDETAIL_VL_X+12,
  TDETAIL_GT_X = TDETAIL_VL_V_X+19,
  TDETAIL_GT_V_X = TDETAIL_GT_X+13,
  TDETAIL_DT_X = TDETAIL_GT_V_X+23,
  TDETAIL_DT_S_X = TDETAIL_DT_X+13,
  TDETAIL_DT_V_X = TDETAIL_DT_S_X+4,
  TDETAIL_M_X = 249,
  TDETAIL_M_V_X = TDETAIL_M_X+8,
  NUM_X = 31,
  NUM_W = 8,
  NUM_H = 11,
  KEY_X = 7,
  KEY_Y = 14,
  KEY_W = 35,
  KEY_H = 17,
  KEY_S_OFFSET = KEY_W*4,
  KEY_H_S = KEY_H - 8,
  KEY_LEFT_X = 0,
  KEY_LEFT_W = 6,
  KEY_LEFT_S_OFFSET = KEY_LEFT_W*4,
  KEY_RIGHT_W = 11,
  KEY_RIGHT_S_OFFSET = KEY_RIGHT_W*4,
  KEY_OCTAVES = 8,
  BAR_L_X = 66,
  BAR_L_W = 14,
  BAR_X = BAR_L_X + BAR_L_W,
  BAR_Y = 1,
  BAR_W = 2,
  BAR_H = 4,
  BAR_CNT = 64,
  COMMENT_Y = 340,
  COMMENT_H = 19,
  PLAYING_X = 0,
  PLAYING_Y = 324,
  PLAYING_W = 72,
  PLAYING_H = 9,
  FILEBAR_X = 78,
  FILEBAR_MUS_X = FILEBAR_X + 6,
  FILEBAR_IC_X = FILEBAR_MUS_X + 14,
  FILEBAR_F_X = FILEBAR_IC_X + 11,
  FILEBAR_ILE_X = FILEBAR_F_X + 4,
  FILEBAR_W = 2,
  FILEBAR_H = 7,
  FILEBAR_TRI_X = FILEBAR_ILE_X + 17,
  FILEBAR_TRI_Y = PLAYING_Y+4,
  FILEBAR_TRI_W = 3,
  FILEBAR_TRI_H = 3,
  FILEBAR_FILENAME_X = FILEBAR_TRI_X + 8,
  PCM1FILEBAR_X = 463,
  PCM1FILETXT_X = PCM1FILEBAR_X + 5,
  PCM1FILETRI_X = PCM1FILETXT_X + 21,
  PCM1FILENAME_X = PCM1FILETRI_X + 8,
  PCM2FILEBAR_X = 551,
  PCM2FILETXT_X = PCM2FILEBAR_X + 5,
  PCM2FILETRI_X = PCM2FILETXT_X + 21,
  PCM2FILENAME_X = PCM2FILETRI_X + 8,
  DT_SIGN_W = 3,
  DT_SIGN_H = 3,
  SPECTRUM_X = 352,
  SPECTRUM_Y = 207,
  CPU_Y = 115,
  CPU_X = 320,
  CPU_BAR_X = CPU_X-6,
  CPU_NUM_X = CPU_X+56,
  CPU_NUM_Y = CPU_Y+2,
  CPU_TRI_X = CPU_X+43,
  CPU_TRI_Y = CPU_Y+10,
  FPS_X = CPU_X+100,
  FPS_BAR_X = FPS_X-6,
  FPS_NUM_X = FPS_X+61,
  FPS_TRI_X = FPS_X+48,
  TIME_TEXT_X = 530,
  TIME_X = TIME_TEXT_X+38,
  TIME_BAR_X = TIME_TEXT_X-6,
  TIME_TRI_X = TIME_TEXT_X+31,
  TIME_BAR_W = 3,
  TIME_BAR_H = 14,
  TIME_Y = 22,
  CLOCK_Y = TIME_Y+19,
  TIMERB_Y = CLOCK_Y+19,
  LOOPCNT_Y = TIMERB_Y+19,
  VOLDOWN_Y = LOOPCNT_Y+19,
  PGMNUM_Y = VOLDOWN_Y+19,
  LOGO_NUM = 1,
  LOGO_Y = 1,
  LOGO_FM_W = 31,
  LOGO_DS_W = 32,
  LOGO_P_W = 15,
  LOGO_H = 12,
  LOGO_FM_X = 312,
  LOGO_DS_X = LOGO_FM_X+LOGO_FM_W+2,
  LOGO_P_X = LOGO_DS_X+LOGO_DS_W+2,
  CIRCLE_W = 31,
  CIRCLE_H = 31,
  CIRCLE_X = 312,
  CIRCLE_Y = 70,
  TOP_MUS_X = 397,
  TOP_MUSIC_Y = 7,
  TOP_IC_X = TOP_MUS_X+14,
  TOP_F_X = TOP_IC_X+12,
  TOP_ILE_X = TOP_F_X+4,
  TOP_SELECTOR_X = TOP_ILE_X+17,
  TOP_AND_X = TOP_SELECTOR_X+42,
  TOP_STATUS_X = TOP_AND_X+7,
  TOP_D_X = TOP_STATUS_X+32,
  TOP_ISPLAY_X = TOP_D_X+4,
  TOP_VER_X = TOP_ISPLAY_X+32,
  TOP_TEXT_W = 231,
  TOP_TEXT_H = 5,
  TOP_TEXT_Y = TOP_MUSIC_Y-6,
  VER_W = 13,
  VER_H = 5,
  VER_Y = 8,
  VER_0_X = TOP_VER_X+15,
  VER_1_X = VER_0_X+7,
  VER_2_X = VER_1_X+7,
  DRIVER_TEXT_X = 312,
  DRIVER_TEXT_Y = 27,
  DRIVER_TEXT_2_X = DRIVER_TEXT_X+9,
  DRIVER_TRI_X = DRIVER_TEXT_2_X+26,
  DRIVER_TRI_Y = DRIVER_TEXT_Y+3,
  CURL_W = 11,
  CURL_H = 11,
  CURL_LEFT_X = 347,
  CURL_RIGHT_X = 509,
  CURL_Y = 80,
  PLAY_W = 30,
  PLAY_H = 7,
  PLAY_X = 354,
  PLAY_Y = 77,
  STOP_W = 31,
  STOP_H = 7,
  STOP_X = 393,
  STOP_Y = 77,
  PAUSE_W = 37,
  PAUSE_H = 7,
  PAUSE_X = 433,
  PAUSE_Y = 77,
  FADE_W = 31,
  FADE_H = 7,
  FADE_X = 481,
  FADE_Y = 77,
  FF_W = 20,
  FF_H = 7,
  FF_X = 360,
  FF_Y = 87,
  REW_W = 26,
  REW_H = 7,
  REW_X = 392,
  REW_Y = 87,
  FLOPPY_W = 74,
  FLOPPY_H = 7,
  FLOPPY_X = 432,
  FLOPPY_Y = 87,
  LEVEL_TEXT_X = 318,
  LEVEL_TEXT_Y = 290,
  LEVEL_X = 353-16,
  LEVEL_Y = 227,
  LEVEL_DISP_W = 14,
  LEVEL_W = 16,
  PANPOT_W = 15,
  PANPOT_H = 15,
  PANPOT_Y = LEVEL_Y+64,
  LEVEL_TRACK_Y = LEVEL_Y-9,
  LEVEL_PROG_Y = PANPOT_Y+15,
  LEVEL_KEY_Y = LEVEL_PROG_Y+7,
};

enum {
  PALETTE_NUM = 10
};

#define LCDWR 172
#define LCDWG 239
#define LCDWB 7
#define LCDBR 12
#define LCDBG 91
#define LCDBB 0
#define LCD(C) \
  (LCDWR*(C)+LCDBR*(255-C))/256, \
  (LCDWG*(C)+LCDBG*(255-C))/256, \
  (LCDWB*(C)+LCDBB*(255-C))/256

#define LCDB(C) \
  (LCDBR*(C)+LCDWR*(255-C))/256, \
  (LCDBG*(C)+LCDWG*(255-C))/256, \
  (LCDBB*(C)+LCDWB*(255-C))/256

static const uint8_t s_palettes[PALETTE_NUM][FMDSP_PALETTE_COLORS*3] = {
  {
    0, 0, 0,
    170, 170, 153,
    102, 136, 255,
    68, 68, 119,
    204, 204, 187,
    102, 102, 85,
    136, 255, 68,
    51, 51, 238,
    0, 187, 255,
    68, 102, 170,
  },
  {
    0, 0, 0,
    187, 187, 170,
    136, 170, 255,
    85, 85, 153,
    204, 204, 187,
    136, 136, 119,
    153, 255, 119,
    102, 85, 255,
    0, 204, 255,
    85, 119, 170,
  },
  {
    0, 0, 0,
    255, 102, 0,
    255, 170, 0,
    102, 68, 51,
    153, 136, 102,
    119, 85, 68,
    255, 221, 85,
    255, 102, 0,
    255, 85, 0,
    170, 119, 85,
  },
  {
    0, 0, 0,
    170, 170, 153,
    170, 153, 255,
    85, 51, 102,
    204, 204, 187,
    102, 102, 85,
    119, 255, 34,
    136, 68, 221,
    0, 187, 255,
    136, 102, 187,
  },
  {
    0, 0, 0,
    187, 187, 170,
    102, 153, 255,
    85, 68, 136,
    255, 255, 238,
    119, 119, 102,
    255, 68, 0,
    85, 85, 255,
    255, 119, 255,
    119, 119, 187,
  },
  {
    0, 0, 0,
    255, 51, 119,
    255, 187, 0,
    85, 85, 68,
    119, 119, 102,
    102, 102, 102,
    255, 221, 0,
    255, 0, 51,
    255, 0, 51,
    170, 136, 0,
  },
  {
    102, 170, 238,
    0, 17, 136,
    0, 51, 136,
    153, 221, 255,
    153, 221, 255,
    119, 187, 255,
    0, 51, 136,
    34, 102, 187,
    0, 85, 204,
    68, 136, 255,
  },
  {
    0, 0, 0,
    170, 170, 136,
    102, 153, 255,
    17, 0, 51,
    170, 170, 153,
    51, 51, 51,
    85, 255, 68,
    34, 17, 255,
    0, 170, 255,
    68, 85, 170,
  },
  {
    LCDB(255),
    LCDB(72),
    LCDB(0),
    LCDB(182),
    LCDB(0),
    LCDB(145),
    LCDB(218),
    LCDB(109),
    LCDB(218),
    LCDB(0),
  },
  {
    LCD(255),
    LCD(72),
    LCD(0),
    LCD(182),
    LCD(145),
    LCD(145),
    LCD(0),
    LCD(109),
    LCD(0),
    LCD(0),
  },
};

#undef LCDWR
#undef LCDWG
#undef LCDWB
#undef LCDBR
#undef LCDBG
#undef LCDBB
#undef LCD


static const uint8_t s_num[11][NUM_W*NUM_H] = {
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 0, 3, 3, 0, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 3, 3, 3, 0, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 0, 3, 3, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 3, 3, 3, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 2, 0, 0, 0, 3, 0, 0,
    0, 2, 0, 0, 0, 3, 0, 0,
    0, 2, 0, 0, 0, 3, 0, 0,
    0, 2, 0, 0, 0, 3, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 3, 3, 3, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 3, 3, 3, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 0, 3, 3, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 3, 3, 3, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 2, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 2, 2, 2, 0, 0,
    0, 0, 2, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, 0, 2, 2, 0, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 2, 2, 0, 0, 0,
  },
  {
    0, 0, 0, 3, 3, 3, 0, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 3, 0, 0, 0, 3, 0,
    0, 0, 0, 3, 3, 0, 0, 0,
    0, 3, 0, 0, 0, 3, 0, 0,
    0, 3, 0, 0, 0, 3, 0, 0,
    0, 3, 0, 0, 0, 3, 0, 0,
    0, 3, 0, 0, 0, 3, 0, 0,
    0, 0, 3, 3, 3, 0, 0, 0,
  }
};

static const uint8_t s_num_colon[2][NUM_W*NUM_H] = {
  {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
  },
  {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
  },
};

static const uint8_t s_num_bar[NUM_W*NUM_H] = {
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 2, 2, 2, 0, 0, 0,
};

static const uint8_t s_key_bg[KEY_W*KEY_H] = {
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,5,0,0,4,4,5,0,0,4,4,4,0,4,4,4,5,0,0,4,4,5,0,0,4,4,5,0,0,4,4,4,0,
  4,4,4,5,5,0,4,4,5,5,0,4,4,4,0,4,4,4,5,5,0,4,4,5,5,0,4,4,5,5,0,4,4,4,0,
  4,4,4,0,0,0,4,4,0,0,0,4,4,4,0,4,4,4,0,0,0,4,4,0,0,0,4,4,0,0,0,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,4,4,4,4,0,
  5,4,4,5,0,5,4,4,5,0,5,4,4,5,0,5,4,4,5,0,5,4,4,5,0,5,4,4,5,0,5,4,4,5,0,
};
static const uint8_t s_key_left[KEY_LEFT_W*KEY_H] = {
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  5, 0, 0, 4, 4, 4,
  5, 5, 0, 4, 4, 4,
  0, 0, 0, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  4, 0, 4, 4, 4, 4,
  5, 0, 5, 4, 4, 5,
};
static const uint8_t s_key_right[KEY_RIGHT_W*KEY_H] = {
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 5, 0, 0, 4, 4, 5, 0, 0,
  4, 4, 4, 5, 5, 0, 4, 4, 5, 5, 0,
  4, 4, 4, 0, 0, 0, 4, 4, 0, 0, 0,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  4, 4, 4, 4, 0, 4, 4, 4, 4, 0, 4,
  5, 4, 4, 5, 0, 5, 4, 4, 5, 0, 5,
};
static const uint8_t s_key_mask[KEY_W*KEY_H] = {
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,0,2,2,3,3,0,4,4,5,5,5,0,6,6,6,0,7,7,8,8,0,9,9, 10,10,0, 11,11,12,12,12,0,
  1,1,1,0,0,2,3,3,0,0,4,5,5,5,0,6,6,6,0,0,7,8,8,0,0,9, 10,10,0, 0, 11,12,12,12,0,
  1,1,1,2,2,2,3,3,4,4,4,5,5,5,0,6,6,6,7,7,7,8,8,9,9,9, 10,10,11,11,11,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  1,1,1,1,0,3,3,3,3,0,5,5,5,5,0,6,6,6,6,0,8,8,8,8,0,10,10,10,10,0, 12,12,12,12,0,
  0,1,1,0,0,0,3,3,0,0,0,5,5,0,0,0,6,6,0,0,0,8,8,0,0,0, 10,10,0, 0, 0, 12,12,0, 0,
};
static const uint8_t s_bar_l[BAR_L_W*BAR_H] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
};
static const uint8_t s_bar[BAR_W*BAR_H] = {
  1, 0,
  1, 0,
  1, 0,
  1, 0,
};
static const uint8_t s_playing[PLAYING_W*PLAYING_H] = {
  2,2,2,2,2,2,2,0,0,2,2,0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,2,2,0,0,0,0,2,2,0,2,2,0,2,2,0,0,0,0,2,2,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,0,0,0,0,2,2,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,2,2,0,0,2,2,0,0,2,2,0,2,2,2,0,0,0,2,2,0,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,0,0,0,0,2,2,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,2,2,2,2,0,0,0,2,2,0,2,2,2,2,0,0,2,2,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,0,0,0,0,2,2,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,2,2,0,2,2,0,2,2,0,2,2,0,0,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,0,0,2,2,0,0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,2,2,0,0,2,2,2,2,0,2,2,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,2,2,0,0,0,2,2,2,0,2,2,0,0,0,0,2,2,0,0,2,2,0,0,2,2,0,0,2,2,0,0,2,2,0,
  2,2,0,0,0,0,0,0,0,0,2,2,2,2,2,2,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,0,0,0,2,2,0,2,2,0,0,0,0,2,2,0,0,2,2,2,2,2,2,0,0,0,2,2,0,0,2,2,0,0,2,2,0,0,2,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
};
static const uint8_t s_filebar[FILEBAR_W*FILEBAR_H] = {
  2, 2,
  2, 2,
  2, 2,
  2, 2,
  2, 2,
  2, 2,
  2, 2,
};

static const uint8_t s_filebar_tri[FILEBAR_TRI_W*FILEBAR_TRI_H] = {
  2, 0, 0,
  2, 2, 0,
  2, 2, 2,
};

static const uint8_t s_dt_sign[3][DT_SIGN_W*DT_SIGN_H] = {
  {
    0, 0, 0,
    0, 0, 0,
    0, 0, 0,
  },
  {
    0, 0, 0,
    1, 1, 1,
    0, 0, 0,
  },
  {
    0, 1, 0,
    1, 1, 1,
    0, 1, 0,
  }
};

static const uint8_t s_logo_fm[LOGO_FM_W*LOGO_H] = {
  0,9,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,9,2,2,2,0,0,0,0,0,2,2,2,9,0,
  9,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,9,2,2,2,2,2,0,0,0,2,2,2,2,2,9,
  2,2,2,9,3,3,3,3,3,3,3,3,3,3,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,2,2,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,2,2,2,0,0,0,2,2,2,
  2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,3,3,3,3,3,3,3,3,3,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
};

static const uint8_t s_logo_ds[LOGO_DS_W*LOGO_H] = {
  2,2,2,2,2,2,2,2,2,2,2,2,9,0,0,0,0,0,9,2,2,2,2,2,2,2,2,2,2,2,2,2,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,9,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
  2,2,2,3,3,3,3,3,3,3,3,9,2,2,9,0,0,2,2,2,9,3,3,3,3,3,3,3,3,3,3,3,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,9,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,9,2,2,2,2,2,2,2,2,2,2,2,2,9,0,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,9,2,2,2,2,2,2,2,2,2,2,2,2,9,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,3,3,3,3,3,3,3,3,9,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,9,2,2,9,0,0,0,0,0,0,0,0,0,0,0,0,0,9,2,2,2,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,
  2,2,2,2,2,2,2,2,2,2,2,2,9,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,9,0,
};

static const uint8_t s_logo_p[LOGO_P_W*LOGO_H] = {
  2,2,2,2,2,2,2,2,2,2,2,2,2,9,0,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,
  2,2,2,3,3,3,3,3,3,3,3,9,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,0,2,2,2,
  2,2,2,0,0,0,0,0,0,0,0,9,2,2,2,
  2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,
  2,2,2,2,2,2,2,2,2,2,2,2,2,9,0,
  2,2,2,3,3,3,3,3,3,3,3,3,3,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
  2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,
};

static const uint8_t s_circle[CIRCLE_W*CIRCLE_H] = {
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,8,0,0,0,1,0,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,8,0,8,0,0,0,1,0,1,0,0,0,2,0,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,8,0,0,8,0,0,1,0,1,0,0,2,0,0,2,0,0,0,0,0,0,0,0,
  0,0,0,0,0,7,0,0,0,8,0,8,0,0,1,0,1,0,0,2,0,2,0,0,0,3,0,0,0,0,0,
  0,0,0,0,7,0,7,0,0,8,0,0,8,0,1,0,1,0,2,0,0,2,0,0,3,0,3,0,0,0,0,
  0,0,0,0,0,7,0,7,0,0,8,0,8,0,1,0,1,0,2,0,2,0,0,3,0,3,0,0,0,0,0,
  0,0,0,0,0,0,7,0,7,0,8,0,0,0,0,0,0,0,0,0,2,0,3,0,3,0,0,0,0,0,0,
  0,0,6,6,0,0,0,7,0,7,0,0,0,0,0,0,0,0,0,0,0,3,0,3,0,0,0,4,4,0,0,
  0,0,0,0,6,6,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,4,4,0,0,0,0,
  0,6,6,0,0,0,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,4,4,0,
  0,0,0,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,
  0,0,0,0,0,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5,5,5,5,5,5,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,0,0,0,0,0,
  0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,0,0,0,
  0,4,4,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,0,0,0,6,6,0,
  0,0,0,0,4,4,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,6,6,0,0,0,0,
  0,0,4,4,0,0,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,7,0,7,0,0,0,6,6,0,0,
  0,0,0,0,0,0,3,0,3,0,2,0,0,0,0,0,0,0,0,0,8,0,7,0,7,0,0,0,0,0,0,
  0,0,0,0,0,3,0,3,0,0,2,0,2,0,1,0,1,0,8,0,8,0,0,7,0,7,0,0,0,0,0,
  0,0,0,0,3,0,3,0,0,2,0,0,2,0,1,0,1,0,8,0,0,8,0,0,7,0,7,0,0,0,0,
  0,0,0,0,0,3,0,0,0,2,0,2,0,0,1,0,1,0,0,8,0,8,0,0,0,7,0,0,0,0,0,
  0,0,0,0,0,0,0,0,2,0,0,2,0,0,1,0,1,0,0,8,0,0,8,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,2,0,2,0,0,0,1,0,1,0,0,0,8,0,8,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,2,0,0,0,1,0,1,0,0,0,8,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

static const uint8_t s_text[TOP_TEXT_W*TOP_TEXT_H] = {
  0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,7,0,7,0,0,7,0,7,7,7,0,7,0,0,7,0,0,0,0,0,
  7,0,0,0,0,7,7,7,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,0,0,0,7,7,7,0,7,7,7,7,0,7,0,
  0,7,0,0,0,0,0,0,7,7,7,0,0,0,0,0,7,0,0,7,0,0,7,7,0,0,0,7,7,0,0,0,0,0,0,0,7,7,
  0,0,7,0,0,7,0,7,7,7,0,0,0,7,7,0,0,0,0,7,0,0,0,0,0,0,0,7,7,0,0,7,7,7,0,0,7,0,
  0,7,0,0,0,0,7,0,0,0,0,0,7,0,0,7,0,7,7,7,0,7,0,0,7,0,7,7,7,0,0,0,7,7,0,0,7,0,
  0,7,0,0,7,7,7,0,0,0,0,7,7,0,0,0,7,7,0,0,0,7,7,0,0,0,7,7,0,0,0,0,0,0,7,0,0,0,
  7,7,0,0,7,0,0,0,7,7,0,0,7,0,7,0,0,0,7,0,0,7,0,7,7,0,7,0,0,7,0,0,0,7,7,0,0,0,
  0,7,0,7,0,0,0,0,0,7,0,0,7,7,0,7,0,7,0,0,7,0,0,7,7,0,0,0,0,7,0,0,0,0,0,0,0,0,
  0,7,0,7,0,0,0,7,0,0,0,0,0,0,7,0,0,0,0,0,7,7,0,0,7,0,0,7,0,7,0,0,0,0,0,0,7,0,
  7,0,0,7,0,7,7,7,7,0,7,0,0,7,0,7,0,0,0,0,0,7,7,0,0,0,0,7,0,7,0,0,7,0,7,0,0,7,
  0,7,7,7,7,0,0,0,7,0,7,0,0,0,0,7,0,0,7,0,0,7,0,0,7,7,0,7,0,7,0,0,7,0,7,0,0,7,
  0,7,0,0,7,0,7,0,0,0,0,0,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,0,0,0,7,7,
  0,0,7,0,0,7,7,7,7,0,7,0,0,7,0,7,7,0,0,0,0,7,0,0,7,0,7,0,7,7,0,0,7,0,0,0,0,0,
  0,0,0,7,0,0,7,0,0,0,0,0,7,0,0,7,0,7,7,0,7,0,0,7,0,0,0,0,0,0,0,0,7,0,7,7,0,0,
  7,7,0,0,7,0,0,0,0,7,7,7,0,0,0,7,7,0,0,0,0,0,0,0,0,0,0,0,7,7,0,0,7,7,7,0,0,0,
  7,0,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,7,7,7,0,0,7,0,7,0,0,0,7,0,0,7,0,0,7,0,7,
  0,0,7,0,7,0,0,7,0,0,0,0,7,0,7,0,0,0,7,0,0,7,0,0,7,0,0,7,0,7,7,0,7,0,0,7,0,7,
  0,0,7,0,7,0,0,7,0,0,7,7,0,0,0,0,0,0,7,0,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,7,7,
  0,0,7,0,0,7,0,0,7,0,7,0,0,7,0,0,7,0,7,0,0,0,0,0,7,0,0,7,0,7,0,0,7,0,0,7,0,0,
  0,7,7,0,0,7,0,0,0,7,0,0,0,0,0,7,0,0,7,0,0,7,0,7,0,0,7,0,0,7,7,0,0,0,0,7,0,0,
  7,0,0,7,7,0,0,7,0,7,0,0,0,7,0,0,0,0,0,0,7,0,0,0,0,0,7,7,0,0,7,0,0,7,0,7,0,0,
  7,0,7,0,0,0,7,0,7,7,0,7,0,0,7,0,0,0,0,7,0,7,0,0,7,0,7,7,7,7,0,7,0,0,0,7,0,7,
  7,0,7,0,7,0,0,7,0,0,7,0,0,0,7,0,7,0,0,0,0,7,7,7,7,0,0,7,0,0,7,0,0,7,0,0,0,0,
  7,0,7,0,0,7,0,7,7,7,7,0,0,0,0,7,0,0,0,0,7,0,0,0,7,0,0,7,0,7,0,0,7,0,7,0,0,7,
  0,0,0,0,0,7,0,0,7,0,0,7,0,7,0,0,0,7,7,0,0,7,0,0,0,0,0,0,7,7,0,0,7,0,0,7,0,7,
  7,7,0,7,0,0,7,0,0,0,0,0,0,7,7,7,0,7,7,7,0,7,0,0,7,0,0,7,7,0,0,7,0,0,7,0,0,0,
  0,7,7,7,0,0,7,7,0,0,7,0,0,7,0,0,0,0,0,0,7,7,7,0,0,0,0,0,7,0,0,7,0,0,7,7,0,0,
  0,7,7,0,0,0,0,0,0,7,0,0,7,0,7,0,0,7,0,7,7,7,0,0,0,7,7,0,0,0,0,7,0,0,0,0,0,0,
  7,0,0,7,0,7,0,0,7,0,7,0,0,7,0,0,0,0,7,0,7,0,0,0,7,0,0,7,0,7,7,7,0,7,0,0,7,0,
  7,7,7,0,0,0,7,7,0,0,7,0,0,7,0,7,7,7,0,0,0,0,7,7,7,7,0,0,7,7,0,0,0,7,7,0,0,0,
  7,7,0,0,0,0,0,7,7,7,0,0,7,7,0
};

static const uint8_t s_ver[VER_W*VER_H] = {
  2,0,0,2,0,0,0,0,0,0,0,0,0,
  2,0,0,2,0,0,2,2,0,0,2,0,2,
  2,0,0,2,0,2,2,2,2,0,2,2,0,
  0,2,2,0,0,2,0,0,0,0,2,0,0,
  0,2,2,0,0,0,2,2,2,0,2,0,0,
};

static const uint8_t s_curl_left[CURL_W*CURL_H] = {
  0,3,3,3,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  3,0,0,0,0,0,0,0,0,0,0,
  0,3,3,3,3,3,3,3,3,3,3,
};

static const uint8_t s_curl_right[CURL_W*CURL_H] = {
  0,0,0,0,0,0,0,3,3,3,0,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,3,3,0,
};

static const uint8_t s_play[PLAY_W*PLAY_H] = {
  1,0,0,0,0,0,0,1,1,1,1,0,0,1,0,0,0,0,0,0,1,1,1,0,0,1,0,0,0,1,
  1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,
  1,1,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,
  1,1,1,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,
  1,1,1,0,0,0,0,1,1,1,1,0,0,1,0,0,0,0,0,1,1,1,1,1,0,0,0,1,0,0,
  1,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,
  1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,
};

static const uint8_t s_stop[STOP_W*STOP_H] = {
  0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1,0,
  1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,
  1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,
  1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,
  1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,1,1,1,0,
  1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,1,0,0,0,0,
};

static const uint8_t s_pause[PAUSE_W*PAUSE_H] = {
  0,0,0,0,0,0,0,0,3,3,3,3,0,0,0,3,3,3,0,0,3,0,0,0,3,0,0,3,3,3,3,0,0,3,3,3,3,
  3,3,0,3,3,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,0,0,3,0,0,0,0,
  3,3,0,3,3,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,0,0,3,0,0,0,0,
  3,3,0,3,3,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,3,0,0,3,3,3,0,0,3,3,3,3,0,
  3,3,0,3,3,0,0,0,3,3,3,3,0,0,3,3,3,3,3,0,3,0,0,0,3,0,0,0,0,0,3,0,3,0,0,0,0,
  3,3,0,3,3,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,0,0,0,0,3,0,3,0,0,0,0,
  0,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,0,3,3,3,0,0,3,3,3,3,0,0,0,3,3,3,3,
};

static const uint8_t s_fade[FADE_W*FADE_H] = {
  0,0,0,0,0,0,0,0,0,3,3,3,3,0,0,3,3,3,0,0,3,3,3,3,0,0,0,3,3,3,3,
  3,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,0,
  3,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,0,
  3,0,3,0,0,0,0,0,3,3,3,3,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,3,3,3,0,
  3,0,3,0,0,0,0,0,3,0,0,0,0,0,3,3,3,3,3,0,3,0,0,0,3,0,3,0,0,0,0,
  3,0,3,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,3,0,0,0,0,
  3,0,3,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,3,3,3,0,0,0,3,3,3,3,
};

static const uint8_t s_ff[FF_W*FF_H] = {
  3,0,0,3,0,0,0,0,0,0,3,3,3,3,0,0,3,3,3,3,
  3,3,0,3,3,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,
  3,3,0,3,3,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,
  3,3,0,3,3,3,3,0,0,3,3,3,3,0,0,3,3,3,3,0,
  3,3,0,3,3,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,
  3,3,0,3,3,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,
  3,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,
};

static const uint8_t s_rew[REW_W*REW_H] = {
  0,0,0,3,0,0,3,0,0,3,3,3,3,0,0,0,3,3,3,3,0,3,0,0,0,3,
  0,0,3,3,0,3,3,0,0,3,0,0,0,3,0,3,0,0,0,0,0,3,0,3,0,3,
  0,3,3,3,0,3,3,0,0,3,0,0,0,3,0,3,0,0,0,0,0,3,0,3,0,3,
  3,3,3,3,0,3,3,0,0,3,0,0,3,0,0,3,3,3,3,0,0,3,0,3,0,3,
  0,3,3,3,0,3,3,0,0,3,3,3,0,0,0,3,0,0,0,0,0,3,0,3,0,3,
  0,0,3,3,0,3,3,0,0,3,0,0,3,0,0,3,0,0,0,0,0,3,0,3,0,3,
  0,0,0,3,0,0,3,0,0,3,0,0,0,3,0,0,3,3,3,3,0,0,3,0,3,0,
};

static uint8_t s_floppy[FLOPPY_W*FLOPPY_H] = {
  3,3,3,3,3,3,3,0,0,0,3,3,3,3,0,0,3,3,3,0,0,3,0,0,0,0,0,0,3,3,3,3,0,3,3,3,3,0,
  0,0,3,3,3,0,0,3,0,0,0,3,0,0,0,3,0,0,0,0,3,3,3,0,0,0,3,3,3,0,0,0,0,0,3,0,3,3,
  3,3,3,3,0,0,0,3,0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,
  0,0,0,3,0,3,3,0,3,3,0,0,3,3,0,0,0,3,0,0,0,3,0,3,0,0,0,3,0,0,0,3,3,0,3,3,3,0,
  3,3,3,0,0,3,0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,
  0,0,0,3,0,3,0,3,0,0,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,3,0,3,0,3,3,0,0,0,3,
  3,0,0,3,3,3,3,0,0,0,0,3,0,0,0,3,0,0,0,0,0,3,3,3,3,0,0,3,0,0,0,3,0,3,0,0,0,0,
  0,3,0,0,0,3,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,3,3,0,0,3,0,0,3,0,3,3,3,0,3,3,3,0,
  0,3,0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,3,3,3,0,0,3,0,0,0,0,0,3,
  0,0,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,3,0,3,3,3,3,3,3,3,3,3,3,3,3,0,0,3,
  0,0,0,0,0,0,0,3,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,3,0,3,0,0,
  0,3,0,0,0,3,0,0,0,0,3,0,0,0,0,3,0,0,0,3,0,0,0,0,3,0,3,3,3,3,3,3,3,0,0,3,0,0,
  0,0,0,0,3,3,3,0,0,0,3,3,3,3,0,0,3,3,3,3,0,3,0,0,0,0,0,0,3,3,3,0,0,3,0,0,0,3,
  0,0,3,3,3,0,0,3,3,3,3,3,0,0,3,3,3,0,0,0,0,0,3,0,
};

static uint8_t s_panpot[6][PANPOT_W*PANPOT_H] = {
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,1,0,1,1,1,0,0,0,0,0,0,0,1,0,
    0,1,0,1,1,0,0,0,0,0,0,0,0,1,0,
    1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,
    0,1,0,0,0,1,1,1,1,0,0,0,0,1,0,
    0,1,0,0,1,1,1,0,0,0,0,0,0,1,0,
    1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,0,1,1,1,0,0,0,1,0,0,
    0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,0,0,0,1,1,0,0,1,0,0,
    0,1,0,0,0,0,1,1,1,1,0,0,0,1,0,
    0,1,0,0,0,0,0,0,1,1,1,0,0,1,0,
    1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,1,0,0,0,0,0,0,0,1,1,1,0,1,0,
    0,1,0,0,0,0,0,0,0,0,1,1,0,1,0,
    1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
  {
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,
    0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,
  },
};

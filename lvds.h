
#ifndef _LVDS_H
#define _LVDS_H

#define BIT_Mask        0x1F

#define BIT_0_Pos       10
#define BIT_0_Msk       (BIT_Mask << BIT_0_Pos)
#define BIT_1_Pos       5
#define BIT_1_Msk       (BIT_Mask << BIT_1_Pos)
#define BIT_2_Pos       0
#define BIT_2_Msk       (BIT_Mask << BIT_2_Pos)
#define BIT_3_Pos       15
#define BIT_3_Msk       (BIT_Mask << BIT_3_Pos)
#define BIT_4_Pos       10
#define BIT_4_Msk       (BIT_Mask << BIT_4_Pos)
#define BIT_5_Pos       5
#define BIT_5_Msk       (BIT_Mask << BIT_5_Pos)
#define BIT_6_Pos       0
#define BIT_6_Msk       (BIT_Mask << BIT_6_Pos)

#define HEX_BASE	16

typedef enum
{
  HAL_LVDS_MAP_R_0  = 0x00,
  HAL_LVDS_MAP_R_1  = 0x01,
  HAL_LVDS_MAP_R_2  = 0x02,
  HAL_LVDS_MAP_R_3  = 0x03,
  HAL_LVDS_MAP_R_4  = 0x04,
  HAL_LVDS_MAP_R_5  = 0x05,
  HAL_LVDS_MAP_R_6  = 0x06,
  HAL_LVDS_MAP_R_7  = 0x07,
  HAL_LVDS_MAP_G_0  = 0x08,
  HAL_LVDS_MAP_G_1  = 0x09,
  HAL_LVDS_MAP_G_2  = 0x0A,
  HAL_LVDS_MAP_G_3  = 0x0B,
  HAL_LVDS_MAP_G_4  = 0x0C,
  HAL_LVDS_MAP_G_5  = 0x0D,
  HAL_LVDS_MAP_G_6  = 0x0E,
  HAL_LVDS_MAP_G_7  = 0x0F,
  HAL_LVDS_MAP_B_0  = 0x10,
  HAL_LVDS_MAP_B_1  = 0x11,
  HAL_LVDS_MAP_B_2  = 0x12,
  HAL_LVDS_MAP_B_3  = 0x13,
  HAL_LVDS_MAP_B_4  = 0x14,
  HAL_LVDS_MAP_B_5  = 0x15,
  HAL_LVDS_MAP_B_6  = 0x16,
  HAL_LVDS_MAP_B_7  = 0x17,
  HAL_LVDS_MAP_H_S  = 0x18,
  HAL_LVDS_MAP_V_S  = 0x19,
  HAL_LVDS_MAP_D_E  = 0x1A,
  HAL_LVDS_MAP_C_E  = 0x1B,
  HAL_LVDS_MAP_C_I  = 0x1C,
  HAL_LVDS_MAP_TOG  = 0x1D,
  HAL_LVDS_MAP_ONE  = 0x1E,
  HAL_LVDS_MAP_ZER  = 0x1F,
} HAL_LVDS_MapTypeDef;


// Expected JEIDA-RGB888 data to be sent in LSB format
//          bit6 ............................bit0
// CHAN0   {ONE, ONE, ZERO, ZERO, ZERO, ONE, ONE}
// CHAN1   {G2,  R7,  R6,   R5,   R4,   R3,  R2}
// CHAN2   {B3,  B2,  G7,   G6,   G5,   G4,  G3}
// CHAN3   {DE,  VS,  HS,   B7,   B6,   B5,  B4}
// CHAN4   {CE,  B1,  B0,   G1,   G0,   R1,  R0}

const HAL_LVDS_MapTypeDef HAL_LVDS_Map_JEIDA_RGB888[5][7] = {
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_G_2, HAL_LVDS_MAP_R_7, HAL_LVDS_MAP_R_6, HAL_LVDS_MAP_R_5, HAL_LVDS_MAP_R_4, HAL_LVDS_MAP_R_3, HAL_LVDS_MAP_R_2},
    {HAL_LVDS_MAP_B_3, HAL_LVDS_MAP_B_2, HAL_LVDS_MAP_G_7, HAL_LVDS_MAP_G_6, HAL_LVDS_MAP_G_5, HAL_LVDS_MAP_G_4, HAL_LVDS_MAP_G_3},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_B_7, HAL_LVDS_MAP_B_6, HAL_LVDS_MAP_B_5, HAL_LVDS_MAP_B_4},
    {HAL_LVDS_MAP_C_E, HAL_LVDS_MAP_B_1, HAL_LVDS_MAP_B_0, HAL_LVDS_MAP_G_1, HAL_LVDS_MAP_G_0, HAL_LVDS_MAP_R_1, HAL_LVDS_MAP_R_0}};

//const int HAL_LVDS_Regs_JEIDA_RGB888[5][2] = {
//        {0x000FFFDE, 0x00007BDF},
//        {0x00029062, 0x000028E6},
//        {},
//        {},
//        {}};

// Expected VESA-RGB888 data to be sent in LSB format
//          bit6 ............................bit0
// CHAN0   {ONE, ONE, ZERO, ZERO, ZERO, ONE, ONE}
// CHAN1   {G0,  R5,  R4,   R3,   R2,   R1,  R0}
// CHAN2   {B1,  B0,  G5,   G4,   G3,   G2,  G1}
// CHAN3   {DE,  VS,  HS,   B5,   B4,   B3,  B2}
// CHAN4   {CE,  B7,  B6,   G7,   G6,   R7,  R6}

const HAL_LVDS_MapTypeDef HAL_LVDS_Map_VESA_RGB888[5][7] = {
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_G_0, HAL_LVDS_MAP_R_5, HAL_LVDS_MAP_R_4, HAL_LVDS_MAP_R_3, HAL_LVDS_MAP_R_2, HAL_LVDS_MAP_R_1, HAL_LVDS_MAP_R_0},
    {HAL_LVDS_MAP_B_1, HAL_LVDS_MAP_B_0, HAL_LVDS_MAP_G_5, HAL_LVDS_MAP_G_4, HAL_LVDS_MAP_G_3, HAL_LVDS_MAP_G_2, HAL_LVDS_MAP_G_1},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_B_5, HAL_LVDS_MAP_B_4, HAL_LVDS_MAP_B_3, HAL_LVDS_MAP_B_2},
    {HAL_LVDS_MAP_C_E, HAL_LVDS_MAP_B_7, HAL_LVDS_MAP_B_6, HAL_LVDS_MAP_G_7, HAL_LVDS_MAP_G_6, HAL_LVDS_MAP_R_7, HAL_LVDS_MAP_R_6}};

// Expected JEIDA/VESA-RGB666 data to be sent in LSB format
//          bit6 ............................bit0
// CHAN0   {ONE, ONE, ZERO, ZERO, ZERO, ONE, ONE}
// CHAN1   {G2,  R7,  R6,   R5,   R4,   R3,  R2}
// CHAN2   {B3,  B2,  G7,   G6,   G5,   G4,  G3}
// CHAN3   {DE,  VS,  HS,   B7,   B6,   B5,  B4}
// CHAN4   {00,  00,  00,   00,   00,   00,  00}

const HAL_LVDS_MapTypeDef HAL_LVDS_Map_RGB666[5][7] = {
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_G_2, HAL_LVDS_MAP_R_7, HAL_LVDS_MAP_R_6, HAL_LVDS_MAP_R_5, HAL_LVDS_MAP_R_4, HAL_LVDS_MAP_R_3, HAL_LVDS_MAP_R_2},
    {HAL_LVDS_MAP_B_3, HAL_LVDS_MAP_B_2, HAL_LVDS_MAP_G_7, HAL_LVDS_MAP_G_6, HAL_LVDS_MAP_G_5, HAL_LVDS_MAP_G_4, HAL_LVDS_MAP_G_3},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_B_7, HAL_LVDS_MAP_B_6, HAL_LVDS_MAP_B_5, HAL_LVDS_MAP_B_4},
    {HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER}};

// Pattern data for testing purpose
const HAL_LVDS_MapTypeDef HAL_LVDS_Map_DSKW[5][7] = {
#if defined(DSKW_DEFAULT)
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_C_E, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER}};
#elif defined(DSKW_OTHER)
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_C_E, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE}};
#elif defined(DSKW_TOGGLE)
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG},
    {HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG},
    {HAL_LVDS_MAP_B_0, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG, HAL_LVDS_MAP_TOG}};
#elif defined(DSKW_ZERO)
    {HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ONE, HAL_LVDS_MAP_ONE},
    {HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_D_E, HAL_LVDS_MAP_V_S, HAL_LVDS_MAP_H_S, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER},
    {HAL_LVDS_MAP_C_E, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER, HAL_LVDS_MAP_ZER}};
#endif

int LVDS_Decode(int reg, int *bitmap, int msb);
int LVDS_Convert(int bit, char *str);
int LVDS_DecodeLane(int lsbreg, int msbreg, int *bitmap, char *lane);
int LVDS_Encode(int *bitmap, char *lane);

#endif /* _LVDS_H */

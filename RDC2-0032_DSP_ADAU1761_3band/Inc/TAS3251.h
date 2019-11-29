/*
********************************************************************************
* COPYRIGHT(c) ��� ���� � ��ϻ, 2019
* 
* ����������� ����������� ��������������� �� �������� ���� ����� (as is).
* ��� ��������������� �������� ������ �����������.
********************************************************************************
*/


#ifndef __TAS3251_H
#define __TAS3251_H


#define   TAS3251_I2C_ADDRESS              0x4A

#define   TAS3251_CHANGE_PAGE_REG          0x00
#define   TAS3251_CHANGE_BOOK_REG          0x7F
#define   TAS3251_DSP_BOOK                 0x8C
#define   TAS3251_DSP_SWAP_FLAG_PAGE       0x23
#define   TAS3251_DSP_SWAP_REG             0x14

//PAGE0 Registers
#define   TAS3251_OPERATION_MODES_REG      0x02
#define   TAS3251_MUTE_REG                 0x03
   #define   TAS3251_MUTE_ENABLE           0x11
   #define   TAS3251_MUTE_DISABLE          0x00
#define   TAS3251_LEFT_VOLUME_REG          0x3D
#define   TAS3251_RIGHT_VOLUME_REG         0x3E


#define   TAS3251_VOL_MIN                  0xA4 // -58 dB
#define   TAS3251_VOL_MAX                  0x30 //   0 dB


#define   TAS3251_VOL_MUTE                 0x0A // index for -38 dB

const uint8_t TAS3251_VOLUME[] =
{
  0xA4, //-58 ��
  0xA0,
  0x9C,
  0x98,
  0x94,
  0x90, //-48 ��
  0x8C,
  0x88,
  0x84,
  0x80,
  0x7C, //-38 ��
  0x78,
  0x74,
  0x70,
  0x6C,
  0x68, //-28 ��
  0x64,
  0x60,
  0x5C,
  0x58,
  0x54, //-18 ��
  0x50,
  0x4C,
  0x48,
  0x44, 
  0x40, //-8 ��
  0x3C,
  0x38,
  0x34,
  0x30, // 0 ��
};

#define   PAGE_0x11                        0x11
#define   PAGE_0x11_SIZE                   20
#define   PAGE_0x11_START_ADDRESS          0x58

const uint8_t TAS3251_BASS_OFF_PAGE_0x11_DATA[] = 
{
  0x7F,
  0xFF,
  0xFF,
  0xFF,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
};

const uint8_t TAS3251_BASS_ON_PAGE_0x11_DATA[] = 
{
  0x7F,
  0x00,
  0x26,
  0x18,
  0x80,
  0xFF,
  0xD9,
  0xE8,
  0x7F,
  0x00,
  0x26,
  0x18,
  0x7E,
  0xFF,
  0xA5,
  0xBE,
  0x81,
  0xFE,
  0xB3,
  0x1C,
};

#define   PAGE_0x12                        0x12
#define   PAGE_0x12_SIZE                   20
#define   PAGE_0x12_START_ADDRESS          0x44

const uint8_t TAS3251_BASS_OFF_PAGE_0x12_DATA[] = 
{
  0xFF,
  0xFB,
  0x8E,
  0xB0,
  0xFF,
  0xFB,
  0x8E,
  0xB0,
  0xFF,
  0xFB,
  0x8E,
  0xB0,
  0x7D,
  0x04,
  0xE9,
  0x80,
  0x85,
  0xE4,
  0x67,
  0xC2,
};

const uint8_t TAS3251_BASS_ON_PAGE_0x12_DATA[] = 
{
  0xFF,
  0xFF,
  0x7F,
  0xA6,
  0xFF,
  0xFF,
  0x7F,
  0xA6,
  0xFF,
  0xFF,
  0x7F,
  0xA6,
  0x7E,
  0xFF,
  0xA5,
  0xBE,
  0x81,
  0xFE,
  0xB3,
  0x1C,
};

#define   PAGE_0x1D                        0x1D
#define   PAGE_0x1D_SIZE                   6
#define   PAGE_0x1D_START_ADDRESS          0x74

const uint8_t TAS3251_BASS_OFF_PAGE_0x1D_DATA[] = 
{
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
};

const uint8_t TAS3251_BASS_ON_PAGE_0x1D_DATA[] = 
{
  0x00,
  0x40,
  0x00,
  0x00,
  0x00,
  0x40,
};

#define   PAGE_0x1E                        0x1E
#define   PAGE_0x1E_SIZE                   1
#define   PAGE_0x1E_START_ADDRESS          0x0D

const uint8_t TAS3251_BASS_OFF_PAGE_0x1E_DATA[] = 
{
  0x00,
};

const uint8_t TAS3251_BASS_ON_PAGE_0x1E_DATA[] = 
{
  0x80,
};

#define   TAS3251_DSP_SWAP_SIZE            4

const uint8_t TAS3251_DSP_SWAP_DATA[] = 
{
  0x00,
  0x00,
  0x00,
  0x01,
};


const uint8_t TAS3251_INIT_DATA[][2] =
{
//program memory
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x02, 0x11 },
    { 0x01, 0x11 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x03, 0x11 },
    { 0x2a, 0x00 },
    { 0x25, 0x18 },
    { 0x0d, 0x10 },
    { 0x02, 0x00 },

//Sample rate update
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x02, 0x80 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },

// speed 03-48k 04-96k
//dynamically reading speed
    { 0x22, 0x03 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x02, 0x00 },

//write coefficients of various components
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x1f },
    { 0x24, 0x00 },
    { 0x25, 0x20 },
    { 0x26, 0xc4 },
    { 0x27, 0x9c },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x11 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x12 },
    { 0x44, 0xff },
    { 0x45, 0x84 },
    { 0x46, 0x59 },
    { 0x47, 0x16 },
    { 0x48, 0xff },
    { 0x49, 0x84 },
    { 0x4a, 0x59 },
    { 0x4b, 0x16 },
    { 0x4c, 0xff },
    { 0x4d, 0x84 },
    { 0x4e, 0x59 },
    { 0x4f, 0x16 },
    { 0x50, 0x70 },
    { 0x51, 0x46 },
    { 0x52, 0x2b },
    { 0x53, 0x3b },
    { 0x54, 0x9d },
    { 0x55, 0x85 },
    { 0x56, 0x0d },
    { 0x57, 0xe2 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x13 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x13 },
    { 0x58, 0x4f },
    { 0x59, 0x9d },
    { 0x5a, 0xf9 },
    { 0x5b, 0x35 },
    { 0x5c, 0xb0 },
    { 0x5d, 0x62 },
    { 0x5e, 0x06 },
    { 0x5f, 0xcb },
    { 0x60, 0x4f },
    { 0x61, 0x9d },
    { 0x62, 0xf9 },
    { 0x63, 0x35 },
    { 0x64, 0x49 },
    { 0x65, 0xe6 },
    { 0x66, 0x9d },
    { 0x67, 0x16 },
    { 0x68, 0xd5 },
    { 0x69, 0x55 },
    { 0x6a, 0x55 },
    { 0x6b, 0x56 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x14 },
    { 0x08, 0x7c },
    { 0x09, 0xb6 },
    { 0x0a, 0xa4 },
    { 0x0b, 0xbc },
    { 0x0c, 0x83 },
    { 0x0d, 0x49 },
    { 0x0e, 0x5b },
    { 0x0f, 0x44 },
    { 0x10, 0x7c },
    { 0x11, 0xb6 },
    { 0x12, 0xa4 },
    { 0x13, 0xbc },
    { 0x14, 0x7c },
    { 0x15, 0xb1 },
    { 0x16, 0x2c },
    { 0x17, 0x1e },
    { 0x18, 0x86 },
    { 0x19, 0x87 },
    { 0x1a, 0xc5 },
    { 0x1b, 0x49 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x14 },
    { 0x1c, 0x05 },
    { 0x1d, 0xb7 },
    { 0x1e, 0x5c },
    { 0x1f, 0x1f },
    { 0x20, 0x05 },
    { 0x21, 0xb7 },
    { 0x22, 0x5c },
    { 0x23, 0x1f },
    { 0x24, 0x05 },
    { 0x25, 0xb7 },
    { 0x26, 0x5c },
    { 0x27, 0x1f },
    { 0x28, 0x49 },
    { 0x29, 0xe6 },
    { 0x2a, 0x9d },
    { 0x2b, 0x16 },
    { 0x2c, 0xd5 },
    { 0x2d, 0x55 },
    { 0x2e, 0x55 },
    { 0x2f, 0x56 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x14 },
    { 0x58, 0x7f },
    { 0x59, 0x55 },
    { 0x5a, 0x19 },
    { 0x5b, 0x22 },
    { 0x5c, 0x80 },
    { 0x5d, 0xaa },
    { 0x5e, 0xe6 },
    { 0x5f, 0xde },
    { 0x60, 0x7f },
    { 0x61, 0x55 },
    { 0x62, 0x19 },
    { 0x63, 0x22 },
    { 0x64, 0x7f },
    { 0x65, 0x54 },
    { 0x66, 0xdf },
    { 0x67, 0xf0 },
    { 0x68, 0x81 },
    { 0x69, 0x55 },
    { 0x6a, 0x5b },
    { 0x6b, 0x58 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x14 },
    { 0x6c, 0x00 },
    { 0x6d, 0x05 },
    { 0x6e, 0x78 },
    { 0x6f, 0x9f },
    { 0x70, 0x00 },
    { 0x71, 0x05 },
    { 0x72, 0x78 },
    { 0x73, 0x9f },
    { 0x74, 0x00 },
    { 0x75, 0x05 },
    { 0x76, 0x78 },
    { 0x77, 0x9f },
    { 0x78, 0x7c },
    { 0x79, 0xb1 },
    { 0x7a, 0x2c },
    { 0x7b, 0x1e },
    { 0x7c, 0x86 },
    { 0x7d, 0x87 },
    { 0x7e, 0xc5 },
    { 0x7f, 0x49 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x85 },
    { 0x0d, 0xfb },
    { 0x0e, 0x2a },
    { 0x0f, 0x84 },
    { 0x10, 0x76 },
    { 0x11, 0x24 },
    { 0x12, 0xc0 },
    { 0x13, 0x2c },
    { 0x14, 0x7b },
    { 0x15, 0x68 },
    { 0x16, 0x12 },
    { 0x17, 0xec },
    { 0x18, 0x87 },
    { 0x19, 0x0e },
    { 0x1a, 0xa3 },
    { 0x1b, 0x7f },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x82 },
    { 0x35, 0x87 },
    { 0x36, 0x7b },
    { 0x37, 0xab },
    { 0x38, 0x7b },
    { 0x39, 0x04 },
    { 0x3a, 0xcf },
    { 0x3b, 0xba },
    { 0x3c, 0x7f },
    { 0x3d, 0x53 },
    { 0x3e, 0x70 },
    { 0x3f, 0xc6 },
    { 0x40, 0x81 },
    { 0x41, 0x45 },
    { 0x42, 0x0c },
    { 0x43, 0x87 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x44, 0x7f },
    { 0x45, 0xff },
    { 0x46, 0xff },
    { 0x47, 0xff },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x15 },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x44, 0x7f },
    { 0x45, 0xff },
    { 0x46, 0xff },
    { 0x47, 0xff },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x16 },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x44, 0x7f },
    { 0x45, 0xff },
    { 0x46, 0xff },
    { 0x47, 0xff },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x17 },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x08, 0x08 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x44, 0x7f },
    { 0x45, 0xff },
    { 0x46, 0xff },
    { 0x47, 0xff },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x18 },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x44, 0x7f },
    { 0x45, 0xff },
    { 0x46, 0xff },
    { 0x47, 0xff },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x58, 0x7f },
    { 0x59, 0xff },
    { 0x5a, 0xff },
    { 0x5b, 0xff },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x19 },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x1c, 0x7f },
    { 0x1d, 0xff },
    { 0x1e, 0xff },
    { 0x1f, 0xff },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x30, 0x7f },
    { 0x31, 0xff },
    { 0x32, 0xff },
    { 0x33, 0xff },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x44, 0x08 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x58, 0x00 },
    { 0x59, 0xe2 },
    { 0x5a, 0xc4 },
    { 0x5b, 0x6b },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1a },
    { 0x6c, 0x00 },
    { 0x6d, 0x06 },
    { 0x6e, 0xd3 },
    { 0x6f, 0x72 },
    { 0x70, 0x00 },
    { 0x71, 0x02 },
    { 0x72, 0xbb },
    { 0x73, 0x06 },
    { 0x74, 0x00 },
    { 0x75, 0x03 },
    { 0x76, 0x69 },
    { 0x77, 0xc5 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1b },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0xf9 },
    { 0x0d, 0xda },
    { 0x0e, 0xbc },
    { 0x0f, 0x21 },
    { 0x10, 0xfc },
    { 0x11, 0x58 },
    { 0x12, 0x8b },
    { 0x13, 0x89 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1b },
    { 0x1c, 0x00 },
    { 0x1d, 0x06 },
    { 0x1e, 0xd3 },
    { 0x1f, 0x72 },
    { 0x20, 0x00 },
    { 0x21, 0x02 },
    { 0x22, 0xbb },
    { 0x23, 0x06 },
    { 0x24, 0x00 },
    { 0x25, 0x03 },
    { 0x26, 0x69 },
    { 0x27, 0xc5 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0xf9 },
    { 0x35, 0xda },
    { 0x36, 0xbc },
    { 0x37, 0x21 },
    { 0x38, 0xfc },
    { 0x39, 0x58 },
    { 0x3a, 0x8b },
    { 0x3b, 0x89 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1b },
    { 0x44, 0x00 },
    { 0x45, 0x06 },
    { 0x46, 0xd3 },
    { 0x47, 0x72 },
    { 0x48, 0x00 },
    { 0x49, 0x02 },
    { 0x4a, 0xbb },
    { 0x4b, 0x06 },
    { 0x4c, 0x00 },
    { 0x4d, 0x03 },
    { 0x4e, 0x69 },
    { 0x4f, 0xc5 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0xf9 },
    { 0x5d, 0xda },
    { 0x5e, 0xbc },
    { 0x5f, 0x21 },
    { 0x60, 0xfc },
    { 0x61, 0x58 },
    { 0x62, 0x8b },
    { 0x63, 0x89 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1c },
    { 0x6c, 0x7f },
    { 0x6d, 0xff },
    { 0x6e, 0xff },
    { 0x6f, 0xff },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x08, 0x7f },
    { 0x09, 0xff },
    { 0x0a, 0xff },
    { 0x0b, 0xff },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x1c, 0x00 },
    { 0x1d, 0x03 },
    { 0x1e, 0x69 },
    { 0x1f, 0xc5 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x20, 0x08 },
    { 0x21, 0x42 },
    { 0x22, 0xe0 },
    { 0x23, 0xda },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x24, 0x04 },
    { 0x25, 0x0c },
    { 0x26, 0x37 },
    { 0x27, 0x14 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x2c, 0x00 },
    { 0x2d, 0x80 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x34, 0x40 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x38, 0x40 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x40, 0x00 },
    { 0x41, 0x80 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x01 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x5c, 0x00 },
    { 0x5d, 0x80 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x68, 0x00 },
    { 0x69, 0x80 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1d },
    { 0x7c, 0x00 },
    { 0x7d, 0x80 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x08, 0x00 },
    { 0x09, 0x80 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x14, 0x00 },
    { 0x15, 0x80 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x24, 0x00 },
    { 0x25, 0x80 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x2c, 0x00 },
    { 0x2d, 0x80 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x3c, 0x00 },
    { 0x3d, 0x80 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x44, 0x00 },
    { 0x45, 0x80 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x48, 0x00 },
    { 0x49, 0x80 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x50, 0x40 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x54, 0x04 },
    { 0x55, 0x0b },
    { 0x56, 0xa5 },
    { 0x57, 0x3a },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1e },
    { 0x58, 0x04 },
    { 0x59, 0x0f },
    { 0x5a, 0x23 },
    { 0x5b, 0xfa },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x14, 0x00 },
    { 0x15, 0xce },
    { 0x16, 0xc0 },
    { 0x17, 0x8a },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x18, 0x0a },
    { 0x19, 0x0a },
    { 0x1a, 0xae },
    { 0x1b, 0xd2 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x1c, 0x00 },
    { 0x1d, 0x03 },
    { 0x1e, 0x69 },
    { 0x1f, 0xd0 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x20, 0x40 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x28, 0x75 },
    { 0x29, 0xf5 },
    { 0x2a, 0x51 },
    { 0x2b, 0x2e },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x1f },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x57 },
    { 0x2f, 0x62 },

//swap command
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x23 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x01 },


//register tuning
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x07, 0x00 },
    { 0x08, 0x20 },
    { 0x55, 0x07 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x3d, 0x30 },
    { 0x3e, 0x30 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x01 },
    { 0x02, 0x00 },


//Unmute the device
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x03, 0x00 },
    { 0x2a, 0x11 },
};



  
#endif //__TAS3251_H
  
  
  
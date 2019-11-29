/*
********************************************************************************
* COPYRIGHT(c) ЗАО «ЧИП и ДИП», 2019
* 
* Программное обеспечение предоставляется на условиях «как есть» (as is).
* При распространении указание автора обязательно.
********************************************************************************
*/


#ifndef __ADAU1761_H
#define __ADAU1761_H


#define   ADAU1761_I2C_ADDRESS             0x38


#define   ADAU1761_MUX_1_0_ADR             8
#define   ADAU1761_MUX_1_1_ADR             9
#define   ADAU1761_MUTE_ADR                12
#define   ADAU1761_EQ120Hz_START_ADR       14
#define   ADAU1761_EQ1080Hz_START_ADR      19
#define   ADAU1761_EQ4000Hz_START_ADR      24
#define   ADAU1761_LEFT_VOL_ADR            29
#define   ADAU1761_LEFT_VOL_STEP_ADR       30
#define   ADAU1761_RIGHT_VOL_ADR           31
#define   ADAU1761_RIGHT_VOL_STEP_ADR      32
//#define   ADAU1761_BASS_ENABLE_ADR

#define   ADAU1761_SAFELOAD_DATA_START_ADR 0x01
#define   ADAU1761_SAFELOAD_PARAM_ADR      0x06
#define   ADAU1761_SAFELOAD_NUMLOAD        0x07

#define   ADAU1761_SAFELOAD_NUMLOAD_1      1
#define   ADAU1761_SAFELOAD_NUMLOAD_5      5

#define   ADAU1761_LHPVOL_ADR              0x4023
#define   ADAU1761_RHPVOL_ADR              0x4024
#define   ADAU1761_LOUTVOL_ADR             0x4025
#define   ADAU1761_ROUTVOL_ADR             0x4026

#define   ADAU1761_HP_VOLUME_MUTE          0x0D

const uint8_t ADAU1761_HP_VOLUME[] = 
{ 
  0x03, //-57 dB
  0x07, //-56 dB
  0x0F,
  0x17,
  0x1F,
  0x27, //-48 dB
  0x2F,
  0x37,
  0x3F,
  0x47,
  0x4F, //-38 dB
  0x57, 
  0x5F,
  0x67,
  0x6F,
  0x77, //-28 dB
  0x7F,
  0x87, 
  0x8F,
  0x97,
  0x9F, //-18 dB
  0xA7,
  0xAF,
  0xB7, 
  0xBF,
  0xC7, //-8 dB
  0xCF,
  0xD7,
  0xDF,
  0xE7, //0 dB  
};

const uint8_t ADAU1761_OUT_VOLUME[] = 
{ 
  0x02, //-57 dB
  0x06, //-56 dB
  0x0E,
  0x16,
  0x1E,
  0x26, //-48 dB
  0x2E,
  0x36,
  0x3E,
  0x46,
  0x4E, //-38 dB
  0x56, 
  0x5E,
  0x66,
  0x6E,
  0x76, //-28 dB
  0x7E,
  0x86, 
  0x8E,
  0x96,
  0x9E, //-18 dB
  0xA6,
  0xAE,
  0xB6, 
  0xBE,
  0xC6, //-8 dB
  0xCE,
  0xD6,
  0xDE,
  0xE6, //0 dB  
};

#endif //__ADAU1761_H

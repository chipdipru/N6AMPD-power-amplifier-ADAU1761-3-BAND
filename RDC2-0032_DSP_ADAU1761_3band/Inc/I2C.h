/*
********************************************************************************
* COPYRIGHT(c) ЗАО «ЧИП и ДИП», 2017 - 2019
* 
* Программное обеспечение предоставляется на условиях «как есть» (as is).
* При распространении указание автора обязательно.
********************************************************************************
*/


#ifndef __I2C_H
#define __I2C_H


#include "Board.h"


#if defined(TAS3251_DSP)
  #define   INTERNAL_ADDRESS_BYTES_COUNT     1
#elif defined(ADAU1761_DSP) || defined(ADAU1701_DSP)
  #define   INTERNAL_ADDRESS_BYTES_COUNT     2
#endif



void I2C_Init(uint8_t Address);

void I2C_Write(uint16_t StartAddress, uint16_t BytesNum, uint8_t *DataArray);

void I2C_Read(uint16_t StartAddress, uint16_t BytesNum, uint8_t *DataArray);

#if defined(ADAU1761_DSP)
void I2C_ADAU_CLEAR_REGISTER_BLOCK( uint16_t StartAddress, uint16_t BytesNum );
#endif

#endif //__I2C_H



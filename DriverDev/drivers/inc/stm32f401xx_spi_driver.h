/*
 * stm32f401xx_spi_driver.h
 *
 *  Created on: Apr 14, 2026
 *      Author: Mujaid
 */

#ifndef INC_STM32F401XX_SPI_DRIVER_H_
#define INC_STM32F401XX_SPI_DRIVER_H_

#include "stm32f401xx.h"

//SPI Pin Configuration Structure
typedef struct{
	uint8_t SPI_DeviceMode;
	uint8_t SPI_BusConfig;
	uint8_t SPI_SclkSpeed;
	uint8_t SPI_DFF;
	uint8_t SPI_CPOL;
	uint8_t SPI_CPHA;
	uint8_t SPI_SSM;
}SPI_Config_t;


//SPI Handle Structure
typedef struct
{
	SPI_Regdef_t *pSPIx;				// pointer to spi base address
	SPI_Config_t SPIConfig;				// pin configuration settings
}GPIO_Handle_t;


#endif /* INC_STM32F401XX_SPI_DRIVER_H_ */

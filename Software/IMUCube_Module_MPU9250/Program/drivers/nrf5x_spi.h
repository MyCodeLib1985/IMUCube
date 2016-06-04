/* #include "nrf5x_spi.h" */

#ifndef __NRF5x_SPI_H
#define __NRF5x_SPI_H

#include "nrf5x_system.h"
/*====================================================================================================*/
/*====================================================================================================*/
typedef struct {
  const nrf_drv_spi_t instance;
  __IO bool flag;
} nrf_drv_kspi_t;
/*====================================================================================================*/
/*====================================================================================================*/
void SPI_RW( nrf_drv_kspi_t *SPIx, uint8_t *writeData, uint8_t writeLens, uint8_t *readData, uint8_t readLens );
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 

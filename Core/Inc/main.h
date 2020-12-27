/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LATCH_CTRL_ACC_A_Pin GPIO_PIN_2
#define LATCH_CTRL_ACC_A_GPIO_Port GPIOE
#define LATCH_CTRL_ACC_B_Pin GPIO_PIN_3
#define LATCH_CTRL_ACC_B_GPIO_Port GPIOE
#define LATCH_CTRL_ASTPWR_A_Pin GPIO_PIN_4
#define LATCH_CTRL_ASTPWR_A_GPIO_Port GPIOE
#define LATCH_CTRL_ASTPWR_B_Pin GPIO_PIN_5
#define LATCH_CTRL_ASTPWR_B_GPIO_Port GPIOE
#define RELAY_DC24_PWR_Pin GPIO_PIN_6
#define RELAY_DC24_PWR_GPIO_Port GPIOE
#define RELAY_RESERVED2_Pin GPIO_PIN_13
#define RELAY_RESERVED2_GPIO_Port GPIOC
#define RELAY_GUN_DC_N_Pin GPIO_PIN_0
#define RELAY_GUN_DC_N_GPIO_Port GPIOC
#define RELAY_GUN_DC_P_Pin GPIO_PIN_1
#define RELAY_GUN_DC_P_GPIO_Port GPIOC
#define RELAY_GUN_BLEEDER_Pin GPIO_PIN_2
#define RELAY_GUN_BLEEDER_GPIO_Port GPIOC
#define RELAY_AC_CONTACTOR_Pin GPIO_PIN_3
#define RELAY_AC_CONTACTOR_GPIO_Port GPIOC
#define RELAY_12V_PWR_Pin GPIO_PIN_0
#define RELAY_12V_PWR_GPIO_Port GPIOA
#define RELAY_GUN_ASTPWR_Pin GPIO_PIN_1
#define RELAY_GUN_ASTPWR_GPIO_Port GPIOA
#define RELAY_FAN_Pin GPIO_PIN_2
#define RELAY_FAN_GPIO_Port GPIOA
#define RELAY_TMS_PWR_Pin GPIO_PIN_3
#define RELAY_TMS_PWR_GPIO_Port GPIOA
#define RELAY_RESERVED1_Pin GPIO_PIN_4
#define RELAY_RESERVED1_GPIO_Port GPIOA
#define RELAY_GUN_LOCK_Pin GPIO_PIN_5
#define RELAY_GUN_LOCK_GPIO_Port GPIOA
#define ADC_BOARD_TEMP_Pin GPIO_PIN_6
#define ADC_BOARD_TEMP_GPIO_Port GPIOA
#define ADC_AVCC_Pin GPIO_PIN_7
#define ADC_AVCC_GPIO_Port GPIOA
#define ADC_CC1_P_Pin GPIO_PIN_4
#define ADC_CC1_P_GPIO_Port GPIOC
#define ADC_CC1_N_Pin GPIO_PIN_5
#define ADC_CC1_N_GPIO_Port GPIOC
#define ADC_CC2_P_Pin GPIO_PIN_0
#define ADC_CC2_P_GPIO_Port GPIOB
#define ADC_CC2_N_Pin GPIO_PIN_1
#define ADC_CC2_N_GPIO_Port GPIOB
#define WDI_IO_Pin GPIO_PIN_8
#define WDI_IO_GPIO_Port GPIOE
#define IN_GUN_FEEDBACK_Pin GPIO_PIN_9
#define IN_GUN_FEEDBACK_GPIO_Port GPIOE
#define LED_GREEN_Pin GPIO_PIN_10
#define LED_GREEN_GPIO_Port GPIOE
#define LED_RED_Pin GPIO_PIN_11
#define LED_RED_GPIO_Port GPIOE
#define LED_YELLOW_Pin GPIO_PIN_12
#define LED_YELLOW_GPIO_Port GPIOE
#define IN_RESERVED4_Pin GPIO_PIN_13
#define IN_RESERVED4_GPIO_Port GPIOE
#define IN_RESERVED3_Pin GPIO_PIN_14
#define IN_RESERVED3_GPIO_Port GPIOE
#define IN_RESERVED2_Pin GPIO_PIN_15
#define IN_RESERVED2_GPIO_Port GPIOE
#define IN_RESERVED1_Pin GPIO_PIN_10
#define IN_RESERVED1_GPIO_Port GPIOB
#define IN_EMERGSTOP_Pin GPIO_PIN_11
#define IN_EMERGSTOP_GPIO_Port GPIOB
#define FLASH_SPI_CS_Pin GPIO_PIN_12
#define FLASH_SPI_CS_GPIO_Port GPIOB
#define FLASH_SPI_SCK_Pin GPIO_PIN_13
#define FLASH_SPI_SCK_GPIO_Port GPIOB
#define FLASH_SPI_MISO_Pin GPIO_PIN_14
#define FLASH_SPI_MISO_GPIO_Port GPIOB
#define FLASH_SPI_MOSI_Pin GPIO_PIN_15
#define FLASH_SPI_MOSI_GPIO_Port GPIOB
#define RS485_TCU_TX_Pin GPIO_PIN_8
#define RS485_TCU_TX_GPIO_Port GPIOD
#define RS485_TCU_RX_Pin GPIO_PIN_9
#define RS485_TCU_RX_GPIO_Port GPIOD
#define RX485_TCU_EN_Pin GPIO_PIN_10
#define RX485_TCU_EN_GPIO_Port GPIOD
#define BUZZ_Pin GPIO_PIN_8
#define BUZZ_GPIO_Port GPIOA
#define IN_USB_OVERCUR_FLG_Pin GPIO_PIN_9
#define IN_USB_OVERCUR_FLG_GPIO_Port GPIOA
#define USB_EN_Pin GPIO_PIN_10
#define USB_EN_GPIO_Port GPIOA
#define GBCAN_SPICS_Pin GPIO_PIN_15
#define GBCAN_SPICS_GPIO_Port GPIOA
#define GBCAN_SPISCK_Pin GPIO_PIN_10
#define GBCAN_SPISCK_GPIO_Port GPIOC
#define GBCAN_SPMISO_Pin GPIO_PIN_11
#define GBCAN_SPMISO_GPIO_Port GPIOC
#define GBCAN_SPMOSI_Pin GPIO_PIN_12
#define GBCAN_SPMOSI_GPIO_Port GPIOC
#define BCAN_RX_Pin GPIO_PIN_0
#define BCAN_RX_GPIO_Port GPIOD
#define BCAN_TX_Pin GPIO_PIN_1
#define BCAN_TX_GPIO_Port GPIOD
#define GBCAN_TBEN0_Pin GPIO_PIN_2
#define GBCAN_TBEN0_GPIO_Port GPIOD
#define GBCAN_TBEN1_Pin GPIO_PIN_3
#define GBCAN_TBEN1_GPIO_Port GPIOD
#define GBCAN_TBEN2_Pin GPIO_PIN_4
#define GBCAN_TBEN2_GPIO_Port GPIOD
#define RS485_PCS_TX_Pin GPIO_PIN_5
#define RS485_PCS_TX_GPIO_Port GPIOD
#define RS485_PCS_RX_Pin GPIO_PIN_6
#define RS485_PCS_RX_GPIO_Port GPIOD
#define RS485_PCS_EN_Pin GPIO_PIN_7
#define RS485_PCS_EN_GPIO_Port GPIOD
#define INT_GBCAN_Pin GPIO_PIN_4
#define INT_GBCAN_GPIO_Port GPIOB
#define ACAN_RX_Pin GPIO_PIN_5
#define ACAN_RX_GPIO_Port GPIOB
#define ACAN_TX_Pin GPIO_PIN_6
#define ACAN_TX_GPIO_Port GPIOB
#define LED_BOARD_Pin GPIO_PIN_7
#define LED_BOARD_GPIO_Port GPIOB
#define IN_ACC_CHECK_Pin GPIO_PIN_8
#define IN_ACC_CHECK_GPIO_Port GPIOB
#define IN_ASTPWR_CHECK_Pin GPIO_PIN_9
#define IN_ASTPWR_CHECK_GPIO_Port GPIOB
#define IN_UKEY_CHECK_Pin GPIO_PIN_0
#define IN_UKEY_CHECK_GPIO_Port GPIOE
#define RELAY_PWROFF_CTRL_Pin GPIO_PIN_1
#define RELAY_PWROFF_CTRL_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

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
#define button0_Pin GPIO_PIN_2
#define button0_GPIO_Port GPIOA
#define button1_Pin GPIO_PIN_3
#define button1_GPIO_Port GPIOA
#define button2_Pin GPIO_PIN_4
#define button2_GPIO_Port GPIOA
#define led_Pin GPIO_PIN_5
#define led_GPIO_Port GPIOA
#define q0_Pin GPIO_PIN_8
#define q0_GPIO_Port GPIOA
#define seg0_Pin GPIO_PIN_9
#define seg0_GPIO_Port GPIOA
#define seg1_Pin GPIO_PIN_10
#define seg1_GPIO_Port GPIOA
#define seg2_Pin GPIO_PIN_11
#define seg2_GPIO_Port GPIOA
#define seg3_Pin GPIO_PIN_12
#define seg3_GPIO_Port GPIOA
#define seg4_Pin GPIO_PIN_13
#define seg4_GPIO_Port GPIOA
#define seg5_Pin GPIO_PIN_14
#define seg5_GPIO_Port GPIOA
#define seg6_Pin GPIO_PIN_15
#define seg6_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

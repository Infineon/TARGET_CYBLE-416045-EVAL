/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* mtb-pdl-cat1 2.4.0.13881
* personalities 6.0.0.0
* udd 3.0.0.1974
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 0U
#define WCO_IN_NUM 0U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_PORT_PIN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 1U
#define WCO_OUT_NUM 1U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_PORT_PIN P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SW2 (P0_4)
    #define CYBSP_USER_BTN1 CYBSP_SW2
    #define CYBSP_USER_BTN CYBSP_SW2
    #define CYBSP_J2_16 CYBSP_SW2
    #define CYBSP_J6_16 CYBSP_SW2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_15 (P0_5)
    #define CYBSP_J6_15 CYBSP_J2_15
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A5 (P10_0)
    #define CYBSP_J2_11 CYBSP_A5
    #define CYBSP_J6_11 CYBSP_A5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A4 (P10_1)
    #define CYBSP_J2_9 CYBSP_A4
    #define CYBSP_J6_9 CYBSP_A4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A2 (P10_2)
    #define CYBSP_J2_5 CYBSP_A2
    #define CYBSP_J6_5 CYBSP_A2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A3 (P10_3)
    #define CYBSP_J2_7 CYBSP_A3
    #define CYBSP_J6_7 CYBSP_A3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A0 (P10_4)
    #define CYBSP_J2_1 CYBSP_A0
    #define CYBSP_J6_1 CYBSP_A0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_A1 (P10_5)
    #define CYBSP_J2_3 CYBSP_A1
    #define CYBSP_J6_3 CYBSP_A1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_13 (P10_6)
    #define CYBSP_J6_13 CYBSP_J2_13
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D9 (P12_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D8 (P12_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_UART_RX (P5_0)
    #define CYBSP_DEBUG_UART_RX CYBSP_UART_RX
    #define CYBSP_D0 CYBSP_UART_RX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_UART_TX (P5_1)
    #define CYBSP_DEBUG_UART_TX CYBSP_UART_TX
    #define CYBSP_D1 CYBSP_UART_TX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D2 (P5_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D3 (P5_3)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D4 (P5_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D5 (P5_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D6 (P5_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_2 (P6_2)
    #define CYBSP_J6_2 CYBSP_J2_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_4 (P6_3)
    #define CYBSP_J6_4 CYBSP_J2_4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P6_4)
    #define CYBSP_D15 CYBSP_I2C_SCL
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P6_5)
    #define CYBSP_D14 CYBSP_I2C_SDA
#endif //defined (CY_USING_HAL)
#define SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED SWDIO_ENABLED
#define SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT SWDIO_PORT
#define SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PORT_NUM SWDIO_PORT_NUM
#define SWDIO_PIN 6U
#define CYBSP_SWDIO_PIN SWDIO_PIN
#define SWDIO_NUM 6U
#define CYBSP_SWDIO_NUM SWDIO_NUM
#define SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_DRIVEMODE SWDIO_DRIVEMODE
#define SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_HSIOM SWDIO_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDIO_IRQ SWDIO_IRQ
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_PORT_PIN P6_6
    #define CYBSP_SWDIO_HAL_PORT_PIN SWDIO_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO P6_6
    #define CYBSP_SWDIO SWDIO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDIO_HAL_IRQ SWDIO_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDIO_HAL_DIR SWDIO_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
    #define CYBSP_SWDIO_HAL_DRIVEMODE SWDIO_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define SWCLK_ENABLED 1U
#define CYBSP_SWDCK_ENABLED SWCLK_ENABLED
#define SWCLK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT SWCLK_PORT
#define SWCLK_PORT_NUM 6U
#define CYBSP_SWDCK_PORT_NUM SWCLK_PORT_NUM
#define SWCLK_PIN 7U
#define CYBSP_SWDCK_PIN SWCLK_PIN
#define SWCLK_NUM 7U
#define CYBSP_SWDCK_NUM SWCLK_NUM
#define SWCLK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_DRIVEMODE SWCLK_DRIVEMODE
#define SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWDCK_INIT_DRIVESTATE SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_HSIOM SWCLK_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDCK_IRQ SWCLK_IRQ
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_PORT_PIN P6_7
    #define CYBSP_SWDCK_HAL_PORT_PIN SWCLK_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK P6_7
    #define CYBSP_SWDCK SWCLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDCK_HAL_IRQ SWCLK_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDCK_HAL_DIR SWCLK_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
    #define CYBSP_SWDCK_HAL_DRIVEMODE SWCLK_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_6 (P7_1)
    #define CYBSP_J6_6 CYBSP_J2_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_J2_8 (P7_2)
    #define CYBSP_J6_8 CYBSP_J2_8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_D7 (P7_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MOSI (P9_0)
    #define CYBSP_D11 CYBSP_SPI_MOSI
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_MISO (P9_1)
    #define CYBSP_D12 CYBSP_SPI_MISO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CLK (P9_2)
    #define CYBSP_D13 CYBSP_SPI_CLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SPI_CS (P9_3)
    #define CYBSP_D10 CYBSP_SPI_CS
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED3_RGB_RED (P9_4)
    #define CYBSP_LED_RGB_RED CYBSP_LED3_RGB_RED
    #define CYBSP_USER_LED1 CYBSP_LED3_RGB_RED
    #define CYBSP_USER_LED CYBSP_LED3_RGB_RED
    #define CYBSP_J2_10 CYBSP_LED3_RGB_RED
    #define CYBSP_J6_10 CYBSP_LED3_RGB_RED
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED3_RGB_BLUE (P9_5)
    #define CYBSP_LED_RGB_BLUE CYBSP_LED3_RGB_BLUE
    #define CYBSP_USER_LED3 CYBSP_LED3_RGB_BLUE
    #define CYBSP_J2_12 CYBSP_LED3_RGB_BLUE
    #define CYBSP_J6_12 CYBSP_LED3_RGB_BLUE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED3_RGB_GREEN (P9_6)
    #define CYBSP_LED_RGB_GREEN CYBSP_LED3_RGB_GREEN
    #define CYBSP_USER_LED2 CYBSP_LED3_RGB_GREEN
    #define CYBSP_J2_14 CYBSP_LED3_RGB_GREEN
    #define CYBSP_J6_14 CYBSP_LED3_RGB_GREEN
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWDIO_config;
#define CYBSP_SWDIO_config SWDIO_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWDIO_obj;
    #define CYBSP_SWDIO_obj SWDIO_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWCLK_config;
#define CYBSP_SWDCK_config SWCLK_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWCLK_obj;
    #define CYBSP_SWDCK_obj SWCLK_obj
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */

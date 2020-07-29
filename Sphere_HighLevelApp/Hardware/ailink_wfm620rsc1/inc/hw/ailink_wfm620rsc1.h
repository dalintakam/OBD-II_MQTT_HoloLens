/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This header lists the available peripherals for the AI-Link WF-M620-RSC1
// and provides the header definition and application manifest values required to use them.

// This file is autogenerated from ../../ailink_wfm620rsc1.json.  Do not edit it directly.

#pragma once
#include "../../../mt3620/inc/hw/mt3620.h"

// WF-M620-RSC1 pin 1 exposes GPIO 41. Pin shared with GPIO4, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN1_GPIO41 MT3620_GPIO41

// WF-M620-RSC1 pin 1 exposes GPIO 4. Pin shared with GPIO41, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN1_GPIO4 MT3620_GPIO4

// WF-M620-RSC1 pin 2 exposes GPIO 42. Pin shared with GPIO5, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN2_GPIO42 MT3620_GPIO42

// WF-M620-RSC1 pin 2 exposes GPIO 5. Pin shared with GPIO42, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN2_GPIO5 MT3620_GPIO5

// WF-M620-RSC1 pin 3 exposes GPIO 43. Pin shared with GPIO6, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN3_GPIO43 MT3620_GPIO43

// WF-M620-RSC1 pin 3 exposes GPIO 6. Pin shared with GPIO43, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN3_GPIO6 MT3620_GPIO6

// WF-M620-RSC1 pin 4 exposes GPIO 44. Pin shared with GPIO7, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN4_GPIO44 MT3620_GPIO44

// WF-M620-RSC1 pin 4 exposes GPIO 7. Pin shared with GPIO44, PWM Controller 1, and ADC Controller 0.
#define AILINK_WFM620RSC1_PIN4_GPIO7 MT3620_GPIO7

// WF-M620-RSC1 pin 5 exposes GPIO 26. Pin shared with GPIO8, UART0, SPI0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN5_GPIO26 MT3620_GPIO26

// WF-M620-RSC1 pin 5 exposes GPIO 8. Pin shared with GPIO26, UART0, SPI0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN5_GPIO8 MT3620_GPIO8

// WF-M620-RSC1 pin 6 exposes GPIO 27. Pin shared with GPIO9, ISU0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN6_GPIO27 MT3620_GPIO27

// WF-M620-RSC1 pin 6 exposes GPIO 9. Pin shared with GPIO27, ISU0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN6_GPIO9 MT3620_GPIO9

// WF-M620-RSC1 pin 7 exposes GPIO 28. Pin shared with GPIO10, ISU0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN7_GPIO28 MT3620_GPIO28

// WF-M620-RSC1 pin 7 exposes GPIO 10. Pin shared with GPIO28, ISU0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN7_GPIO10 MT3620_GPIO10

// WF-M620-RSC1 pin 8 exposes GPIO 29. Pin shared with GPIO11, UART0, SPI0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN8_GPIO29 MT3620_GPIO29

// WF-M620-RSC1 pin 8 exposes GPIO 11. Pin shared with GPIO29, UART0, SPI0, and PWM Controller 2.
#define AILINK_WFM620RSC1_PIN8_GPIO11 MT3620_GPIO11

// WF-M620-RSC1 pin 9 exposes GPIO 30. Pin shared with ISU0.
#define AILINK_WFM620RSC1_PIN9_GPIO30 MT3620_GPIO30

// WF-M620-RSC1 pin 10 exposes GPIO 32. Pin shared with ISU1.
#define AILINK_WFM620RSC1_PIN10_GPIO32 MT3620_GPIO32

// WF-M620-RSC1 pin 11 exposes GPIO 34. Pin shared with UART1 and SPI1.
#define AILINK_WFM620RSC1_PIN11_GPIO34 MT3620_GPIO34

// WF-M620-RSC1 pin 14 exposes GPIO 31. Pin shared with UART1 and SPI1.
#define AILINK_WFM620RSC1_PIN14_GPIO31 MT3620_GPIO31

// WF-M620-RSC1 pin 15 exposes GPIO 33. Pin shared with ISU1.
#define AILINK_WFM620RSC1_PIN15_GPIO33 MT3620_GPIO33

// WF-M620-RSC1 pin 16 exposes GPIO 35. Pin shared with SPI1.
#define AILINK_WFM620RSC1_PIN16_GPIO35 MT3620_GPIO35

// WF-M620-RSC1 PWM CONTROLLER 1: channel 0 on pin 1, channel 1 on pin 2, channel 2 on pin 3, and channel 4 on pin 4. Pins for this controller are shared with AILINK_WFM620RSC1_PIN1_GPIO4/GPIO41, AILINK_WFM620RSC1_PIN2_GPIO5/GPIO42, AILINK_WFM620RSC1_PIN3_GPIO6/GPIO44, AILINK_WFM620RSC1_PIN4_GPIO7/GPIO45. If this PWM controller is requested, none of these GPIOs can be used.
#define AILINK_WFM620RSC1_PWM_CONTROLLER1 MT3620_PWM_CONTROLLER1

// WF-M620-RSC1 PWM CONTROLLER 2: channel 0 on pin 5, channel 1 on pin 6, channel 2 on pin 7, and channel 4 on pin 8. Pins for this controller are shared with AILINK_WFM620RSC1_PIN5_GPIO8/GPIO26, AILINK_WFM620RSC1_PIN6_GPIO9/GPIO27, AILINK_WFM620RSC1_PIN7_GPIO10/GPIO28, AILINK_WFM620RSC1_PIN8_GPIO11/GPIO29. If this PWM controller is requested, none of these GPIOs can be used.
#define AILINK_WFM620RSC1_PWM_CONTROLLER2 MT3620_PWM_CONTROLLER2

// WF-M620-RSC1 ADC CONTROLLER 0: channel 0 on pin 1, channel 1 on pin 2, channel 2 on pin 3, and channel 3 on pin 4. Pins for this controller are shared with AILINK_WFM620RSC1_PIN1_GPIO4/GPIO41, AILINK_WFM620RSC1_PIN2_GPIO5/GPIO42, AILINK_WFM620RSC1_PIN3_GPIO6/GPIO43, AILINK_WFM620RSC1_PIN4_GPIO7/GPIO44. If this ADC controller is requested, none of these GPIOs can be used.
#define AILINK_WFM620RSC1_ADC_CONTROLLER0 MT3620_ADC_CONTROLLER0

// WF-M620-RSC1 ISU 0 configured as UART, pin 7 (RX), pin 5 (TX), pin 8 (CTS), pin 6 (RTS).
#define AILINK_WFM620RSC1_ISU0_UART MT3620_ISU0_UART

// WF-M620-RSC1 ISU 0 configured as SPI, pin 7 (MISO), pin 5 (SCLK), pin 8 (CSA), pin 6 (MOSI) and pin 9 (CSB).
#define AILINK_WFM620RSC1_ISU0_SPI MT3620_ISU0_SPI

// WF-M620-RSC1 ISU 0 configured as I2C,  pin 7 (SDA) and pin 6 (SCL).
#define AILINK_WFM620RSC1_ISU0_I2C MT3620_ISU0_I2C

// WF-M620-RSC1 ISU 1 configured as UART, pin 15 (RX), pin 14 (TX), pin 11 (CTS), pin 10 (RTS).
#define AILINK_WFM620RSC1_ISU1_UART MT3620_ISU1_UART

// WF-M620-RSC1 ISU 1 configured as SPI, pin 15 (MISO), pin 14 (SCLK), pin 11 (CSA), pin 10 (MOSI) and pin 16 (CSB).
#define AILINK_WFM620RSC1_ISU1_SPI MT3620_ISU1_SPI

// WF-M620-RSC1 ISU 1 configured as I2C,  pin 15 (SDA) and pin 10 (SCL).
#define AILINK_WFM620RSC1_ISU1_I2C MT3620_ISU1_I2C


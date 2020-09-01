/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 nitz � chris marc dailey https://cmd.wtf
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _CMD_WTF_ODIIN_
#define _CMD_WTF_ODIIN_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(1, 10)	// Red
#define LED_STATE_ON          0

#define LED_RGB_RED_PIN       _PINNUM(1, 10)
#define LED_RGB_GREEN_PIN     _PINNUM(1, 11)
#define LED_RGB_BLUE_PIN      _PINNUM(1, 12)
#define BOARD_RGB_BRIGHTNESS  0x404040

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(1, 0)		// P1.00: User Button
#define BUTTON_2              _PINNUM(1, 7)		// P1.07: NC
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "cmd.wtf"
#define BLEDIS_MODEL          "Odiin"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID            0x1209			// pending approval from pid.codes
#define USB_DESC_UF2_PID        0x0D10			// pending approval from pid.codes
#define USB_DESC_CDC_ONLY_PID   0x0D10

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "Odiin by cmd.wtf"
#define UF2_VOLUME_LABEL      "ODIINBOOT"
#define UF2_BOARD_ID          "Odiin"
#define UF2_INDEX_URL         "https://cmd.wtf/projects/odiin?utm_source=odiin-device&utm_medium=bootloader&utm_campaign=odiin"


#endif /* _CMD_WTF_ODIIN_ */

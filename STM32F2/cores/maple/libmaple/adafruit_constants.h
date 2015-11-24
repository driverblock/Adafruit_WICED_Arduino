/**************************************************************************/
/*!
    @file     adafruit_constants.h
    @author   hathach

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) 2015, Adafruit Industries (adafruit.com)
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/

#ifndef _ADAFRUIT_CONSTANTS_H_
#define _ADAFRUIT_CONSTANTS_H_

#ifdef __cplusplus
 extern "C" {
#endif

enum
{
  WIFI_INTERFACE_STATION = 0,
  WIFI_INTERFACE_AP      = 1,
  WIFI_INTERFACE_P2P     = 2,
};

/**
 * @enum err_t
 * @brief Error opcodes
 */
typedef enum
{
  ERROR_NONE              = 0x0000,
  ERROR_INVALIDPARAMETER  = 0x8025,
  ERROR_NO_MEMORY         = 0x80AA   /**< Temporary */
} err_t;

/**
 * @enum mqtt_evt_opcode_t
 * @brief MQTT event opcodes
 */
typedef enum
{
  MQTT_EVT_INVALID          = 0x00,  /**< Invalid event code            */
  MQTT_EVT_DISCONNECTED     = 0x81,  /**< Link disconnected event code  */
  MQTT_EVT_TOPIC_CHANGED    = 0x82   /**< Topic changed event code      */

} mqtt_evt_opcode_t;

#ifdef __cplusplus
 }
#endif

#endif /* _ADAFRUIT_CONSTANTS_H_ */

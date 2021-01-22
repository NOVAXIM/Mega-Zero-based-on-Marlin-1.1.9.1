/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from 128x19 C/C++ data
 */
#pragma once

#define STATUS_SCREEN_HOTEND_TEXT_X(E) (76 + (E) * 20)
#define STATUS_SCREEN_BED_TEXT_X (HOTENDS > 1 ? 81 : 73)
#define STATUS_SCREEN_FAN_TEXT_X 103

#define STATUS_SCREENWIDTH 128

#if HOTENDS < 2

  const unsigned char status_screen0_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B01111000,B00010000,
    B00011101,B11000000,B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00110000,B00010000,
    B00001101,B10000000,B00000000,B00000000,B00000000,B00001000,B10000000,B00000000,B00000000,B00000000,B01111111,B10000000,B00000000,B00101100,B00000000,B11010000,
    B00001101,B10000000,B00000000,B00000000,B00000000,B00000000,B10000000,B00000000,B00000000,B00000000,B11111111,B11000000,B00000000,B00101110,B00110001,B11010000,
    B00001101,B10000111,B10000111,B11000111,B00000000,B00000001,B00000111,B10011101,B11000011,B00000000,B11111111,B11000000,B00000000,B00101111,B01111011,B11010000,
    B00001101,B10001000,B01001000,B10001000,B10000000,B00000001,B00001000,B01000110,B01000100,B10000000,B11111111,B11000000,B00000000,B00101111,B01111011,B11010000,
    B00001010,B10001000,B01001000,B10000001,B10000000,B00000010,B00001000,B01000100,B00001000,B01000000,B01111111,B10000000,B00000000,B00101110,B00110001,B11010000,
    B00001010,B10001111,B11000111,B00000110,B10000000,B00000010,B00001111,B11000100,B00001000,B01000000,B01111111,B10000000,B00000000,B00101100,B00000000,B11010000,
    B00001010,B10001000,B00001000,B00001000,B10000000,B00000100,B00001000,B00000100,B00001000,B01000000,B11111111,B11000000,B00000000,B00100000,B00110000,B00010000,
    B00001010,B10001000,B01000111,B10001001,B10000000,B00000100,B01001000,B01000100,B00000100,B10000000,B11111111,B11000000,B00000000,B00100000,B01111000,B00010000,
    B00011010,B11000111,B10001000,B01000110,B11000000,B00001111,B11000111,B10011111,B00000011,B00000000,B11111111,B11000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00001000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B00000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011110,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00111111,B11111111,B11110000
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00011101,B11000000,B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00001101,B10000000,B00000000,B00000000,B00000000,B00001000,B10000000,B00000000,B00000000,B00000000,B01111111,B10000000,B00000000,B00101111,B00000011,B11010000,
    B00001101,B10000000,B00000000,B00000000,B00000000,B00000000,B10000000,B00000000,B00000000,B00000000,B11111111,B11000000,B00000000,B00100000,B00110000,B00010000,
    B00001101,B10000111,B10000111,B11000111,B00000000,B00000001,B00000111,B10011101,B11000011,B00000000,B11111111,B11000000,B00000000,B00100000,B01111000,B00010000,
    B00001101,B10001000,B01001000,B10001000,B10000000,B00000001,B00001000,B01000110,B01000100,B10000000,B11111111,B11000000,B00000000,B00100000,B01111000,B00010000,
    B00001010,B10001000,B01001000,B10000001,B10000000,B00000010,B00001000,B01000100,B00001000,B01000000,B01111111,B10000000,B00000000,B00100000,B00110000,B00010000,
    B00001010,B10001111,B11000111,B00000110,B10000000,B00000010,B00001111,B11000100,B00001000,B01000000,B01111111,B10000000,B00000000,B00101111,B00000011,B11010000,
    B00001010,B10001000,B00001000,B00001000,B10000000,B00000100,B00001000,B00000100,B00001000,B01000000,B11111111,B11000000,B00000000,B00101111,B10000111,B11010000,
    B00001010,B10001000,B01000111,B10001001,B10000000,B00000100,B01001000,B01000100,B00000100,B10000000,B11111111,B11000000,B00000000,B00101111,B10000111,B11010000,
    B00011010,B11000111,B10001000,B01000110,B11000000,B00001111,B11000111,B10011111,B00000011,B00000000,B11111111,B11000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00001000,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B00000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011110,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B00111111,B11111111,B11110000
  };

#else // HOTENDS >= 2
  #error "Anycubic Mega Zero does not support more than one hotend"
#endif // HOTENDS >= 2

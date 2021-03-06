/*
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: Jan 6, 2016
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */

#ifndef INCLUDE_CFG_CS_BLACKLIST_H_
#define INCLUDE_CFG_CS_BLACKLIST_H_

#include <stdint.h>
#include "ble_gap.h"

//! Number of addresses in the white list
#define BLACKLIST_LENGTH 46

//! Remember that the bluetooth address is reversed!
static const uint8_t BlackList[BLACKLIST_LENGTH * BLE_GAP_ADDR_LEN] = {
		0xFE, 0xDA, 0x28, 0x73, 0x27, 0xF8,
		0xCD, 0x03, 0xAC, 0xB8, 0xC1, 0xF1,
		0x04, 0x06, 0xC1, 0x95, 0x89, 0xE1,
		0x5E, 0xFA, 0xD9, 0x1F, 0x26, 0xDB,
		0xD4, 0x57, 0x2C, 0xA1, 0x20, 0xF0,
		0x81, 0xF4, 0x78, 0x1A, 0x92, 0xC9,
		0x91, 0x00, 0xEF, 0x84, 0x5E, 0xCF,
		0xF6, 0x6A, 0xE3, 0xF8, 0xF5, 0xED,
		0xC1, 0x6D, 0x14, 0x30, 0x4D, 0xEB,
		0x92, 0x53, 0x23, 0x89, 0xA2, 0xF4,
		0x0B, 0xEE, 0xDA, 0x34, 0x82, 0xEB,
		0x47, 0xE1, 0x7E, 0xF3, 0xAF, 0xED,
		0xC7, 0xD4, 0xD7, 0xA8, 0x27, 0xC6,
		0xFF, 0xCA, 0xC5, 0xD7, 0x31, 0xE0,
		0x5A, 0x2A, 0xBD, 0xD6, 0x59, 0xD7,
		0x85, 0x58, 0x2F, 0x8E, 0x41, 0xDE,
		0x43, 0x49, 0x82, 0x51, 0xD5, 0xD7,
		0x88, 0x0B, 0x58, 0x99, 0xCB, 0xFD,
		0x1D, 0x1F, 0x78, 0x60, 0x36, 0xEF,
		0x77, 0xF4, 0x29, 0x37, 0xB7, 0xE8,
		0x6F, 0x92, 0x5E, 0x3F, 0x25, 0xC5,
		0x8E, 0x13, 0x8A, 0xED, 0xA6, 0xEA,
		0x74, 0x15, 0x3A, 0x64, 0x71, 0xC5,
		0x44, 0x1A, 0xAF, 0x5A, 0x1A, 0xDC,
		0xC6, 0xC8, 0x5A, 0x0C, 0xA0, 0xC6,
		0x73, 0xB2, 0x30, 0x9E, 0x0B, 0xD4,
		0x46, 0x83, 0x7A, 0x60, 0x02, 0xCC,
		0x90, 0x72, 0xEC, 0x34, 0xA7, 0xD5,
		0x81, 0x60, 0x9B, 0xE7, 0xE3, 0xDB,
		0x6C, 0x54, 0x90, 0x9A, 0xDF, 0xE8,
		0x09, 0x16, 0x34, 0x1C, 0xD9, 0xC4,
		0x91, 0xF5, 0xB9, 0x3E, 0x82, 0xC0,
		0xF2, 0x71, 0x21, 0xC6, 0xBE, 0xD7,
		0xC4, 0x52, 0x58, 0xC2, 0xC9, 0xEB,
		0x78, 0x04, 0x5F, 0x09, 0x92, 0xC2,
		0xD2, 0x4D, 0xC1, 0x28, 0x85, 0xF8,
		0xE0, 0x25, 0x0A, 0x9A, 0xB1, 0xC6,
		0x3E, 0xE0, 0xC4, 0xE5, 0xAC, 0xF8,
		0x0E, 0x04, 0xF1, 0x55, 0x23, 0xFA,
		0x7D, 0x8C, 0x49, 0x4B, 0xA7, 0xF5,
		0x06, 0x6B, 0xA4, 0x12, 0x6E, 0xC0,
		0xAC, 0x50, 0xEF, 0x08, 0x79, 0xEF,
		0xD9, 0x7B, 0x4E, 0x93, 0x00, 0xE8,
		0xA9, 0x6B, 0xA7, 0xAE, 0xC5, 0xE8,
		0xEE, 0xB8, 0x47, 0x68, 0x64, 0xEA,
		0xE9, 0x8F, 0xF9, 0x85, 0x04, 0xFE,
};


#endif 	/** INCLUDE_CFG_CS_BLACKLIST_H_ */

/*
 *   openMMC -- Open Source modular IPM Controller firmware
 *
 *   Copyright (C) 2015  Julian Mendez  <julian.mendez@cern.ch>
 *   Copyright (C) 2015-2016  Henrique Silva <henrique.silva@lnls.br>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
 */

/*********************************************
 * Common defines
 *********************************************/
#define RTM_LANG_CODE               0
#define RTM_FRU_FILE_ID             "RTMFRU"       //Allows knowing the source of the FRU present in the memory

#define RTM_BOARD_INFO_AREA_ENABLE
#define RTM_PRODUCT_INFO_AREA_ENABLE
#define RTM_MULTIRECORD_AREA_ENABLE
#define RTM_ZONE3_COMPATIBILITY_REC_ENABLE

/*********************************************
 * Board information area
 *********************************************/
#define RTM_BOARD_MANUFACTURER      "Creotech"
#define RTM_BOARD_NAME              "RTM-8-SFP"
#define RTM_BOARD_SN                "000000001"
#define RTM_BOARD_PN                "RTM-8-SFP"

/*********************************************
 * Product information area
 *********************************************/
#define RTM_PRODUCT_MANUFACTURER    "LNLS"
#define RTM_PRODUCT_NAME            "AFC SFP Module"
#define RTM_PRODUCT_PN              "00001"
#define RTM_PRODUCT_VERSION         "1"
#define RTM_PRODUCT_SN              "00001"
#define RTM_PRODUCT_ASSET_TAG       "No tag"

/*********************************************
 * RTM Compatibility Record
 *********************************************/
#define RTM_COMPATIBILITY_CODE               0x11223344

/**********************************************
 * PICMG: Module current record
 **********************************************/
#define RTM_MODULE_CURRENT_RECORD            current_in_ma(2000)

/*
 * Copyright (c) 2003 VIA Networking, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *
 * File: tcrc.h
 *
 * Purpose: Implement functions to caculate CRC
 *
 * Author: Tevin Chen
 *
 * Date: Jan. 28, 1997
 *
 */


#ifndef __TCRC_H__
#define __TCRC_H__

#if !defined(__TTYPE_H__)
#include "ttype.h"
#endif




/*---------------------  Export Definitions -------------------------*/

/*---------------------  Export Types  ------------------------------*/

/*---------------------  Export Macros ------------------------------*/

/*---------------------  Export Classes  ----------------------------*/

/*---------------------  Export Variables  --------------------------*/

/*---------------------  Export Functions  --------------------------*/
#ifdef __cplusplus
extern "C" {                            /* Assume C declarations for C++ */
#endif /* __cplusplus */


DWORD CRCdwCrc32(PBYTE pbyData, UINT cbByte, DWORD dwCrcSeed);
DWORD CRCdwGetCrc32(PBYTE pbyData, UINT cbByte);
DWORD CRCdwGetCrc32Ex(PBYTE pbyData, UINT cbByte, DWORD dwPreCRC);


#ifdef __cplusplus
}                                       /* End of extern "C" { */
#endif /* __cplusplus */




#endif // __TCRC_H__




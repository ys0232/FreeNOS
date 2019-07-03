/*
 * Copyright (C) 2015 Niek Linnenbank
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
 */

#ifndef __ARM_RASPBERRY_SYSTEM_H
#define __ARM_RASPBERRY_SYSTEM_H

/** Raspberry Pi 2 have a Broadcom 2836 SoC */
#define __SYSTEM
#define ARM
#define ARMV7
#define BCM2835
#define BCM2836

/** Default IO base on the Broadcom 2836 */
#define IO_BASE 0x3F000000
#define IO_SIZE (1024*1024*128)

#include <arm/ARMConstant.h>

#ifndef __HOST__
#include <arm/ARMCore.h>
#include <arm/ARMCacheV7.h>
#include <arm/ARMIO.h>
#include <arm/ARMPaging.h>
#include <arm/ARMMap.h>
#include <arm/ARMKernel.h>
#include <arm/ARMProcess.h>

#include <FreeNOS/API.h>
#endif /* __HOST__ */

#endif /* __ARM_RASPBERRY_SYSTEM_H */

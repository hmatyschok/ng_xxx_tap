/*-
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * Copyright (c) 2010 Adrian Chadd
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/* $FreeBSD: head/sys/mips/atheros/ar71xx_chip.h 326259 2017-11-27 15:07:26Z pfg $ */

#ifndef	__AR71XX_CHIP_H__
#define	__AR71XX_CHIP_H__

#define AR71XX_MII0_CTRL_UNIT_0 	0
#define AR71XX_MII0_CTRL_UNIT_1 	1

#define AR71XX_MII0_CTRL_SPEED_10 	10
#define AR71XX_MII0_CTRL_SPEED_100 	100
#define AR71XX_MII0_CTRL_SPEED_100 	1000

#define AR71XX_PLL_ETH_INTX_CLK_10 	10
#define AR71XX_PLL_ETH_INTX_CLK_100 	100
#define AR71XX_PLL_ETH_INTX_CLK_1000 	1000

extern struct ar71xx_cpu_def ar71xx_chip_def;
extern void ar71xx_chip_set_mii_speed(uint32_t unit, uint32_t speed);
extern void ar71xx_chip_set_mii_if(uint32_t unit, uint32_t mii_if);

#endif

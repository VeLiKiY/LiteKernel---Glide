/*
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
/*  Size definitions
 *  Copyright (C) ARM Limited 1998. All rights reserved.
 */
#include <asm-generic/sizes.h>

#define SZ_48M  (SZ_32M + SZ_16M)
#define SZ_160M (SZ_128M | SZ_32M)
#define SZ_200M (SZ 160M + SZ_32M + SZ_8M) 

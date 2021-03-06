/* ripngd memory type declarations
 *
 * Copyright (C) 2015  David Lamparter
 *
 * This file is part of Quagga.
 *
 * Quagga is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * Quagga is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _QUAGGA_RIPNG_MEMORY_H
#define _QUAGGA_RIPNG_MEMORY_H

#include "memory.h"

DECLARE_MGROUP(RIPNGD)
DECLARE_MTYPE(RIPNG)
DECLARE_MTYPE(RIPNG_ROUTE)
DECLARE_MTYPE(RIPNG_AGGREGATE)
DECLARE_MTYPE(RIPNG_PEER)
DECLARE_MTYPE(RIPNG_OFFSET_LIST)
DECLARE_MTYPE(RIPNG_RTE_DATA)

#endif /* _QUAGGA_RIPNG_MEMORY_H */

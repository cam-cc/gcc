/* Definitions of target machine for GNU compiler.  MIPS version with
   GOFAST floating point library.
   Copyright (C) 1994 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#include "mips/mips.h"

#undef CPP_PREDEFINES
#define CPP_PREDEFINES "-Dmips -DMIPSEB -DR3000 -D_mips -D_MIPSEB -D_R3000"

/* Use memcpy, et. al., rather than bcopy.  */
#define TARGET_MEM_FUNCTIONS

/* US Software GOFAST library support.  */
#include "gofast.h"
#define INIT_TARGET_OPTABS INIT_GOFAST_OPTABS

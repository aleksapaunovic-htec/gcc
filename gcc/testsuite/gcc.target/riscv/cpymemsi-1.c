/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-pedantic-errors" } */
/* { dg-timeout-factor 2 } */

#include "../../gcc.dg/memcmp-1.c"
/* Yeah, this memcmp test exercises plenty of memcpy, more than any of the
   memcpy tests.  */

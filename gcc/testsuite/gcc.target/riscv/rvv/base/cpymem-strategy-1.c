/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv32gcv -mabi=ilp32d -mstringop-strategy=libcall" } */

#include "cpymem-strategy.h"

/* { dg-final { scan-assembler-times {call\tmemcpy} 2 } } */

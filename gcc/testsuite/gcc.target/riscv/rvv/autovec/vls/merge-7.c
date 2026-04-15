/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv_zvfhmin -mabi=lp64d -O3 -mrvv-max-lmul=m8" } */

#include "../vls-vlmax/merge-7.c"

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 2 } } */

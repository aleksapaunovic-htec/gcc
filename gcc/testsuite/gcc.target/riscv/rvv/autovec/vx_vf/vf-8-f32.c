/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -fno-fast-math --param=fpr2vr-cost=4" } */

#include "vf-7-f32.c"

/* { dg-final { scan-assembler-not {vfmin.vf} } } */
/* { dg-final { scan-assembler-not {vfmax.vf} } } */

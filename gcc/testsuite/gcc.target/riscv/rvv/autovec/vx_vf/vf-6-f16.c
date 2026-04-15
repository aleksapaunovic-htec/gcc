/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -fno-fast-math --param=fpr2vr-cost=1" } */

#include "vf-5-f16.c"

/* { dg-final { scan-assembler-not {vfmin.vf} } } */
/* { dg-final { scan-assembler-not {vfmax.vf} } } */

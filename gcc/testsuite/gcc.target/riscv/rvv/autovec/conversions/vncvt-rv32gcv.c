/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-std=c99 -fno-vect-cost-model -march=rv32gcv -mabi=ilp32d -mrvv-vector-bits=zvl" } */

#include "vncvt-template.h"

/* { dg-final { scan-assembler-times {\tvnsrl.wi} 10 } } */

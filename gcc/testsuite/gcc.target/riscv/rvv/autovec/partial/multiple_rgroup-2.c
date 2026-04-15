/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-march=rv32gcv -mabi=ilp32d -mrvv-vector-bits=zvl" } */

#include "multiple_rgroup-2.h"

TEST_ALL (test_1)

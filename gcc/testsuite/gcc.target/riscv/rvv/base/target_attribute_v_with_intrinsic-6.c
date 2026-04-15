/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gc -mabi=lp64d -O3" } */

#include "riscv_vector.h"

int
__attribute__((riscv_vector_cc))
test_1 (int a)
{
  return a + 1;
}
/* { dg-error "function attribute 'riscv_vector_cc' requires the V ISA extension" "" { target { "riscv*-*-*" } } 0 } */

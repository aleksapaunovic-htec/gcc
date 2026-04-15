/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gc -mabi=lp64d -O3" } */

#include "riscv_vector.h"

vint32m1_t test_1 ()
{
  vint32m1_t a;
  return a;
}

/* { dg-error "return type 'vint32m1_t' requires the V ISA extension" "" { target { "riscv*-*-*" } } 0 } */

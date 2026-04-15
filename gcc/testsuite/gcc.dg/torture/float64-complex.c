/* Test _Float64 complex arithmetic.  */
/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "" } */
/* { dg-add-options float64 } */
/* { dg-require-effective-target float64_runtime } */

#define WIDTH 64
#define EXT 0
#include "floatn-complex.h"

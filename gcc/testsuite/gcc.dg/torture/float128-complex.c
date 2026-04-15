/* Test _Float128 complex arithmetic.  */
/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "" } */
/* { dg-add-options float128 } */
/* { dg-require-effective-target float128_runtime } */

#define WIDTH 128
#define EXT 0
#include "floatn-complex.h"

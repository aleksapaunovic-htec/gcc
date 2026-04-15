/* Test _Float32 complex arithmetic.  */
/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "" } */
/* { dg-add-options float32 } */
/* { dg-require-effective-target float32_runtime } */

#define WIDTH 32
#define EXT 0
#include "floatn-complex.h"

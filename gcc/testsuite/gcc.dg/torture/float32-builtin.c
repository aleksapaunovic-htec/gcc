/* Test _Float32 built-in functions.  */
/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "" } */
/* { dg-add-options float32 } */
/* { dg-add-options ieee } */
/* { dg-require-effective-target float32_runtime } */

#define WIDTH 32
#define EXT 0
#include "floatn-builtin.h"

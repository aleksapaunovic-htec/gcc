/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-skip-if "Stack alignment is too small" { hppa*-*-hpux* } } */

#include "check.h"

void
f ()
{
  unsigned long tmp[4] __attribute__((aligned(64)));
  check (&tmp, 64);
}

int
main()
{
  f();
  return 0;
}

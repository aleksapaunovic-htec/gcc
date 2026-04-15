/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-skip-if "Stack alignment is too small" { hppa*-*-hpux* } } */

#include "check.h"

#ifndef ALIGNMENT
#define ALIGNMENT	64
#endif

typedef int aligned __attribute__((aligned(ALIGNMENT)));

int global;

void
foo (void)
{
  aligned i;

  if (check_int (&i,  __alignof__(i)) != i)
    abort ();
}

int
main()
{
  foo ();
  return 0;
}

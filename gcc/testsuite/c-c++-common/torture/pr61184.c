/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fno-strict-overflow" } */

short a; 

void
foo (void)
{
  for (a = 0; a >= 0; a++)
    ;
}

int
main ()
{
  foo ();
  return 0;
}

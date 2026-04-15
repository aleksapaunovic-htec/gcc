/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

[[gnu::noipa]] int
f1 (int x, int y)
{
  return (x < y) < (y < x);
}

int
main (void)
{
  if (f1 (-1, 0))
    __builtin_abort ();
  return 0;
}

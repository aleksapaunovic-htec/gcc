/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

extern void abort ();

unsigned long long xh = 1;

int
main ()
{
  unsigned long long yh = 0xffffffffull;
  unsigned long long z = xh * yh;

  if (z != yh)
    abort ();

  return 0;
}

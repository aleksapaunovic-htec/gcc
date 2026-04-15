/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-std=gnu89" } */

f (n)
     unsigned n;
{
  if ((int) n >= 0)
    abort ();
}

main ()
{
  unsigned x = ~0;
  f (x);
  exit (0);
}

/* { dg-do run } */ 
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-msse" { target sse2_runtime } } */

int a, d;
int *b = &a, **c;
int
main ()
{
  int e;
    {
      int f[4];
      for (d = 0; d < 4; d++)
	f[d] = 1;
      e = f[1];
    }
  int *g[28] = { };
  *b = e;
  c = &g[0];
  if (a != 1)
    __builtin_abort ();
  return 0;
}

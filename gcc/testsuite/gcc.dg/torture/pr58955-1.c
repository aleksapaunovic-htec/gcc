/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

extern void abort (void);

int a, b, c, d[4] = { 0, 0, 0, 1 };

int
main ()
{
  for (; a < 4; a++)
    {
      int e = d[a];
      for (c = 1; c < 1; c++);
      b = e;
      d[a] = 0;
    }
  if (b != 1)
    abort ();
  return 0;
}

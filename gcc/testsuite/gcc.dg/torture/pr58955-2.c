/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

extern void abort (void);

int a, b[10];

int
main ()
{
  for (; a < 2; a++)
    {
      b[a] = 1;
      b[a + 1] = 0;
    }
  if (b[1] != 1)
    abort ();
  return 0;
}

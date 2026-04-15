/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int
f (int n)
{
  return (n > 0) - (n < 0);
}

int
main (void)
{
  if (f (-1) != -1)
    abort ();
  if (f (1) != 1)
    abort ();
  if (f (0) != 0)
    abort ();
  exit (0);
}

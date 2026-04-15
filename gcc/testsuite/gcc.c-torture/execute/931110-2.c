/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int
main (void)
{
  static int a[] = {3, 4};
  register int *b;
  int c;

  b = a;
  c = *b++ % 8;
  if (c != 3)
    abort ();
  exit (0);
}

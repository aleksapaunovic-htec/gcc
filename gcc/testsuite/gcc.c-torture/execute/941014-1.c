/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int f (int a, int b) { }

int
main (void)
{
  unsigned long addr1;
  unsigned long addr2;

  addr1 = (unsigned long) &f;
  addr1 += 5;
  addr2 = 5 + (unsigned long) &f;

  if (addr1 != addr2)
    abort ();
  exit (0);
}

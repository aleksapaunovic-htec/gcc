/* { dg-require-effective-target riscv_v_ok } */
extern void abort (void);
int main ()
{
  short ssi = 126;
  unsigned short usi = 65280;
  int fail = !(ssi < usi);
  if (fail)
    abort ();
  return 0;
}


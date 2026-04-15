/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

long x = -1L;

int main()
{
  long b = (x != -1L);

  if (b)
    abort();

  exit(0);
}


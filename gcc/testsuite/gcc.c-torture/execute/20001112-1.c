/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int main ()
{
  long long i = 1;

  i = i * 2 + 1;
  
  if (i != 3)
    abort ();
  exit (0);
}

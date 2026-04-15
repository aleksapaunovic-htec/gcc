/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int
main(void)
{
  int i;
  for (i = 1; i < 100; i++)
    ;
  if (i == 100) 
    exit (0);
  abort ();
}


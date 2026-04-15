/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int
main()
{
  double x = 1.0;
  double y = 2.0;

  if ((y > x--) != 1)
    abort ();
  exit (0);
}



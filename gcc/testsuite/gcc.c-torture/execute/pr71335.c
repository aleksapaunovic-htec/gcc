/* { dg-require-effective-target riscv_v_ok } */
void exit (int);

int a;
int
main ()
{
  int b = 0;
  while (a < 0 || b)
    {
      b = 0;
      for (; b < 9; b++)
	;
    }
  exit (0);
}

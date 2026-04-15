/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int a;
int main()
{
  unsigned b = 0;
  int c = 1;
  for (;b < 3; b++)
    {
      if (c < b)
	__builtin_abort ();
      c+=3;
    }
  return 0;
}

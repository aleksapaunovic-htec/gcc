/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fno-vect-cost-model" } */

int a[8];
int *b = &a[6];
char c;
int main()
{
  int d = 7;
  for (; d >= 0; d--)
    {
      *b = 1;
      c = a[d] >> 3;
      a[d] = c;
    }
  if (a[6] != 1)
    __builtin_abort ();
  return 0;
}

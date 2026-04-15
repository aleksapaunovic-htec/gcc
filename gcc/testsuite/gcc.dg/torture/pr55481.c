/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int main()
{
  signed char result = 0;
  int n;
  for (n = 0; n < 13; ++n)
    {
      int tem = result;
      tem = tem + 31;
      result = tem;
    }
  if (result != -109)
    __builtin_abort ();
  return 0;
}

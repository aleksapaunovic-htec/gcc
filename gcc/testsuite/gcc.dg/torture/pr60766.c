/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int m = 9;

int main()
{
  int n, x;

  n = m;
  for (x = 0; x <= n; x++)
    if (n == x + (x + 1) + (x + 2))
      return 0;

  __builtin_abort();
}

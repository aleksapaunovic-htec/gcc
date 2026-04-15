/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

signed char a, b;
int main()
{
  for (b = -7; b; b += 3)
    if (a)
      __builtin_abort();
  return 0;
}

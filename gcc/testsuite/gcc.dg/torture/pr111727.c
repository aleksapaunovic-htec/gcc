/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fsplit-loops" } */

int a, b;
int main()
{
  for (; a < 4; a += 2)
    if (a > 2)
      while (b++);
  ;
  if (a != 4)
    __builtin_abort();
  return 0;
}

/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fno-tree-scev-cprop" } */

unsigned char c;
void __attribute__((noipa))
e()
{
  do
    {
    }
  while (++c);
}
int main()
{
  e();
  if (c != 0)
    __builtin_abort ();
  return 0;
}

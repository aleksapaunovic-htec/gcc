/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fallow-store-data-races" } */

const int a;
int *b;
int main()
{
  &a != b || (*b = 1);
  return 0;
}

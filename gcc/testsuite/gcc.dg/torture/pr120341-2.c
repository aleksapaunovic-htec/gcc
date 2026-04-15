/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fallow-store-data-races" } */

char a, *b;
int main()
{
  while (a)
    {
      b = "0";
      b[0]++;
    }
  return 0;
}

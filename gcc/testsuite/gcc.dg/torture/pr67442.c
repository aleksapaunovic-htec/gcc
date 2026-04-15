/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

short foo[100];

int main()
{
  short* bar = &foo[50];
  short i = 1;
  short j = 1;
  short value = bar[8 - i * 2 * j];
  return value;
}

/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int main (void)
{
  int x = 1;
  while (x)
    x <<= 1;
  return x;
}

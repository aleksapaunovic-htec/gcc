/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int a, b;

int main ()
{
  long c = 1 % (2 ^ b);
  c = -c & ~(~(b ^ ~b) || a);

  if (c >= 0)
    __builtin_abort ();

  return 0;
}

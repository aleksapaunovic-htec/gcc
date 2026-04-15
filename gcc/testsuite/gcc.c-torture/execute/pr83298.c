/* { dg-require-effective-target riscv_v_ok } */

int a, b, c = 1;

int main ()
{
  for (; b < 1; b++)
    ;
  if (!(c * (a < 1))) 
    __builtin_abort ();
  return 0; 
}

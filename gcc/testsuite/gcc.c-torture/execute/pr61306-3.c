/* { dg-require-effective-target riscv_v_ok } */
short a = -1;
int b;
char c;

int
main ()
{
  c = a;
  b = a | c;
  if (b != -1)
    __builtin_abort ();
  return 0;
}

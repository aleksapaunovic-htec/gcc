/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int __attribute__((noipa))
foo (unsigned char b)
{
  int c = 0;

  while (b) {
      b >>= 1;
      c++;
  }

  return c;
}

int main()
{
  if (foo(0) != 0)
    __builtin_abort ();
  return 0;
}

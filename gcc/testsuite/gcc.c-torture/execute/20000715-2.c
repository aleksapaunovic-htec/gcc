/* { dg-require-effective-target riscv_v_ok } */
extern void abort(void);
extern void exit(int);

unsigned int foo(unsigned int a)
{
  return ((unsigned char)(a + 1)) * 4;
}

int main(void)
{
  if (foo((unsigned char)~0))
    abort ();
  exit(0);
}

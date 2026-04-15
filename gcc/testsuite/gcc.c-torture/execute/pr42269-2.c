/* { dg-require-effective-target riscv_v_ok } */
/* Make sure that language + abi extensions in passing S interoperate.  */

static long long __attribute__((noinline))
foo (unsigned short s)
{
  return (short) s;
}

unsigned short s = 0xFFFF;

int
main (void)
{
  return foo (s) + 1 != 0;
}

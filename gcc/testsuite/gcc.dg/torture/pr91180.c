/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int
main ()
{
#if __SIZEOF_INT__ == 4
  unsigned x = 0xffffffff;
  __builtin_memset (1 + (char *) &x, 0, 2);
  if (x != 0xff0000ff)
    __builtin_abort ();
#endif
  return 0;
}

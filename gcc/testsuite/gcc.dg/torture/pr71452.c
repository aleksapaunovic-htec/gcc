/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int main()
{
  _Bool b;
  *(char *)&b = 123;
  if (*(char *)&b != 123)
    __builtin_abort ();
  return 0;
}

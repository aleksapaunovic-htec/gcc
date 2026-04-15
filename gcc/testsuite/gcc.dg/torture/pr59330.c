/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-skip-if "free inseparable from malloc when wrapped" { mmix-knuth-mmixware } } */

void free(void *ptr)
{
}

void *foo(void)
{
  return 0;
}

int main(void)
{
  void *p = foo();
  free(p);
  return 0;
}

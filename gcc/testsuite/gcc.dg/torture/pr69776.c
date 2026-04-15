/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fstrict-aliasing" } */

extern void *malloc (__SIZE_TYPE__);
extern void abort (void);

void __attribute__((noinline,noclone))
foo (int *pi)
{
  if (*pi != 1)
    abort ();
}

int
main()
{
  void *p = malloc(sizeof (double));
  int *pi = p;
  double *pd = p;

  *pi = 1;
  int a = *pi;
  *pd = 0;
  *pi = a;
  foo (pi);

  return 0;
}

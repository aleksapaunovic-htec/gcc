/* { dg-require-effective-target riscv_v_ok } */
void exit (int);
int *x;
static void bar (char a[2][(*x)++]) {}
int
main (void)
{
  exit (0);
}

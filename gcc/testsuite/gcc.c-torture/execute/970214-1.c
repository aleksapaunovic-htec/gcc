/* { dg-require-effective-target riscv_v_ok } */
void exit (int);

#define L 1
int
main (void)
{
  exit (L'1' != L'1');
}

/* { dg-require-effective-target riscv_v_ok } */
void exit (int);

int
main (void)
{
  unsigned char z = 0;

  do ;
  while (--z > 0);
  exit (0);
}

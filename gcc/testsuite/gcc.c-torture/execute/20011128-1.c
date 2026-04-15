/* { dg-require-effective-target riscv_v_ok } */
void exit (int);

int
main(void)
{
  char blah[33] = "01234567890123456789";
  exit (0);
}

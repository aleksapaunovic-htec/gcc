/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

char one[50] = "ijk";
int
main (void)
{
  return __builtin_strlen (one) != 3;
}

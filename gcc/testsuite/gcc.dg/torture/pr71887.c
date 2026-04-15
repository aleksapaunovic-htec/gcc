/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

char a;
int b;

int main ()
{
  unsigned char c = a, d = a;
  b = d == 0 ? c : c % d;
  return 0;
}

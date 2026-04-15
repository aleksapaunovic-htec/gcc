/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

unsigned char ag = 55;
unsigned i;
int main()
{
  unsigned char c;
  unsigned char a = ag;
d:
  c = a-- * 52;
  if (c)
    goto d;
  if (a != 255)
    __builtin_abort ();
  return 0;
}

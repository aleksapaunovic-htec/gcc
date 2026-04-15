/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-sources "20140610-2.c" } */

extern int a;
extern int *p;

void test (void);

int main ()
{
  *p = 0;
  a = 1;
  test ();
  return 0;
}

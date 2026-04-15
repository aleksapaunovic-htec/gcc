/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

extern void abort (void);

int
main (void)
{
  int data = 1;
  struct ptr { int val; } *ptr = (struct ptr *) &data;
  ptr->val = 0;
  if (data != 0)
    abort ();
  return 0;
}

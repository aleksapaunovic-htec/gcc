/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int a, b[2];

int
main ()
{
lbl:
  for (; a; a--)
    if (b[10000])
      goto lbl;

  return 0;
}

/* { dg-require-effective-target riscv_v_ok } */
/* PR target/98681 */

__attribute__((noipa)) int
foo (int x)
{
  if (x > 32)
    return (x << -64) & 255;
  else
    return x;
}

int
main ()
{
  if (foo (32) != 32 || foo (-150) != -150)
    __builtin_abort ();
  return 0;
}

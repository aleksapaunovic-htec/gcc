/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fsplit-loops" } */

volatile int a;
int b;
int main() {
  for (; b < 5; b += 3) {
    b && a;
    if (b < 4)
      a--;
  }
  if (b != 6)
    __builtin_abort();
  return 0;
}

/* { dg-require-effective-target riscv_v_ok } */

int a, b = 2, c = 2;
int main() {
  b = ~(1 % (a ^ (b - (1 && c) || c & b)));
  if (b < -1)
    __builtin_abort();
  return 0;
}

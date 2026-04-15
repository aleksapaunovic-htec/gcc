/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int a, b, c, d;
unsigned e;
int main() {
  c = e = -((a && 1) ^ ~(b || 0));
  if (e < -1)
    d = c;
  if (!d)
    __builtin_abort();
  return 0;
}

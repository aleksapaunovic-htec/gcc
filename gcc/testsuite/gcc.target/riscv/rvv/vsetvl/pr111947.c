/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-mrvv-vector-bits=scalable -march=rv64gcv -mabi=lp64d -O2 -Wno-implicit-int" } */

char *a;
b() {
  int c[2];
  int d = 0;
  for (; d < 16; d += 2)
    c[d / 2] = a[d | 1];
  if (c[0])
    for (;;)
      ;
}

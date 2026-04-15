/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64imv -mabi=lp64d -O2" } */

typedef char __attribute__((__vector_size__ (1))) V;

V
foo (V v, long x)
{
  x &= v[0];
  return v + (char) x;
}

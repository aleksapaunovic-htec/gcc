/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-O2 -march=rv64gcv -mabi=lp64d" } */

#pragma riscv intrinsic "vector"
void
foo (void)
{
  __riscv_vfredosum_tu (X); /* { dg-error "undeclared" } */
  /* { dg-error "too many arguments" "" { target *-*-* } .-1 } */
}

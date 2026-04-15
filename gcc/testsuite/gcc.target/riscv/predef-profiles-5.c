/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rva23u64 -mabi=lp64d" } */

int main () {

#ifndef __riscv_rva23u64
#error "__riscv_rva23u64"
#endif

  return 0;
}
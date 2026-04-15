/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rva23s64 -mabi=lp64d" } */

int main () {

#ifndef __riscv_rva23s64
#error "__riscv_rva23s64"
#endif

  return 0;
}
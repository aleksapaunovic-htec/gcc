/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64imafdcv -mabi=lp64d" } */

int main () {

#if __riscv_v_intrinsic != 12000
#error "__riscv_v_intrinsic"
#endif

  return 0;
}

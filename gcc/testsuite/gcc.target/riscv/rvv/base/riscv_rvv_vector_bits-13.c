/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv -mabi=lp64d -O3" } */

void test () {

#if defined __riscv_v_fixed_vlen
#error "__riscv_v_fixed_vlen should not be defined"
#endif

}

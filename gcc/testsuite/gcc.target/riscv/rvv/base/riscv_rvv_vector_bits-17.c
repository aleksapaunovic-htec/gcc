/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv_zvl4096b -mabi=lp64d -O3 -mrvv-vector-bits=zvl" } */

void test () {

#if __riscv_v_fixed_vlen != 4096
#error "__riscv_v_fixed_vlen should be 4096"
#endif

}

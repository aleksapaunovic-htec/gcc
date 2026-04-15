/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gcv_zvl512b -mabi=lp64d -O3 -mrvv-vector-bits=zvl" } */

void test () {

#if __riscv_v_fixed_vlen != 512
#error "__riscv_v_fixed_vlen should be 512"
#endif

}

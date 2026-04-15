/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64g_xsfvcp -mabi=lp64" } */

int main () {
#if !defined(__riscv)
#error "__riscv"
#endif

#if !defined(__riscv_zve32x)
#error "__riscv_zve32x"
#endif


#if !defined(__riscv_xsfvcp)
#error "__riscv_xsfvcp"
#endif

  return 0;
}

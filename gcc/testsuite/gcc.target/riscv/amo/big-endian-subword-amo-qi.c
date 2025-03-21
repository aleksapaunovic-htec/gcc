/* { dg-do compile } */
/* { dg-options "-mbig-endian -O0" } */
/* { dg-xfail-if "RVV is currently broken on big-endian RISC-V builds" { riscv*-*-* } { "-march=rv*v*" } } */
/* Verify that subword atomic operations use XOR for big-endian byte alignment.  */
/* { dg-final { scan-assembler "xori\\s+\[a-z0-9\]+,\[a-z0-9\]+,3" } } */

void atomic_fetch_add_qi(char *ptr, char val)
{
  __atomic_fetch_add(ptr, val, __ATOMIC_RELAXED);
}

/* { dg-do compile } */
/* { dg-options "-mbig-endian -O0" } */
/* { dg-xfail-if "RVV is currently broken on big-endian RISC-V builds" { riscv*-*-* } { "-march=rv*v*" } } */
/* Verify that subword atomic operations use XOR for big-endian halfword alignment.  */
/* { dg-final { scan-assembler "xori\\s+\[a-z0-9\]+,\[a-z0-9\]+,2" } } */

void atomic_fetch_add_hi(short *ptr, short val)
{
  __atomic_fetch_add(ptr, val, __ATOMIC_RELAXED);
}

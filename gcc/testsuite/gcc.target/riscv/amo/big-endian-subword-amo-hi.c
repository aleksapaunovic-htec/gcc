/* { dg-do compile { target { ! riscv_v } } } */
/* { dg-options "-mbig-endian -O2" } */
/* Verify that subword atomic operations use XOR for big-endian halfword alignment.  */
/* { dg-final { scan-assembler "xori\\s+\[a-z0-9\]+,\[a-z0-9\]+,2" } } */

void atomic_fetch_add_hi(short *ptr, short val)
{
  __atomic_fetch_add(ptr, val, __ATOMIC_RELAXED);
}

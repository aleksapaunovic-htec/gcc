/* { dg-do compile { target { ! riscv_v } } } */
/* { dg-options "-mbig-endian -O2" } */
/* Verify that subword atomic operations use XOR for big-endian byte alignment.  */
/* { dg-final { scan-assembler "xori\\s+\[a-z0-9\]+,\[a-z0-9\]+,3" } } */

void atomic_fetch_add_qi(char *ptr, char val)
{
  __atomic_fetch_add(ptr, val, __ATOMIC_RELAXED);
}

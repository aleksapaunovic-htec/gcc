/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gc_zve32x -mabi=lp64d -mbig-endian -O3" } */

#pragma riscv intrinsic "vector"
vint32m1_t foo (vint32m1_t) {} // { dg-excess-errors "sorry, unimplemented: Current RISC-V GCC does not support RVV in big-endian mode" }

/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-std=c23 -mcpu=xiangshan-kunminghu" } */

_Float16 f, g;
void foo() { f /= g; }

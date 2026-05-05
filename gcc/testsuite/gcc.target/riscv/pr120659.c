/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-mcpu=sifive-x280 -mabi=lp64" } */

_Float16 f;
void foo() { f /= 3; }

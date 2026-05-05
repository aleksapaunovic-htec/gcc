/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-mcpu=sifive-p670" } */

__attribute__((__vector_size__(sizeof(int)))) int v;
void foo() { v &= 1; }

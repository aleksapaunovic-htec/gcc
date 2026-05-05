/* { dg-lto-do link } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-lto-options { { -flto -march=rv64gc -mabi=lp64d } } } */
/* { dg-extra-ld-options "-nostdlib" } */

void foo();

int _start(){
    foo();
}

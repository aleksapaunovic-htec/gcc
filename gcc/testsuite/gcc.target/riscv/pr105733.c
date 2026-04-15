/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options { -march=rv64gcv -mabi=lp64d } } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Og" "-Os" "-Oz" } } */

#define BUF_SIZE 2064

void
foo(unsigned long i)
{
    volatile char buf[BUF_SIZE];

    buf[i] = 0;
}

/* { dg-final { scan-assembler-not {li\t[a-x0-9]+,4096} } } */

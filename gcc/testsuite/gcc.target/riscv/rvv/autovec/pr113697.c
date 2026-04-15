/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-O3 -march=rv64gcv -mabi=lp64d -fno-schedule-insns" } */

int
foo (int *__restrict a, int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
    result += a[i];
  return result;
}

/* { dg-final { scan-assembler-times {vsetvli} 3 } } */
/* { dg-final { scan-assembler-not {vsetivli} } } */

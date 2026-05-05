/* { dg-do compile { target { ! riscv_abi_e } } } */
/* { dg-options "-march=rv32gc_xtheadbb" { target { rv32 } } } */
/* { dg-options "-march=rv64gc_xtheadbb" { target { rv64 } } } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Os" "-Og" } } */

struct bar
{
  unsigned long a:6;
  unsigned long b:26;
  unsigned long c:22;
};

/* We prefer andi over th.extu because it can be compressed.  On big-endian
   targets, the bitfield is placed in the high bits of the first word, so a
   shift is needed instead.  */

unsigned long
foo (struct bar *s)
{
  return s->a;
}

/* { dg-final { scan-assembler-not "th.extu\t" } } */
/* { dg-final { scan-assembler "andi\t" { target { ! be } } } } */
/* { dg-final { scan-assembler "srli" { target be } } } */

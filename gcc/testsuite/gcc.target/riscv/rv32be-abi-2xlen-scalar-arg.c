/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gc -mabi=ilp32 -mbig-endian" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-O1" "-O3" "-Og" "-Os" "-Oz" "-flto" } } */

extern void named_scalar (unsigned long long);
extern void named_even_pair (unsigned int, unsigned int, unsigned long long);

void
call_named (unsigned int hi, unsigned int lo)
{
  unsigned long long x = ((unsigned long long) hi << 32) | lo;
  named_scalar (x);
}

void
call_named_even_pair (unsigned int hi, unsigned int lo)
{
  unsigned long long x = ((unsigned long long) hi << 32) | lo;
  named_even_pair (0, 1, x);
}

volatile unsigned int sink_words[2];
volatile unsigned int sink_even_pair[2];

void
consume_named (unsigned long long x)
{
  sink_words[0] = (unsigned int) x;
  sink_words[1] = (unsigned int) (x >> 32);
}

void
consume_named_even_pair (unsigned int pad0, unsigned int pad1,
			 unsigned long long x)
{
  sink_even_pair[0] = (unsigned int) x;
  sink_even_pair[1] = (unsigned int) (x >> 32);
}

/* Named 2 * XLEN scalars use significance ordering: a0 is the low word,
   a1 is the high word, even for big-endian.  */
/* { dg-final { scan-assembler {\mmv[ \t]+a0,a1} } } */
/* { dg-final { scan-assembler {\msw[ \t]+a0,(sink_words,|0\()} } } */
/* { dg-final { scan-assembler {\msw[ \t]+a1,(sink_words\+4|4\()} } } */
/* { dg-final { scan-assembler-not {\msw[ \t]+a1,(sink_words,|0\()} } } */

/* The same rule applies directly to even/odd register pairs used by P/Zilsd:
   a2 is the low word and a3 is the high word.  */
/* { dg-final { scan-assembler {\msw[ \t]+a2,(sink_even_pair,|0\()} } } */
/* { dg-final { scan-assembler {\msw[ \t]+a3,(sink_even_pair\+4|4\()} } } */
/* { dg-final { scan-assembler-not {\msw[ \t]+a3,(sink_even_pair,|0\()} } } */

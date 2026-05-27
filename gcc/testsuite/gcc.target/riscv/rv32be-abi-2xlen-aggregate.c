/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gc -mabi=ilp32 -mbig-endian" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-O1" "-O3" "-Og" "-Os" "-Oz" "-flto" } } */

struct pair
{
  unsigned int hi;
  unsigned int lo;
};

extern void consume_pair (struct pair);

void
call_pair (unsigned int hi, unsigned int lo)
{
  struct pair x = { hi, lo };
  consume_pair (x);
}

volatile unsigned int sink_pair[2];

void
store_pair (struct pair x)
{
  sink_pair[0] = x.hi;
  sink_pair[1] = x.lo;
}

/* Aggregates keep memory-layout ordering: the lower-numbered register holds
   the lower-addressed XLEN chunk.  */
/* { dg-final { scan-assembler-not {\mmv[ \t]+a0,a1} } } */
/* { dg-final { scan-assembler {\msw[ \t]+a0,(sink_pair,|0\()} } } */
/* { dg-final { scan-assembler {\msw[ \t]+a1,(sink_pair\+4|4\()} } } */

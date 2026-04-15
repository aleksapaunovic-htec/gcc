/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

short x1 = 17;

struct
{
  short i __attribute__ ((packed));
} t;

void
f ()
{
  t.i = x1;
  if (t.i != 17)
    abort ();
}

int
main (void)
{
  f ();
  exit (0);
}

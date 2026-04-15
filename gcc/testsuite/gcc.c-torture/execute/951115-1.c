/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int var = 0;

void
g ()
{
  var = 1;
}

void
f ()
{
  int f2 = 0;

  if (f2 == 0)
    ;

  g ();
}

int
main (void)
{
  f ();
  if (var != 1)
    abort ();
  exit (0);
}

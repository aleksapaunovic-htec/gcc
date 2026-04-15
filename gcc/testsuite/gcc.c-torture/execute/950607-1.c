/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int
main (void)
{
  struct { long status; } h;

  h.status = 0;
  if (((h.status & 128) == 1) && ((h.status & 32) == 0))
    abort ();
  exit (0);
}

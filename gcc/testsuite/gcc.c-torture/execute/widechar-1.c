/* { dg-require-effective-target riscv_v_ok } */
void abort(void);
void exit(int);

#define C L'\400'

#if C
#define zero (!C)
#else
#define zero C
#endif

int
main(void)
{
  if (zero != 0)
    abort ();
  exit (0);
}

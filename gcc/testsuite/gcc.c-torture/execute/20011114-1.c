/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

char foo(char bar[])
{
  return bar[1];
}
extern char foo(char *);
int main(void)
{
  if (foo("xy") != 'y')
    abort ();
  exit (0);
}

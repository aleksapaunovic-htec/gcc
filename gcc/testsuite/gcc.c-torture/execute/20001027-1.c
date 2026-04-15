/* { dg-require-effective-target riscv_v_ok } */
void abort (void);
void exit (int);

int x,*p=&x;

int main()
{
  int i=0;
  x=1;
  p[i]=2;
  if (x != 2)
    abort ();
  exit (0);
}

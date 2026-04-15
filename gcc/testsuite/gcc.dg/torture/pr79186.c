/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

int a, b;
unsigned char c, d, e;

int main ()
{ 
  if (b || !a)
    { 
      c = a;
      if (!c && !a)
	d = 0;
      e = -a;
    }
  return 0;
}

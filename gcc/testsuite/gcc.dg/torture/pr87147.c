/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

short a;
long b;
int c, d, g;
char e, h;
long f[] = {0};
int main()
{
  int i = 1;
  for (; a <= 3; a++) {
      c = 0;
      for (; c <= 2; c++) {
	  b = 0;
	  for (; b <= 3; b++) {
	      h = i && f[d];
	      e = g && i;
	      i = 0;
	  }
      }
  }
}

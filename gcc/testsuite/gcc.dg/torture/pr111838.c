/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fsplit-loops" } */

int a, b, c;
volatile char d;
int main()
{
  for (; b < 1; b++)
    for (char e = -17; e < 1; e += 5)
      {
	if (e ? a % e : 0)
	  d;
	for (c = 0; c < 1; c++)
	  ;
      }
  return 0;
}

/* { dg-do run } */
/* { dg-require-effective-target riscv_v_ok } */

extern void abort(void);

int main (void)
{
    volatile long int n;
    n = -2;

    if ((-2147483647L - 1L) / (-n) != -1073741824L)
	abort ();
    return 0;
}

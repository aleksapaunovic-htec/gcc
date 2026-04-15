/* { dg-require-effective-target riscv_v_ok } */
/* { dg-additional-options "-fpermissive" } */
extern void abort(void);
typedef void (*frob)();
frob f[] = {abort};

int main(void)
{
  exit(0);
}

// { dg-do run }
/* { dg-require-effective-target riscv_v_ok } */
// { dg-additional-options "-mavx512f" { target avx512f_runtime } }

typedef __attribute__((__vector_size__ (1))) signed char V;

signed char
foo (V v)
{
  return ((V) v == v)[0];
}

int
main ()
{
  signed char x = foo ((V) { });
  if (x != -1)
    __builtin_abort ();
}

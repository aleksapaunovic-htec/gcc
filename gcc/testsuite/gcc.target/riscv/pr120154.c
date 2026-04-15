/* { dg-do compile } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-options "-march=rv64gv -mabi=lp64" } */



typedef __attribute__((__vector_size__(4))) char V;

V g;

V
bar(V a, V b)
{
  V s = a + b + g;
  return s;
}

V
foo()
{
  return bar((V){20}, (V){23, 150});
}


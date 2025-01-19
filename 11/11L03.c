/* 11L03. Changing values via pointers. */
#include <stdio.h>

int main ()
{
  char c, *ptr_c;

  c = 'A';

  printf ("var c: address=%p, content='%c'\n", &c, c);

  ptr_c = &c;

  printf("ptr_c: address-%p, content=%p\n", &ptr_c, ptr_c);
  printf ("*ptr_c => '%c'\n", *ptr_c);

  // Assigning to the dereferenced pointer?
  *ptr_c = 'B';

  printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
  printf ("*ptr_c => '%c'\n", *ptr_c);
  printf ("var c: address=%p, content='%c'\n", &c, c);

  return 0;
}
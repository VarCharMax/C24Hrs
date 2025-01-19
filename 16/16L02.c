/* 16L02.c: Pointer subtraction */
#include <stdio.h>

int main ()
{
  int *ptr_int1, *ptr_int2;

  printf("The position of ptr_int1: %p\n", ptr_int1);

  ptr_int2 = ptr_int1 + 5;

  printf("The position of ptr_int2 = ptr_int1 + 5: %p\n", ptr_int2);
  printf("The subtraction of ptr_int2 - ptr_int1: %lu\n", ptr_int2 - ptr_int1);

  ptr_int2 = ptr_int1 - 5;

  printf("The position of ptr_int2 = ptr_int1 - 5: %p\n", ptr_int2);
  printf("The subtraction of ptr_int2 - ptr_int1: %d\n", ptr_int2 - ptr_int1);

  return 0;
}
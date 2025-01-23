/* 23L02.c: Using #ifdef, #ifndef, and #endif */
#include <stdio.h>

#define UPPER_CASE  0
#define NO_ERROR    0

int main(void)
{
  #ifdef UPPER_CASE
    printf("THIS LINE IS PRINTED OUT,\n");
  #endif

  printf("BECAUSE UPPER_CASE IS DEFINED.\n");

  #ifndef LOWER_CASE
    printf("\nThis line is printed out,\n");
    printf("because LOWER_CASE is not defined.\n");
  #endif

  return NO_ERROR;
}

/* 10L02. Using the if-else statement */

#include <stdio.h>

int main()
{
  int i;

  printf ("Even Number   Odd Number\n");

  for (i=0; i<10; i++)
  {
    if (i%2 == 0)
      printf ("%d", i);
    else
      printf ("%14d\n", i);
  }

  return 0;
}

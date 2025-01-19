#include <stdio.h>

int main()
{
  int ch;

  ch = 65;

  printf("The second character that has a numeric value of %d is:\n", ch);
  putc(ch, stdout);
  printf("\n");

  return 0;
}
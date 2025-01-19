#include <stdio.h>

int main()
{
  int ch;

  printf("Please type in one character:\n");
  ch = getc(stdin);
  printf("The character you typed is: %c\n", ch);

  return 0;
}
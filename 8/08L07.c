#include <stdio.h>

int main()
{
  int x;

  x = sizeof(int);

  printf("%s\n", (x == 2) ? "The int data type has 2 bytes." : "int doesn't have 2 bytes.");
  printf("The maximum value of int is: %d\n\n",
    (x != 2) ? ~(1 << (x * 8 - 1)) : ~(1 << (16 - 1)));

  printf("(1 << 15) evaluates to %d\n", (1 << (16 - 1)));
  printf("~(1 << 15) evaluates to %d\n\n", ~(1 << (16 - 1)));

  printf("(x * 8 - 1) evaluates to %d\n", (x * 8 - 1));
  printf("1 << (x * 8 - 1) evaluates to %d\n", 1 << (x * 8 - 1));
  printf("~(1 << (x * 8 - 1)) evaluates to %d\n", ~(1 << (x * 8 - 1)));

  return 0;
}

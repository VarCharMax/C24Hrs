#include <stdio.h>

int main()
{
  int x, y;

  x = 0XEFFF;
  y = 0x1000;

  printf("x=%d, y=%d\n", x, y);
  printf("~(x)=%d, ~(y)=%d\n", ~(x), ~(y));
  printf("!x=%d, %u\n", !x, !x);
  printf("!y=%d, %u\n", !y, !y);

  return 0;
}

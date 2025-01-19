#include <stdio.h>

int main()
{
  int x, y, z;

  x = 96;
  y = 1;
  z = 69;

  printf("'!%d ? %d == %d : %d' evaluates to %d\n", y, x, z, y, (!y ? x == z : y));

  return 0;
}

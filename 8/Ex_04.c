#include <stdio.h>

int main()
{
  int x, y;

  x = 0xFFFF;
  y = 0x8888;

  printf("0xFFFF ^ 0x8888 = %d\n", 0xFFFF ^ 0x8888);

  x = 0xABCD;
  y = 0x4567;
  printf("xABCD & 0x4567 = %d\n", 0xABCD & 0x4567);

  x = 0xDCBA;
  y = 0x1234;
  printf("0xDCBA | 0x1234 = %d\n", 0xDCBA | 0x1234);

  return 0;
}

#include <stdio.h>
#include <limits.h>
#include <math.h>

int main ( )
{
  signed char ch;
  short x; //To match lesson result, use 16-bit int.
  int z;
  unsigned int y;
  unsigned long n;

  ch = 0xFF;
  x = 0xFFFF;
  y = 0xFFFFu;
  z = 12345;

  n = (1 << 31) - 1;

  // Max value of 1-byte signed char is 127.
  // Higher values loop back through negative values.
  printf ("The decimal of signed char 0xFF is %d.\n", ch);

  printf ("The decimal of signed short int 0xFFFF is %d.\n", x);
  printf ("The decimal of unsigned int 0x%X is %u.\n", y, y);
  printf ("The hex of decimal %d is 0x%X.\n", z, z);

  // Convert to negative using bitwise operator.
  printf ("The hex of signed int %d is 0x%X.\n", -z, ~(z) + 1);

  printf ("Max unsigned int value (UINT_MAX) is %u.\n", UINT_MAX);
  printf ("Max unsigned hex value (UINT_MAX) is 0x%X.\n", UINT_MAX);
  printf ("Max unsigned int value is %d.\n", (1 << 31)-1);

  /*
    The signed int range is from -2^n-1 to 2^n-1-1.

    The maximum value of an n-bit integer is 2^n-1
    because computer starts at 0, whereas counting starts at 1.

    2^32 in binary:
    1 00000000 00000000 00000000 00000000

    2^32 - 1 in binary:
    11111111 11111111 11111111 11111111

    But the first bit is used for the sign, so the actual value is 2^31 - 1
  */

  printf("Max signed int value (INT_MAX) is %d.\n", INT_MAX);
  printf("Max signed int value (int)(pow(2, 31) - 1) is %d.\n", (1 << 31) - 1);
  printf("Max signed int value (macro) is 0x%X, because most significant bit is used for sign.\n", (1 << 31) - 1);

  return 0;
}

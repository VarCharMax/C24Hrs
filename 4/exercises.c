#include <stdio.h>

int main()
{
  // int16_t val = 72368;

  double dbl_num = 123.456;

  printf("The character Z has the numeric value of %d.\n", 'Z');
  printf("The character z has the numeric value of %d.\n", 'z');

  printf("The character with the numeric value of 72 is %c.\n", 72);
  printf("The character with the numeric value of 104 is %c.\n", 104);

  printf("The value 123.456 is %lf and %e in scientific notation.\n", dbl_num, dbl_num);

  return 0;
}

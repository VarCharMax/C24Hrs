#include <stdio.h>

int main()
{
  int num;

  num = 7;

  printf("Given num = %d\n", num);
  printf("!(num < 7) yields: %d\n", !(num < 7));
  printf("!(num > 7) yields: %d\n", !(num > 7));
  printf("!(num == 7) yields: %d\n", !(num == 7));

  return 0;
}

#include <stdio.h>

#define B(x) S_to_binary_(#x)

static inline unsigned long long S_to_binary_(const char *s)
{
        unsigned long long i = 0;
        while (*s) {
                i <<= 1;
                i += *s++ - '0';
        }
        return i;
}

int main()
{
  int x, y;

  x = B(001100000011001);
  y = B(1100111111000110);

  printf("x = 001100000011001 = %d\ny = 1100111111000110 = %d\n", x, y);
  printf("~(x) yields %d\n~(y) yields %d\n", ~(x), ~(y));

  return 0;
}
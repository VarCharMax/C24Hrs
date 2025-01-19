/* 10L07.c: Using the continue statement */
#include <stdio.h>

int main ()
{
  int x, y;
  char operator;

  x= 4;
  y= 2;
  operator = '-';

  switch(operator)
  {
    case '+':
      x += y;
    case '-':
      x -= y;
    case '*':
      x *= y;
    case '/':
      x /= y;
    default:
      break;
  }

  printf ("The value of x is: %d\n", x);

  x= 4;

  switch(operator)
  {
    case '+':
      x += y;
      break;
    case '-':
      x -= y;
      break;
    case '*':
      x *= y;
      break;
    case '/':
      x /= y;
      break;
    default:
      break;
  }

  printf ("The value of x is: %d\n", x);

  return 0;
}

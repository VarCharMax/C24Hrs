/* 12L05.c: Stopping at the null character */
#include <stdio.h>

int main ()
{
 char array_ch[15] = {'C',' ',
                      'i','s',' ',
                      'p','o','w','e','r','f','u','l','!','\0',};
  int i;

  /* array_ch[i] in logical test */
  for (i = 0; array_ch[i]; i++)
    printf("%c", array_ch[i]);

  printf("\n");

  return 0;
}
/* 13L01.c: Initializing strings */
#include <stdio.h>

int main ()
{
  char str1[] = {'A', ' ',
              's', 't', 'r', 'i', 'n', 'g', ' ',
              'c','o','n','s','t','a','n','t','\0',};
  char str2[] = "Another string constant";
  char *ptr_str;
  char *ptr_str1;
  int i;

  /* print out str1 */
  for (i = 0; str1[i]; i++)
    printf("%c", str1[i]) ;

  printf("\n" );

  /* print out str2 */
  for(i=0; str2[i]; i++)
    printf ("%c", str2[i]);

  printf ("\n");

  /* assign a string to a pointer */
  ptr_str = "Assign a string to a pointer.";
  ptr_str1 = ptr_str;

  for (i=0; *ptr_str; i++)
    printf("%c", *ptr_str++);

  printf("\n%s", ptr_str1);

  return 0;
}

/* 17L04.c: Using the realloc() function */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function declaration */
void StrCopy(char *str1, char *str2);

/* main() function */
int main()
{
  char *str[4] = {"There's music in the sighing of a reed;",
                  "There's music in the gushing of a rill;",
                  "There's music in all things if men had ears;",
                  "There earth is but an echo of the spheres.\n"};

  char *ptr;
  int i;

  int termination = 0;

  ptr = malloc((strlen(str[0]) + 1) * sizeof(char));
  if (ptr == NULL) {
    printf ("malloc() failed.\n");
    termination = 1;
  }
  else {
    StrCopy(str[0], ptr);
    printf("%s\n", ptr);

    for (i=1; i<4; i++) {
      ptr = realloc(ptr, (strlen(str[i]) + 1) * sizeof(char));
      if (ptr == NULL) {
        printf ("realloc() failed.\n");
        termination = 1;
        i = 4; /* break the for loop */
      }
      else {
        StrCopy(str[i], ptr);
        printf("%s\n", ptr);
      }
    }
  }

  free(ptr);
  return termination;
}

/* function definition */
void StrCopy(char *str1, char *str2)
{
  int i;

  for (i=0; str1[i]; i++)
    str2[i] = str1[i];

  str2[i] = '\0';
}

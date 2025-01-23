/* 21L01.c: Opening and closing a file */
#include <stdio.h>

enum {SUCCESS, FAIL};

int main(void)
{
  FILE *fptr;
  char filename[]= "haiku.txt";
  int reval = SUCCESS;

  if ((fptr = fopen(filename, "r")) == NULL) {
    printf ("Cannot open %s.\n", filename);
    reval = FAIL;
  } else {
    printf("The value of fptr: Ox%p\n", fptr);
    printf("Ready to close the file.");
    fclose (fptr);
  }

  return reval;
}

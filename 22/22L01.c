/* 22L01.c: Random access to a file */
#include <stdio.h>

enum {SUCCESS, FAIL, MAX_LEN = 80};
void PtrSeek(FILE *fptr);
long PtrTell(FILE *fptr);
void DataRead(FILE *fptr);
int ErrorMsg(char *str);

int main(void)
{
  FILE *fptr;
  char filename[] = "haiku.txt";
  int reval = SUCCESS;

  if ((fptr = fopen(filename, "r")) == NULL) {
    reval = ErrorMsg(filename);
  } else {
    PtrSeek(fptr);
    fclose (fptr);
  }

  return reval;
}

/* function definition */
void PtrSeek(FILE *fptr)
{
  long offset1, offset2, offset3;

  offset1 = PtrTell(fptr);
  DataRead(fptr);
  offset2 = PtrTell(fptr);
  DataRead(fptr);
  offset3 = PtrTell(fptr);
  DataRead(fptr);

  printf("\nRe-read the haiku:\n");

  /* re-read the third verse of the haiku */
  fseek(fptr, offset3, SEEK_SET);
  DataRead(fptr);

  /* re-read the second verse of the haiku */
  fseek(fptr, offset2, SEEK_SET) ;
  DataRead(fptr);

  /* re-read the first verse of the haiku */
  fseek(fptr, offset1, SEEK_SET);
  DataRead (fptr);
}

/* function definition */
long PtrTell(FILE *fptr)
{
  long reval;

  reval = ftell(fptr);
  printf("The fptr is at %lu\n", reval);

  return reval;
}

/* function definition */
void DataRead(FILE *fptr)
{
  char buff[MAX_LEN];
  fgets(buff, MAX_LEN, fptr);
  printf("- - - %s", buff);
}

/* function definition */
int ErrorMsg(char *str)
{
  printf ("Cannot open %s. \n", str);
  return FAIL;
}

/* 22L03.c: Using the fscanf() and printf() functions */
#include <stdio.h>

enum {SUCCESS, FAIL,
      MAX_NUM = 3,
      STR_LEN = 23};

void DataWrite(FILE *fout);
void DataRead(FILE *fin);
int ErrorMsg(char *str);

int main(void)
{
  FILE *fptr;
  char filename[] = "strnum.mix";
  int reval = SUCCESS;

  if ((fptr = fopen(filename, "w+")) == NULL) {
    reval = ErrorMsg(filename);
  } else {
    DataWrite(fptr);
    rewind(fptr);
    DataRead(fptr) ;
    fclose(fptr) ;
  }

  return reval;
}

/* function definition */
void DataWrite(FILE *fout)
{
  int i;
  char cities[MAX_NUM][STR_LEN] = {
                                    "St.Louis->Houston:",
                                    "Houston->Dallas:",
                                    "Dallas->Philadelphia:"};
  int miles[MAX_NUM] = {845,
                        243,
                        1459};

  printf("The data written:\n");

  for (i=0; i<MAX_NUM; i++) {
    printf("%-23s %d miles\n", cities[i], miles[i]);
    fprintf(fout, "%s %d", cities[i], miles[i]);
  }
}

/* function definition */
void DataRead (FILE *fin)
{
  int i;
  int miles;
  char cities[STR_LEN];

  printf ("\nThe data read: \n");

  for (i = 0; i < MAX_NUM;i++) {
    fscanf(fin, "%s%d", cities, &miles);
    printf("%-23s %d miles\n", cities, miles);
  }
}

/* function definition */
int ErrorMsg(char *str)
{
  printf("Cannot open %s.\n", str);
  return FAIL;
}

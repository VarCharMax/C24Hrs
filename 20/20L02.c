/* 20L02.c  */
#include <stdio.h>
#include <string.h>

int main (void)
{
  union employee {
    int start_year;
    int dpt_code;
    int id_number;
  } info;

  /* initialize start_year */
  info.start_year = 1997;
  /* initialize dpt_code */
  info.dpt_code = 8;
  /* initialize id */
  info.id_number = 1234;
  /* display content of union */
  printf("Start Year: %d\n", info.start_year);
  printf ("Dpt. Code: %d\n", info.dpt_code);
  printf ("ID Number: %d\n", info.id_number);

  return 0;
}
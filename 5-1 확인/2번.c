#include<stdio.h>
int main(void)
{
  int chest = 95;
  char size;
  if (chest <= 90)
  {
    size = 's';
  }
  else if(chest <= 100)
  {
    size = 'M';
  }
  else
  {
    size = 'L';
  }
  printf("%c\n", size);
}
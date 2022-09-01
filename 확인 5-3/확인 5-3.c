#include<stdio.h>
int main(void)
{
  int age = 25, chest = 95;
  char size;
  if (age < 20)
  {
    if (chest < 85)
    {
      size = 'S';
      printf("사이즈는 %c입니다.", size);
    }
    else if (chest >= 95)
    {
      size = 'L';
      printf("사이즈는 %c입니다", size);
    }
    else
    {
      size = 'M';
      printf("사이즈는 %c입니다.", size);
    }
  }
  else
  {
    if (chest < 90)
    {
      size = 'S';
      printf("사이즈는 %c입니다.", size);
    }
    else if (chest >= 100)
    {
      size = 'L';
      printf("사이즈는 %c입니다.", size);
    }
    else
    {
      size = 'M';
      printf("사이즈는 %c입니다.", size);
    }
  }
  return 0;
}
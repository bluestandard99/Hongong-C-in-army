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
      printf("������� %c�Դϴ�.", size);
    }
    else if (chest >= 95)
    {
      size = 'L';
      printf("������� %c�Դϴ�", size);
    }
    else
    {
      size = 'M';
      printf("������� %c�Դϴ�.", size);
    }
  }
  else
  {
    if (chest < 90)
    {
      size = 'S';
      printf("������� %c�Դϴ�.", size);
    }
    else if (chest >= 100)
    {
      size = 'L';
      printf("������� %c�Դϴ�.", size);
    }
    else
    {
      size = 'M';
      printf("������� %c�Դϴ�.", size);
    }
  }
  return 0;
}
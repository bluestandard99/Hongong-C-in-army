#include<stdio.h>

void sum(int count);

int main(void)
{
  sum(10);
  sum(100);
  return 0;
}

void sum(int count)
{
  int i;
  int gum = 0;
  for (i = 1; i <=count; i++)
  {
    gum += i;

  }
  printf("1부터 %d까지 합은 %d입니다.\n", count, gum);
} 
#include <stdio.h>
int main(void)
{
  int a = 20;
  int b = 0;

  if (a > 10)
  {
    b = a;
  }
  printf("a:%d, b:%d", a, b);
  return 0;
}
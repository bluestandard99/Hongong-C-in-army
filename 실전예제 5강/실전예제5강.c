#include<stdio.h>
int main(void)
{
  int a, c;
  char b;
  scanf("%d%c%d", &a, &b, &c);
  if (b == '+')
  {
    printf("%d\n", a + c);
  }
  else if (b == '-')
  {
    printf("%d\n", a - c);
  }
  else if (b == '*')
  {
    printf("%d\n", a * c);
  }
  else if (b == '/')
  {
    printf("%d\n", a / c);
  }
  return 0;
}
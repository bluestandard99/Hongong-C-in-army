#include<stdio.h>
int main(void)
{
  double height = 179.5;
  double weight = 75.0;
  if ((weight < 80)&&(height>187.5))
  {
    printf("ok\n");
  }
  else
  {
    printf("cancel\n");
  }
  return 0;
}
#include<stdio.h>

int main(void)
{
  int ary[];
  int i;

  *(ary + 0) = 10;
  *(ary + 1) = *(ary + 0) + 10;

  printf("세번째 배열요소에 키보드 입력: ");
  scanf("%d", ary + 2);

  for ( i = 0; i < 3; i++)
  {
    printf("%5d", *(ary + i));

  }

  return 0;
}

#include<stdio.h>
int main(void)
{
  int a = 1;

  do
  {
    a = a * 2;
  } while (a < 10);   //여기서 ;를 쓰는건 while이 여기서는 반복실행문 전에 나오는 조건문이 아니라 반복 실행 끝나고 보는 조건문이여서 그럼.

    printf("a:%d\n", a);    

  return 0;
}
#include<stdio.h>
int main(void)
{
  int a = 10;
  double b = 3.4;

  printf("int형 변수 크기:%d\n", sizeof(a));
  printf("double형 변수 크기:%d\n", sizeof(b));
  printf("정수형 상수 변수 크기:%d\n", sizeof(10));
  printf("수식의 결과값 크기:%d\n", sizeof(3.4 + 23.4));
  printf("char 자료형의 크기:%d\n", sizeof(char));
  printf("상수의 변수 크기:%d\n", sizeof("A"));

  return 0;

}
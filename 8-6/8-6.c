#include<stdio.h>

int main(void)
{
  char str[80];

  printf("문자열 입력: ");
  gets(str);
  puts("입력된 문자열: ");    // puts는 문자열 상수랑 문자열 만 출력 가능하다
  puts(str);

  return 0;
}
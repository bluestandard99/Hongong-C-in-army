#include<stdio.h>
#include<string.h>
int main(void)
{
  char str1[80], str2[80];
  char temp[80];

  printf("두 문자열 입력: ");
  scanf("%s %s", str1, str2);   //문자열은 &안써도 된다.
  printf("바꾸기전 : %s, %s\n", str1, str2);
  strcpy(temp,str1 );       // 여기서 포인트는 남는 char 함수 temp를 임시 저장소로 쓰는 것이다.
  strcpy(str1, str2);
  strcpy(str2,temp);
  printf("바꾼 후: %s, %s\n", str1, str2);
  return 0;
}
#include<stdio.h>

int main(void)
{
  int pn;
  int number;
  int i, j;
  int cnt=0;

  printf("2이상의 정수를 입력하세요:");
  scanf("%d", &number);
  for (i = 2; i <= number; i++)
  {
    pn = 1;// 여기서 먼저 i값을 일단 참 값이라고 가정하고 들어가는거다 이거는 첫번째 반복문의 실행문이야.
    for (j = 2; j < i; j ++)
    {
      if (i % j == 0)
      {
        pn=0;// 여기서 i를 pn=0이라고 해서 앞에 첫번째 반복문의 실행문인 pn=1이 아닌 =0으로 만듬
        break;
      }
    }
    if (pn==1)//이제 여기서 반복문을 수행한 i를 어떻게 할지 보여줌
    {
      printf("%5d", i);
      cnt++;
      if (cnt % 5 == 0)
      {
        printf("\n");
      }
    }
    
  }
}
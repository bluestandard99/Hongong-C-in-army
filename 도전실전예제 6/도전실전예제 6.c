#include<stdio.h>

int main(void)
{
  int pn;
  int number;
  int i, j;
  int cnt=0;

  printf("2�̻��� ������ �Է��ϼ���:");
  scanf("%d", &number);
  for (i = 2; i <= number; i++)
  {
    pn = 1;// ���⼭ ���� i���� �ϴ� �� ���̶�� �����ϰ� ���°Ŵ� �̰Ŵ� ù��° �ݺ����� ���๮�̾�.
    for (j = 2; j < i; j ++)
    {
      if (i % j == 0)
      {
        pn=0;// ���⼭ i�� pn=0�̶�� �ؼ� �տ� ù��° �ݺ����� ���๮�� pn=1�� �ƴ� =0���� ����
        break;
      }
    }
    if (pn==1)//���� ���⼭ �ݺ����� ������ i�� ��� ���� ������
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
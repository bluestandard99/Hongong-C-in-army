#include<stdio.h>
int main(void)
{
  int a = 1;

  do
  {
    a = a * 2;
  } while (a < 10);   //���⼭ ;�� ���°� while�� ���⼭�� �ݺ����๮ ���� ������ ���ǹ��� �ƴ϶� �ݺ� ���� ������ ���� ���ǹ��̿��� �׷�.

    printf("a:%d\n", a);    

  return 0;
}
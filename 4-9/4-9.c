#include<stdio.h>
int main(void)
{
  int a = 10;
  double b = 3.4;

  printf("int�� ���� ũ��:%d\n", sizeof(a));
  printf("double�� ���� ũ��:%d\n", sizeof(b));
  printf("������ ��� ���� ũ��:%d\n", sizeof(10));
  printf("������ ����� ũ��:%d\n", sizeof(3.4 + 23.4));
  printf("char �ڷ����� ũ��:%d\n", sizeof(char));
  printf("����� ���� ũ��:%d\n", sizeof("A"));

  return 0;

}
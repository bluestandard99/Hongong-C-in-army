#include<stdio.h>

int main(void)
{
  char str[80];

  printf("���ڿ� �Է�: ");
  gets(str);
  puts("�Էµ� ���ڿ�: ");    // puts�� ���ڿ� ����� ���ڿ� �� ��� �����ϴ�
  puts(str);

  return 0;
}
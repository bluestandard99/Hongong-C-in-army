#include<stdio.h>

int main(void)
{
	int kor;
	int eng;
	int mat;
	int tot;
	kor = 70;
	eng = 80;
	mat = 90;
	tot = kor + eng + mat;
	printf("����:%d, ����:%d, ����:%d\n", kor, eng, mat);
	printf("����:%d", tot);
	return 0;
}
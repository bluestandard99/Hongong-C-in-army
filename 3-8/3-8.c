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
	printf("국어:%d, 영어:%d, 수학:%d\n", kor, eng, mat);
	printf("총점:%d", tot);
	return 0;
}
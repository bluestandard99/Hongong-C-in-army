#include<stdio.h>
int main(void)
{
	int a;
	do
	{
		scanf("%d", &a);
	} while (a<0);
	printf("%d", a);
	return 0;
}
#include<stdio.h>

void print_month(int*mp);

int main(void)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	print_month(month);
	return 0;
}


void print_month(int* mp)
{
  int i;

	for ( i = 0; i < mp[i]; i++)
	{
		printf("%5d", mp[i]);
		if ((i+1)%5==0)
		{
			printf("\n");
		}
		
	}
}
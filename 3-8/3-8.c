#include<stdio.h>

int main(void)
{
	int income;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은:%lf입니다\n", tax);
	return 0;

}
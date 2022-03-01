#include<stdio.h>

double factorial(int x, int y);
int main(void)
{
		int num1;
		int num2;
		scanf("%d %d",&num1,&num2);
		double result = factorial(num1,num2);
		printf("%.2lf",result);
		return 0;
}
double factorial(int x, int y)
{
		int ret1 = 1;
		int ret2 = 1;
		int ret3 = 1;
		for(int i = y;i > 1;i--)
		{
				ret2 *= i;
		}
		for(int i = x;i > 1;i--)
		{
				ret1 *= i;
		}
		for(int i = x - y;i > 1;i--)
		{
				ret3 *= i;
		}
		return (ret1/ret2)/ret3;
}

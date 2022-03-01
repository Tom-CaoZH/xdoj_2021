#include<stdio.h>

double function(int n);

int main(void)
{
		int num;
		scanf("%d",&num);
		double ret = function(num);
		printf("%.6lf",ret);
		return 0;
}
double function(int n)
{
		if(n == 1)
		{
				return 1;
		}
		else
		{
				return 1/(1+function(n-1));
		}
}

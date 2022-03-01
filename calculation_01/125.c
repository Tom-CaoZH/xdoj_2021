#include<stdio.h>

int main(void)
{
		double rate;
		double years;
		scanf("%lf %lf",&rate,&years);
		double ret = 1;
		for(int i = 0;i < years;i++)
		{
				ret *= (1+rate);
		}
		printf("%.2lf",ret);
		return 0;
}

#include<stdio.h>
#define LIMIT 0.00001
int main(void)
{
		double x_org;
		scanf("%lf",&x_org);
		printf("%lf",x_org);
		double result = (1/2)*(x_org+1);
		while(1)
		{
				double x = result;
				result = (1/2)*(x + (x_org / x));
				if((result - x) < LIMIT && (result - x) > (-LIMIT))
				{
						break;
				}
		}
		printf("%.5lf",result);
		return 0;
}

#include<stdio.h>
#include<math.h>
int main(void)
{
		double money;
		double repay;
		double rate;
		double month;
		scanf("%lf %lf %lf",&money,&repay,&rate);
		double mid1 = repay/(repay - money*rate);
		month = log10(mid1)/log10(1+rate);
		printf("%.2f",month);

		return 0;
}

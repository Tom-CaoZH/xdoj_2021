#include<stdio.h>

int main(void)
{
		int profit = 0;
		scanf("%d",&profit);
		double bonus = 0;
		const int bonus1 = 10000;
		const int bonus2 = 17500;
		const int bonus3 = 27500;
		const int bonus4 = 33500;
		const int bonus5 = 39500;
		if(profit <= 100000)
		{
				bonus = profit*0.1;
		}
		else if(profit > 100000 && profit <= 200000)
		{
				bonus = bonus1 + (profit - 100000)*0.075;
		}
		else if(profit > 200000 && profit<= 400000)
		{
				bonus = bonus2 + (profit - 200000)*0.05;
		}
		else if(profit > 400000 && profit<= 600000)
		{
				bonus = bonus3 + (profit - 400000)*0.03;
		}
		else if(profit > 600000 && profit<= 1000000)
		{
				bonus = bonus4 + (profit - 600000)*0.015;
		}
		else if(profit > 1000000)
		{
				bonus = bonus5 + (profit - 1000000)*0.01;
		}
		printf("%.2f",bonus);
		return 0;
}

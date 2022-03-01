#include<stdio.h>

int main(void)
{
		int days;
		scanf("%d",&days);
		int value_pm[days];
		int totle = 0;
		int counter[6] = {0,0,0,0,0,0};
		double average = 0;
		for(int i = 0;i < days;i++)
		{
				scanf("%d",&value_pm[i]);
		}
		for(int i =0;i <days;i++)
		{
				totle += value_pm[i];
		}
		average = (double)totle/days;
		printf("%.2f\n",average);
		for(int i =0;i <days;i++)
		{
				int n = value_pm[i];
				if(n>=0&&n<=50)
				{
						counter[0] += 1;
				}
				else if(n>=51&&n<=100)
				{
						counter[1] += 1;
				}
				else if(n>=101&&n<=150)
				{
						counter[2] += 1;
				}
				else if(n>=151&&n<=200)
				{
						counter[3] += 1;
				}
				else if(n>=201&&n<=300)
				{
						counter[4] += 1;
				}
				else if(n > 300)
				{
						counter[5] += 1;
				}
		}
		for(int i =0;i <6;i++)
		{
				printf("%d ",counter[i]);
		}
		return 0;
}









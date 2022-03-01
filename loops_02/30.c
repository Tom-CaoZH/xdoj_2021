#include<stdio.h>


int cal_factor(int n);
int main(void)
{
		int min;
		int max;
		scanf("%d %d",&min,&max);
		int i;
		for( i = min;i <= max;i++)
		{
				if(i ==cal_factor(i)) 
				{
						printf("%d\n",i);
				}
		}
		return 0;
}
int cal_factor(int n)
{
		int totle = 1;
		if(n ==1)
		{
				return 0;
		}
		else
		{
				for(int i = 2;i < n;i++)
				{
						if(n % i == 0)
						{
								totle += i;
						}
				}
		return totle;
		}
}

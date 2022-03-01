#include<stdio.h>

int main(void)
{
		int m = 0;
		int n = 0;
		int max_num = 0;
		int min_num = 0;
		scanf("%d %d",&m,&n);
		for(int min = m;;min++)
		{
				if(min % m == 0 && min % n == 0)
				{
						min_num = min;
						break;
				}
		}
		for(int max = m;;max--)
		{
				if(m % max == 0 && n % max == 0)
				{
						max_num = max;
						break;
				}
		}
		printf("%d %d",max_num,min_num);
		return 0;
}

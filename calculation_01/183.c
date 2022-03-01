#include<stdio.h>

int main(void)
{
		int m;
		int n;
		scanf("%d %d",&m,&n);
		int min = m;
		int the_max; 
		int the_min;
		if(n<m)
		{
				min = n;
		}
		for(int i = min;i > 0;i--)
		{
				if(m%i == 0 && n%i == 0)
				{
						the_max = i;
						break;
				}
		}
		for(int i = 1; ;i++)
		{
				if(i%m == 0 && i%n ==0)
				{
						the_min = i;
						break;
				}
		}
		printf("%d ",the_max);
		printf("%d ",the_min);

		return 0;
}

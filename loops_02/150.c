#include<stdio.h>

int main(void)
{
		int num = 0;
		scanf("%d",&num);
		if(num < 1)
		{
				num = num;
		}
		else if(num >= 1 && num < 10)
		{
				num = 2*num - 1;
		}
		else
		{
				num = 3*num - 11;
		}
		printf("%d",num);
		return 0;
}

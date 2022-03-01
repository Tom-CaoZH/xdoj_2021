#include<stdio.h>

int main(void)
{
		int num;
		scanf("%d",&num);
		int counter = 0;
		if(num == 0)
		{
				counter = 1;
		}
		else
		{
				while(num > 0)
				{
						num /= 10;
						counter++;
				}
		}
		printf("%d",counter);
		return 0;
}

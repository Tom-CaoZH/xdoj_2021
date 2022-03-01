#include<stdio.h>

int main(void)
{
		int num;
		scanf("%d",&num);
		int i = 1;
		int sta = 1;
		if(num == 0)
		{
				printf("%d",num);
		}
		else
		{
				for(int i = 1; (i*i) <= num;i++)
				{
						if((i*i) == num)
						{
								printf("%d",i);
								sta = 0;
						}
				}
				if(sta)
				{
						printf("no");
				}

		}

		return 0;
}

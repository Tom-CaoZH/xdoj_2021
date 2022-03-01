#include<stdio.h>

int judge(int num);
int main(void)
{
		int num;
		scanf("%d",&num);
		if(judge(num))
		{
				printf("YES");
		}
		else
		{
				printf("NO");
		}
		return 0;
}
int judge(int num)
{
		for(int i = num - 1;i > 1;i--)
		{
				if(num%i == 0)
				{
						return 0;
				}
		}
		return 1;
}

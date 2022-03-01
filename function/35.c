#include<stdio.h>

int judge(int num);
int main(void)
{
		int num;
		scanf("%d",&num);
		for(int i = 2;i < num;i++)
		{
				if(judge(i) && judge(num - i))
				{
						printf("%d %d",i,(num - i));
						break;
				}
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

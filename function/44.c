#include<stdio.h>

int fibonaci(int index);
int judge(int num);
int main(void)
{
		int index;
		scanf("%d",&index);
		int result = fibonaci(index);
		if(judge(result))
		{
				printf("yes");
		}
		else
		{
				printf("%d",result);
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
int fibonaci(int index)
{
		if(index == 1)
		{
				return 1;
		}
		else if(index == 2)
		{
				return 1;
		}
		else
		{
				return fibonaci(index -1) + fibonaci(index - 2);
		}
}

#include<stdio.h>

int judge(int num);
int main(void)
{
		int num;
		scanf("%d",&num);
		int counter = 0;
		int array[50] = {0};
		int index = 0;
		for(int i = 2;i <= num;i++)
		{
				if(judge(i))
				{
						counter++;
						array[index] = i;
						index++;
				}
		}
		printf("%d\n",counter);
		for(int i = 0;i < 50;i++)
		{
				if(array[i] != 0)
				{
						printf("%d ",array[i]);
				}
				else
				{
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

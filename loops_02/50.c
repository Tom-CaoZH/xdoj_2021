#include<stdio.h>

int division(int num);
int main(void)
{
		int index;
		scanf("%d",&index);
		int array[index];
		for(int i = 0;i < index;i++)
		{
				scanf("%d",&array[i]);
		}
		int max = division(array[0]);
		int max_index = array[0];
		for(int i = 0;i < index;i++)
		{
				if(division(array[i]) > max)
				{
						max_index = array[i];
						max = division(array[i]);
				}
				else if(division(array[i]) == max)
				{
						if(array[i] > max_index)
						{
								max_index = array[i];
						}
				}
		}
		printf("%d",max_index);
		return 0;
}
int division(int num)
{
		int sum = 0;
		while(num > 0)
		{
				sum += num%10;
				num /= 10;
		}
		return sum;
}

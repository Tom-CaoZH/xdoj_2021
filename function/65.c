#include<stdio.h>

int count_bit(int num);
int division(int num);
int func(int num);
int main(void)
{
		int num;
		scanf("%d",&num);
		int ret = func(num);
		printf("%d",ret);
		return 0;
}
int count_bit(int num)
{
		int counter = 0;
		while(num > 0)
		{
				counter++;
				num /= 10;
		}
		return counter;
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
int func(int num)
{
		if(count_bit(num) == 1)
		{
				return num;
		}
		else
		{
				int new_num = division(num);
				return func(new_num);
		}
}









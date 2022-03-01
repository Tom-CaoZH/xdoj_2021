#include<stdio.h>

int function(int a, int b);
int judge(int x);
int power(int m,int n);
int main(void)
{
		int num1;
		int num2;
		scanf("%d %d",&num1,&num2);
		int result = function(num1,num2);
		printf("%d",result);
		return 0;
}
int power(int m,int n)
{
		int ret = 1;
		while(m > 0)
		{
				ret *= n;
				m--;
		}
		return ret;
}
int judge(int x)
{
		int temp = x;
		int const_x = x;
		int counter = 0;
		int sum = 0;
		while(x > 0)
		{
				counter++;
				x /= 10;
		}
		if(counter < 3)
		{
				return 0;
		}
		else
		{
				while(temp > 0)
				{
						sum += power(counter,(temp%10));
						temp /= 10;
				}
				if(sum == const_x)
				{
						return 1;
				}
				else
				{
						return 0;
				}
		}

}
int function(int a, int b)
{
		int coun = 0;
		int max = a;
		int min = b;
		if(b>a)
		{
				max = b;
				min = a;
		}
		for(int i = min;i <= max;i++)
		{
				if(judge(i))
				{
						coun++;
				}
		}
		return coun;
}










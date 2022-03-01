#include<stdio.h>

int  check(int n);
int main(void)
{
		int num;
		scanf("%d",&num);
		int counter = 1;
		int totle = 0;
		for(int i = 2;counter <= num+10;i++)
		{
				if(check(i))
				{
						if(counter >= num)
						{
								totle += i;
						}
						counter++;
				}

		}
		printf("%d",totle);
		return 0;
}
int  check(int n)
{
		for(int i = 2;i < n;i++)
		{
				if(n%i==0)
				{
						return 0;
				}
		}
		return 1;
}

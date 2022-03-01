#include<stdio.h>

int check(int num);
int main(void)
{
		int num;
		scanf("%d",&num);
		int counter = 0;
		while(num != 1)
		{
				counter++;
				num = check(num);
		}
		printf("%d",counter);
		return 0;
}
int check(int num)
{
		if(num%2 == 0)
		{
				return num/2;
		}
		else
		{
				return num*3+1;
		}
}

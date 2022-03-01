#include<stdio.h>

int main(void)
{
		int num1;
		int num2;
		scanf("%d %d",&num1,&num2);
		int totle1 = 0;
		int counter1 = 0;
		for(int i = 1;i < num1;i++)
		{
				if(num1%i == 0)
				{
						totle1 += i;
						counter1 += 1;
				}
		}
		int totle2 = 0;
		int counter2 = 0;
		for(int i = 1;i < num2;i++)
		{
				if(num2%i == 0)
				{
						totle2 += i;
						counter2 += 1;
				}
		}
		if(num1 == totle2 && num2 == totle1)
		{
				printf("yes %d %d",counter1,counter2);
		}
		else
		{
				printf("no %d %d",counter1,counter2);

		}
		return 0;
}

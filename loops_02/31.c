#include<stdio.h>

int main(void)
{
		int num_1;
		int num_2;
		scanf("%d %d",&num_1,&num_2);
		for(int i = num_1;i >=1;i--)
		{
				if(num_1%i==0&&num_2%i==0)
				{
						printf("%d",i);
						break;
				}

		}
		return 0;
}

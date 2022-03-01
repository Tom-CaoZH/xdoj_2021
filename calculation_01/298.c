#include<stdio.h>
int main(void)
{
		int num_1;
		int num_2;
		scanf("%d %d",&num_1,&num_2);
		int a =(num_1+num_2)*(num_1+num_2);
		int b =(num_1-num_2)*(num_1-num_2);
		int c =num_1*num_1+num_2*num_2;
		int d =num_1*num_1-num_2*num_2;
		int array[4] = {a,b,c,d};
		int max = array[0];
		for(int i = 0;i < 4;i++)
		{
				if(array[i]>max)
				{
						max = array[i];
				}
		}
		int min = array[0];
		for(int i = 0;i < 4;i++)
		{
				if(array[i]<min)
				{
						min = array[i];
				}
		}
		printf("%d ",max);
		printf("%d",min);
		return 0;
}

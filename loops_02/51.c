#include<stdio.h>

int main(void)
{
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int array[4] = {a,b,c,d};
		int max = array[0];
		for(int i = 0;i < 4;i++)
		{
				if(array[i] > max)
				{
						max = array[i];
				}
		}
		printf("%d",max);
		return 0;
}


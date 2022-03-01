#include<stdio.h>

int main(void)
{
		char array[20];
		int sum = 0;
		int length;
		for(int i = 0 ;;i++)
		{
				scanf("%c",&array[i]);
				if(array[i] == '\n')
				{
						length = i - 1;
						break;
				}
		}
		for(int i = 0;i < length;i++)
		{
				if(array[i] % 2 == 1)
				{
						sum += (array[i] - 48);
				}
				else if((array[i] - 48) == 0)
				{
						break;
				}
		}
		printf("%d",sum);
		return 0;
}

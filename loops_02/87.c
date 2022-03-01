#include<stdio.h>

int main(void)
{
		int array[50] = {0};
		for(int i = 0; i < 50; i++)
		{
				scanf("%d",&array[i]);
				if(array[i] == 0)
				{
						break;
				}
		}
		int ret = 0;
		int counter = 0;
		for(int i = 0; i < 50; i++)
		{
				if(array[i] == 1)
				{
						ret++;
				}
				else if(array[i] == 2)
				{
						counter += 1;
						if(counter == 1)
						{
								ret += 2;
						}
						else if(counter > 1)
						{
								if(array[i-1] == 2)
								{
										ret += 2*counter;
								}
								else
								{
										ret += 2;
										counter = 1;
								}
						}
				}
				else if(array[i] == 0)
				{
						break;
				}
		}
		printf("%d",ret);
		return 0;
}

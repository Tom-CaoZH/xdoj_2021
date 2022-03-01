#include<stdio.h>

int main(void)
{
		char str[4] = {};
		for(int i = 0 ;i < 4;i++)
		{
				scanf("%c",&str[i]);
		}
		for(int i = 0; i< 4;i++)
		{

				if(str[i] >= 48 && str[i] <=57)
				{
						str[i] = '*';
				}
				else if(str[i] >= 97 && str[i] <=122)
				{
						str[i] -= 32;
				}
				else if(str[i] >= 65 && str[i] <=90)
				{
						str[i] += 32;
				}
				else
				{
						str[i] = '@';
				}
		}
		for(int i = 0; i< 4 ;i++)
		{
				printf("%c",str[i]);
		}
		return 0;
}

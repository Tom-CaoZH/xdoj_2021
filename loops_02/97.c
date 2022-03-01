#include<stdio.h>

int main(void)
{
		for(char i = 97; i < 123; i++)
		{
				printf("%c ",i);
		}
		printf("\n");
		for(char i = 122; i >= 97; i--)
		{
				printf("%c ",i);
		}
		printf("\n");
		return 0;
}

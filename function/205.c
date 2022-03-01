#include<stdio.h>


void tow(char ch,int h)
{
		for(int i = 1;i <= h;i++)
		{
				for(int j = 0;j < h - i;j++)
				{
						printf(" ");
				}
				for(int k = h - i;k <=h - 1;k++)
				{
						printf("%c",ch);
						if(k == h - 1)
						{
								break;
						}
						else
						{
								printf(" ");
						}
				}
				printf("\n");
		}
}


int main(void)
{
		char ch;
		int h;
		scanf("%c",&ch);
		scanf("%d",&h);
		tow(ch,h);
		return 0;
}

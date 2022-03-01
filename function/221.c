#include<stdio.h>

int cal_num(char str[])
{
		int counter = 0;
		int value = *str;
		while(*str != '\0')
		{
				if(value >= 48 && value <= 57)
				{
						counter++;
				}
				value = *(str+1);
				str += 1;
		}
		return counter;
}

int cal_dig(char str[])
{

		int counter = 0;
		int value = *str;
		while(*str != '\0')
		{
				if(value >= 65 && value <= 90)
				{
						counter++;
				}
				else if(value >= 97 && value <= 122)
				{
						counter++;
				}
				value = *(str+1);
				str += 1;
		}
		return counter;
}

int main(void)
{
		char str[100];
		scanf("%s",str);
		int num = cal_num(str);
		int ch = cal_dig(str);
		printf("%d,%d",ch,num);
		return 0;
}

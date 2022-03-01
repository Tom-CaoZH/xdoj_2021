#include<stdio.h>


int cal_num(char str[])
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
		int result = cal_num(str);
		printf("%d",result);
		return 0;
}

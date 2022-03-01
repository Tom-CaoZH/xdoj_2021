#include<stdio.h>
#include<string.h>

void reverse(char* s);
int main(void)
{
		char input[50] = {0};
		scanf("%s",input);
		reverse(input);
		printf("%s",input);
		return 0;
}
void reverse(char* s)
{
		for(char* end = s + strlen(s) - 1;s <= end; s++,end--)
		{
				char temp = *s;
				*s = *end;
				*end = temp;
		}
}

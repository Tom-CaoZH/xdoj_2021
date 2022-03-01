#include<stdio.h>

int main(void)
{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int max = a;
		if(b > a)
		{
				max = b;
				if(c > b)
				{
						max = c;
				}
		}
		if(c > a)
		{
				max = c;
		}
		if((a*a+b*b+c*c)==2*max*max)
		{
				printf("%d",(a*b*c)/max);
		}
		else
		{
				printf("no");
		}
		
		return 0;
}

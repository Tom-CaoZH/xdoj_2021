#include<stdio.h>
int leap_year(int n);
int main(void)
{
		int years;
		int months;
		scanf("%d %d",&years,&months);
		if(leap_year(years))
		{
				switch(months)
				{
						case 4:
						case 6:
						case 9:
						case 11:
								printf("30");
								break;
						case 2:
								printf("29");
								break;
						default:
								printf("31");
								break;
				}
		}
		else
		{
				switch(months)
				{
						case 4:
						case 6:
						case 9:
						case 11:
								printf("30");
								break;
						case 2:
								printf("28");
								break;
						default:
								printf("31");
								break;
				}

		}
		return 0;
}
int leap_year(int n)
{
		if(n%4!=0)
		{
				return 0;
		}
		else
		{
				if(n%100!=0)
				{
						return 1;
				}
				else
				{
						if(n%400==0)
						{
								return 1;
						}
						else
						{
								return 0;
						}
				}
		}

}

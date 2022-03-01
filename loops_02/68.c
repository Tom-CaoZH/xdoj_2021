#include<stdio.h>

int judge_leap(int n); // judeg leap year
int check_big(int m); // judge big or small month
int main(void)
{
		int year;
		int day;
		int count_month = 1;
		scanf("%d %d",&year,&day);
		if(judge_leap(year))
		{
				while(day > 29) //attention : there is not >= .
				{
						if(count_month == 2)
						{
								day -= 29;
						}
						else if(check_big(count_month))
						{
								if(count_month != 12)
								{
										if(day == 31)
										{
												break;
										}
										day -= 31;
								}
								else
								{
										break;
								}
						}
						else
						{
								if(day == 30)
								{
										break;
								}
								day -= 30;
						}
						count_month++;
				}
		}
		else
		{
				while(day > 28)  //attention : there is not >= .
				{
						if(count_month == 2)
						{
								day -= 28;
						}
						else if(check_big(count_month))
						{
								if(day == 31)
								{
										break;
								}
								day -= 31;
						}
						else
						{
								if(day == 30)
								{
										break;
								}
								day -= 30;
						}
						count_month++;
				}
		}
		printf("%d %d",count_month,day);
		return 0;
}
int judge_leap(int n)
{
		if(n%4 == 0 && n % 100 != 0)
		{
				return 1;
		}
		else if(n % 400 == 0)
		{
				return 1;
		}
		else
		{
				return 0;
		}
}
int check_big(int m)
{
		switch(m)
		{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
						return 1; //big months
				default:
						return 0;

		}
}












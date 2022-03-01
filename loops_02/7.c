#include<stdio.h>
int main(void)
{
		int week;
		int index;
		int number;
		int last;
		scanf("%d %d %d",&week,&index,&number);

		last = number % 10;
		printf("%d ",last);
		if(week == 6||week == 7)
		{
				printf("no");
		}
		else
		{
				if(index<200)
				{
						printf("no");
				}
				else if(index>=200&&index<400)
				{
						if(week==1)
						{

								if(last==1||last==6)
								{
										printf("yes");
								}
								else
								{
										printf("no");
								}

						}
						if(week==2)
						{

								if(last==2||last==7)
								{
										printf("yes");
								}
								else
								{
										printf("no");
								}

						}
						if(week==3)
						{

								if(last==3||last==8)
								{
										printf("yes");
								}
								else
								{
										printf("no");
								}

						}
						if(week==4)
						{

								if(last==4||last==8)
								{
										printf("yes");
								}
								else
								{
										printf("no");
								}

						}
						if(week==5)
						{

								if(last==5||last==0)
								{
										printf("yes");
								}
								else
								{
										printf("no");
								}

						}
						
				}
				else if(index>=400)
				{
						if(week%2==1&&last%2==1)
						{
								printf("yes");
						}
						else if(week%2==0&&last%2==0)
						{
								printf("yes");
						}
						else
						{
								printf("no");
						}
				}
		}
		return 0;
}

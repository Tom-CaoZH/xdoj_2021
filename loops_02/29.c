#include<stdio.h>

int cal_num(int n);
int main(void)
{
		int num;
		scanf("%d",&num);
		int ret = cal_num(num);
		printf("%d",ret);
		return 0;
}
int cal_num(int n)
{
		if(n < 10)
		{
				return n;
		}
		else
		{

				int last = n%10;
				int all_but_last = n / 10;
				return last+cal_num(all_but_last);
		}
}

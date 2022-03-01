#include<stdio.h>


double fib(int n,int fir1,int sec1,int fir2,int sec2)
{
		double dp1[31] = {0};
		double dp2[31] = {0};
		dp1[1] = fir1;
		dp1[2] = sec1;
		dp2[1]= fir2;
		dp2[2] = sec2;
		double result = (dp1[1] / dp2[1]) + (dp1[2] / dp2[2]);
		if(n >= 3)
		{
				for(int i = 3;i <= n;i++)
				{
						dp1[i] = dp1[i - 1] + dp1[i -2];
						dp2[i] = dp2[i - 1] + dp2[i -2];
						result += dp1[i] / dp2[i];
				}
		}
		return result;
}

int main(void)
{
		int n;
		scanf("%d",&n);
		double result = fib(n,2,3,1,2);
		printf("%.2lf",result);
		return 0;
}

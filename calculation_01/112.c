#include<stdio.h>
#include<math.h>
int main(void)
{
		double x;
		scanf("%lf",&x);
		double ret;
		if(x >= 0)
		{
				ret = sqrt(x);
		}
		else{
				ret = (x+1)*(x+1)+2*x+(1/x);
				
		}
		printf("%.2lf",ret);

		return 0;
}

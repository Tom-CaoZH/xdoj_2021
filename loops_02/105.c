/* #include<stdio.h> */
/* #include<math.h> */

/* int main(void) */
/* { */
/* 		int a,b,c; */
/* 		scanf("%d %d %d",&a,&b,&c); */


/* 		return 0; */
/* } */
#include<stdio.h>
#include<math.h>
int main(void)
{
		int a,b,c,i,area,s,s2;
		/* scanf("%f %f %f", &a,&b,&c); */	
		/* p=(a+b+c)/2.0; */
		/* S=sqrt(p*(p-a)*(p-b)*(p-c)); */
		/* printf("%.2lf",S); */
		scanf("%d %d %d",&a,&b,&c);
		if(a*a+b*b == c*c)
		{
				s =(a+b+c) / 2;
				area = sqrt(s*(s-a)*(s-b)*(s-c));
				s2 = 2*area;
				printf("%d",s2);

		}
		else
		{
				printf("no");
		}
		return 0;
}

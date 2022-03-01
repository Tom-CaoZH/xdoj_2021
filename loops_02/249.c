#include<stdio.h>

/* int prime(int n); */
/* int divide_prime(int n); */
int main(void)
{
		int num;
		scanf("%d",&num);
		for(int i = 2;i <= num;i++)
		{
				while(num%i == 0)
				{
						printf("%d",i);
						num /= i;
						if(num != 1)
						{
								printf("*");
						}
				}
				
		}
		return 0;
}
/* int prime(int n) */
/* { */
/* 		int exm; */
/* 		for(int i = 2;i < n;i++) */
/* 		{ */
/* 				if(n % i == 0) */
/* 				{ */
/* 						exm = 0; */
/* 				} */
/* 				else */
/* 				{ */
/* 						exm = 1; */
/* 				} */

/* 		} */
/* 		return exm; */
/* } */
/* int divide_prime(int n) */
/* { */
/* 		int ret; */
		
/* 		if(prime(n)) */
/* 		{ */
/* 				ret = n; */
/* 		} */
/* 		else */
/* 		{ */
/* 		} */
/* 		return ret; */
/* } */












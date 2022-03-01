/* #include<stdio.h> */

/* void tow(char cha,int n); */
/* int main(void) */
/* { */
/* 		char character; */
/* 		int num; */
/* 		scanf("%c",&character); */
/* 		scanf("%d",&num); */
/* 		tow(character,num); */


/* 		return 0; */
/* } */
/* void tow(char cha,int n) */
/* { */
/* 		for(int i = n;i >=1 ;i--) */
/* 		{ */
/* 				for(int j = n+1-i;j <= 2*n-1;j++) */
/* 				{ */
/* 						printf("%c",cha); */
/* 						printf(" "); */
/* 				} */
/* 				printf("\n"); */
/* 		} */
#include <stdio.h>
 
int main()
{
	int n,i,j;
	int t;
	char a;
	scanf("%c",&a);
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
			putchar(' ');
		for(j=1; j<=i; j++)
		{
				printf(" %c",a);
		}
 
		putchar('\n');
	}
 
	return 0;
}

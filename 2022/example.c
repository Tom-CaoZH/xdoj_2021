#include<stdio.h>

char str[200][20];//automatically initialization

int main(void) {
				// version1 : 
				scanf("%s",str[0]);
				printf("%s",str[0]);

				// version2 : 
				scanf("%s",&str[0][0]);
				printf("%s",&str[0][0]);

				char str1[10] = {0};
				// version1 : 
				scanf("%s",str1);
				printf("%s",str1);
				
				// version2 : 
				scanf("%s",&str1[0]);
				printf("%s",&str1[0]);



				return 0;
}

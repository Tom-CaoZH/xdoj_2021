#include<stdio.h>
#include<string.h>

int judge(char* str) {
				int begin = 0,end = strlen(str);
				while(1) {
								if(end - begin == 0 || end - begin == 1) {
												break;
								}

								if(str[begin] != str[end - 1]) {
												return 0;
								}
								end--;
								begin++;
				}
				return 1;
}

int main(void) {
				char str[100];
				scanf("%s",str);

				if (judge(str) == 1) {
								printf("Yes");
				}
				else {
								printf("No");
				}
				return 0;
}

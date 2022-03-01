#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<string.h>
#include<readline/readline.h>

#define MAXLINE 150

bool check_exit(char* str){
		char* std = "***end***";
		if(memcmp(str,std,9) == 0 && strlen(str) == 9){
				return true;
		}
		return false;
}



int main(void){
		char line[MAXLINE];
		int max = 0;
		char* max_line = (char *)malloc(sizeof(char)*MAXLINE);
		while(readline(line)){
				if(check_exit(line)){
						break;
				}
				if(strlen(line) > max){
						max = strlen(line);
						memcpy(max_line,line,MAXLINE);
				}
				free(line);
		}
		printf("%d\n",max);
		printf("%s",max_line);
		free(max_line);
		return 0;
}


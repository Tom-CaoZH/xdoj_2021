#include<stdio.h>

int cal_max(char* p);
int main(void){
		char str[100];
		fgets(str,100,stdin);
		printf("%s",str);
		char* p = &str[0];
		int result = cal_max(p);
		printf("%d",result);
		return 0;
}
int cal_max(char* p){
		int counter = 0;
		int max = 0;
		for(int i = 0 ;i < 100;i++){
				if(p[i] != '.'){
						if(p[i] == ' '){
								if(counter > max){
										max = counter;
								}
								counter = 0;
						}
						else{
								counter++;
						}
				}
				else{
						if(counter > max){
								max = counter;
						}
						break;
				}
		}
		return max;
}

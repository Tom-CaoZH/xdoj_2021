#include<stdio.h>

int cal_bits(char* p);
int main(void){
		char str[100];
		scanf("%s",str);
		int result = cal_bits(&str[0]);
		printf("%d",result);
		return 0;
}
int cal_bits(char* p){
		int bits = 0;
		for(int i =0 ;i < 100;i++){
				if(p[i] == '\0'){
						break;
				}
				bits++;
		}
		return bits;
}

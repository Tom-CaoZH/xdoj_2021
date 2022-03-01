#include<stdio.h>

float cal_mean(float* p);
int below(float* p);
int high(float* p);
int main(void){
		float array[5][4];
		float *p = &array[0][0];
		for(int i = 0;i < 20;i++){
				scanf("%f",&p[i]);
		}
		float mean = cal_mean(p);
		int bel = below(p);
		int hi = high(p);
		printf("%.1f %d %d",mean,bel,hi);
		return 0;
}
float cal_mean(float* p){
		float sum = 0;
		for(int i = 0;i < 20;i += 4){
				sum += p[i];
		}
		return (sum / 5);
}
int below(float* p){
		int count_sub = 0;
		int cout_per = 0;
		for(int i = 0;i < 20;i += 4){
				float* first = &p[i];
				for(int j = 0;j < 4;j++){
						if(first[j] < 60){
								count_sub++;
						}
				}
				if(count_sub >= 2){
						cout_per++;
				}
				count_sub = 0;
		}
		return cout_per;
}
int high(float* p){
		int cout_per = 0;
		int count_sub = 0;
		float sum = 0;
		for(int i = 0;i < 20;i += 4){
				float* first = &p[i];
				for(int j = 0;j < 4;j++){
						if(first[j] >= 85){
								count_sub++;
						}
						sum += first[j];
				}
				if(count_sub == 4 || (sum / 4) >= 90){
						cout_per++;
				}
				count_sub = 0;
				sum = 0;
		}
		return cout_per;
}

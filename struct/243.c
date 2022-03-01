#include<stdio.h>

typedef struct Student{
		char name[20];
		int data[6];
}Stu;

void swap(int *n1,int *n2);
void Swap(Stu *stu1,Stu *stu2);
int add_v(int *arr); 
int main(void){
		int n;
		scanf("%d",&n);
		Stu students[n];
		int sum[n];
		for(int i = 0;i < n;i++){
				scanf("%s %d %d %d %d %d %d",students[i].name,&students[i].data[0],&students[i].data[1],&students[i].data[2],&students[i].data[3],&students[i].data[4],&students[i].data[5]);
				sum[i] = add_v(&students[i].data[0]);
		}
		for(int i = 0;i < n -1;i++){
				for(int j = i + 1;j < n;j++){
						if(sum[i] < sum[j]){
								Swap(&students[i],&students[j]);
								swap(&sum[i],&sum[j]);
						}
						else if(sum[i] == sum[j] && students[i].data[5] < students[j].data[5]){
								Swap(&students[i],&students[j]);
								swap(&sum[i],&sum[j]);
						}
				}
		}
		for(int i = 0;i < n;i++){
				printf("%s %d %d\n",students[i].name,sum[i],students[i].data[5]);
		}
		return 0;
}
int add_v(int arr[]){
		int sum = 0;
		for(int i = 0;i < 6;i++){
				sum += arr[i];
		}
		return sum;
}
void Swap(Stu *stu1,Stu *stu2){
		Stu temp = *stu1;
		*stu1 = *stu2;
		*stu2 = temp;
}
void swap(int *n1,int *n2){
		int temp = *n1;
		*n1 = *n2;
		*n2 = temp;
}

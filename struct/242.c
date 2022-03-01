#include<stdio.h>

typedef struct Student{
		int id;
		char name[10];
		int data[3];
}Stu;

void Swap(Stu *stu1,Stu *stu2);
void swap(double *n1,double *n2);
int main(void){
		int n;
		scanf("%d",&n);
		Stu students[n];
		double ava[n];
		for(int i = 0;i < n;i++){
				scanf("%d %s %d %d %d",&students[i].id,students[i].name,
		&students[i].data[0],&students[i].data[1],&students[i].data[2]);
				ava[i] = (students[i].data[0]+students[i].data[1]+students[i].data[2])/3.0;
		}
		for(int i = 0;i < n - 1;i++){
				for(int j = i+1;j < n;j++){
						if(ava[j] > ava[i]){
								Swap(&students[i],&students[j]);
								swap(&ava[i],&ava[j]);
						}
						else if(ava[i] == ava[j]){
								if(students[j].id < students[i].id){
										Swap(&students[i],&students[j]);
										swap(&ava[i],&ava[j]);
								}
						}
				}
		}
		for(int i = 0;i < n;i++){
				printf("%d %s %.1lf\n",students[i].id,students[i].name,ava[i]);
		}
		return 0;
}
void Swap(Stu *stu1,Stu *stu2){
		Stu temp = *stu1;
		*stu1 = *stu2;
		*stu2 = temp;
}
void swap(double *n1,double *n2){
		double temp = *n1;
		*n1 = *n2;
		*n2 = temp;
}

#include<stdio.h>
double aver(double s);
int fals(int (*stu)[4]);
int well(int (*stu)[4]);

int main(void)
{
	int stu[5][4];
	int i,j;
	double sum=0;
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			scanf("%d",&stu[i][j]);
		}
	}
	for(i=0;i<5;i++){
		sum+=stu[i][0]*1.0;
	}
	double num1=aver(sum);
	int num2=fals(stu);
	int num3=well(stu);
	printf("%.1lf %d %d",num1,num2,num3);
	return 0;
}
double aver(double s){

	return (s/5);
}
int fals(int (*stu)[4]){
     int i,j,num=0;
     for(i=0;i<5;i++){
     	int t=0;
     	for(j=0;j<4;j++){
     		if(stu[i][j]<60) t++;
     		if(t==2){
     			num++;
     			break;
     		}
     	}
     }
     return num;
}
int well(int (*stu)[4]){
	double total=0;
	int i,j,flag=1,num=0;
	for(i=0;i<5;i++){
		flag=1;
		total=0;
		for(j=0;j<4;j++){
			if(stu[i][j]<85){
				flag=0;
				break;
			}
			total+=stu[i][j];
		}
		if(total/5.0>90||flag==1){
			num++;
		}
	}
	return num;
}

#include<stdio.h>

/*这个题目可以这样想，我们先*/
int num[50];

void Swap(int *n1,int *n2);

void place(int *start,int row,int col);

void reverse(int num[],int start,int size);

int main(void){
		int m,n;
		scanf("%d %d",&m,&n);
		for(int i = 0;i < m*n;i++){
				scanf("%d",&num[i]);
		}
		for(int i = 0;i < n - 1;i++){
				for(int j = i + 1;j < n;j++){
						if(num[j] < num[i]){
								Swap(&num[j],&num[i]);
						}
				}
		}
		place(&num[0],m,n);
		return 0;
}
void place(int *start,int row,int col){
		for(int i = 0;i < row;i++){
				for(int j = 0;j < col;j++){
						if(i % 2 == 0){
								reverse(start,col*i,col);
						}
						printf("%d ",start[i*col+j]);
				}
				printf("\n");
		}
}
void reverse(int num[],int start,int size){
		for(int i = 0;i < (size / 2);i++){
				Swap(&num[start],&num[size - 1 - size]);
		}
}
void Swap(int *n1,int *n2){
		int temp = *n1;
		*n1 = *n2;
		*n2 = temp;
}

#include<stdio.h>

int record[50];

void search(int* mid,int i,int j,int n,int m){
    int t = *mid;
    if(j != m - 1 && *(mid + 1) != t) record[*(mid + 1)]++;
    if(j != 0 && *(mid - 1) != t) record[*(mid - 1)]++;
    if(i != n - 1 && *(mid + m) != t) record[*(mid + m)]++;
    if(i != 0 && *(mid - m) != t) record[*(mid - m)]++;
}

int main(void) {
    int n,m,t,k;
    scanf("%d %d %d %d",&n,&m,&t,&k);
    int num[n][m];
    for(int i = 0;i < n; ++i) {
        for(int j = 0;j < m; ++j) {
            scanf("%d",&num[i][j]);
        }
    }


    for(int i = 0;i < n; ++i) {
        for(int j = 0;j < m; ++j) {
            if(num[i][j] == k ) {
                search(&num[i][j],i,j,n,m);
            }
        }
    }

    int sum = 0;
    for(int i = 0; i <= t; ++i) {
        if(record[i] != 0 && i != k) {
            sum++;
        }
    }

    printf("%d",sum);

    return 0;
}
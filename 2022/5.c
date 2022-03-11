#include<stdio.h>

void judge_w(int* start,int size,int offset,int* ret) {
    for(int i = 0;i < (size - 2) * offset;i += offset) {
        if(start[i] == start[i + offset] && start[i + offset] == start[i + 2 * offset]){
            ret[i] = 0;
            ret[i + offset] = 0;
            ret[i + 2 * offset] = 0;
        }
    }
}

int main(void) {
    int n = 4,m = 5;
    scanf("%d %d",&n,&m);
    int plane[n][m];
    int result[n][m];
    for(int i = 0;i < n;++i) {
        for(int j = 0;j < m;++j) {
            scanf("%d",&plane[i][j]);
        }
    }

    for(int i = 0;i < n;++i) {
        for(int j = 0;j < m;++j) {
            result[i][j] = plane[i][j];
        }
    }

    //for row
    int win = 3;
    for(int i = 0;i < n;++i) {
        judge_w(&plane[i][0],m,1,&result[i][0]);
    }

    //for col
    for(int i = 0;i < m;++i) {
        judge_w(&plane[0][i],n,m,&result[0][i]);
    }

    for(int i = 0;i < n;++i) {
        for(int j = 0;j < m;++j) {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
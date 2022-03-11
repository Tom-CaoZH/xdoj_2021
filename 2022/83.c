#include<stdio.h>

int plane[100][100];

int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i = 0;i < n; ++i) {
        for(int j = 0;j < m; ++j) {
            scanf("%d",&plane[i][j]);
        }
    }

    for(int j = 0;j < m; ++j) {
        for(int i = n -1;i >= 0; --i) {
            printf("%d ",plane[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>

int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);

    char two_de[10][10];
    for(int i = 0;i < n; ++i) {
        for(int j = 0;j < m; ++j) {
            scanf("%c",&two_de[i][j]);
        }
    }

    for(int i = 0;i < n; ++i) {
        for(int j = 0;j < m; ++j) {
            printf("%c ",two_de[i][j]);
        }
        printf("\n");
    }
    return 0;
}
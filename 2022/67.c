#include<stdio.h>

int main(void) {
    int n ,target;
    scanf("%d %d" ,&n,&target);

    int num[n];
    int flag = 0;
    for(int i = 0;i < n; ++i) {
        scanf("%d",&num[i]);
        if (num[i] == target) {
            flag = 1;
            printf("%d ",i);
        }
    }

    if(flag == 0) {
        printf("-1");
    }

    return 0;
}
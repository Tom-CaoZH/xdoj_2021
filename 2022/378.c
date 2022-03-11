#include<stdio.h>

int main(void) {
    int n = 0;
    int stand[20];
    scanf("%d",&n);
    if(n % 2 == 1) {
        printf("-1\n");
    }
    else {

        for(int i = 0;i < 20;++i) {
            stand[i] = 1 << (i+1);
        }

        int flag = 19;
        while(n != 0) {
            for(int i = flag;i >= 0;--i) {
                if(n >= stand[i]) {
                    printf("%d ",stand[i]);
                    n -= stand[i];
                    flag = i;
                    break;
                }
            }
        }
    }
    return 0;
}
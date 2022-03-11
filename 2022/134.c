#include<stdio.h>

int num[10];
int main(void) {
    int n;
    scanf("%d",&n);

    int index = 0;;
    while(n > 0) {
        num[index] = n % 10;
        index++;
        n /= 10;
    }

    for(int i = 0;i < index; ++i) {
        for(int j = i+1;j < index; ++j) {
            if(num[i] < num[j]) {
                int tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for(int i = 0;i < index; ++i) {
        printf("%d ",num[i]);
    }
    
    return 0;
}
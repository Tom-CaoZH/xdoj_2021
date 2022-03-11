#include<stdio.h>
#include<stdlib.h>

int num[200];

int min(int a,int b,int c) {
    if(a > b) {
        if(b > c) return c;
        return b;
    }
    else {
        if (a < c) return a;
        return c;
    }
}

int rec_delta(int size,int index) {
    // basic case
    if(index == size - 1) {
        return 0;
    }
    int ori_index = index;

    index++;
    int s_min = 1 << 20;
    int ret = rec_delta(size,index);
    for (int i = ori_index;i < size;++i) {
        s_min = min(abs(ret + num[i]),abs(ret - num[i]),s_min);
    }

    // remember to decrease this
    index--;
    return s_min;
}

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;++i) {
        scanf("%d",&num[i]);
    }
    
    int min = rec_delta(n,0);
    printf("%d",min);
    return 0;
}
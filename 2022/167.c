#include<stdio.h>

int num[1000];
int times[1001];
int index[1001];

void swap(int* x,int* y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main(void) {
    int n;
    scanf("%d",&n);

    for(int i = 0;i < n; ++i) {
        scanf("%d",&num[i]);
        index[num[i]] = num[i];
        times[num[i]]++;
    }

    for(int i = 0;i < 1001; ++i) {
        for(int j = i + 1;j < 1001;++j) {
            if(times[i] < times[j]) {
                swap(&times[i],&times[j]);
                swap(&index[i],&index[j]);
            }
            else if(times[i] == times[j]) {
                if(index[i] > index[j]) {
                    swap(&times[i],&times[j]);
                    swap(&index[i],&index[j]);
                }
            }
        }
    }

    for(int i = 0;i < 1001; ++i) {
        if(times[i] != 0) {
            printf("%d %d\n",index[i],times[i]);
        }
    }
    return 0;
}
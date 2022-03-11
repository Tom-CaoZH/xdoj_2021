#include<stdio.h>

int cal(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void swap(int* n,int* m) {
    int tmp = *n;
    *n = *m;
    *m = tmp;
}

void sort(int* num,int* sum,int length) {
    for(int i = 0;i < length; ++i) {
        for(int j = i;j < length; ++j) {
             if(sum[i] < sum[j]) {
                 swap(&sum[i],&sum[j]);
                 swap(&num[i],&num[j]);
             }
             else if(sum[i] == sum[j]) {
                 if(num[i] > num[j]) {
                    swap(&sum[i],&sum[j]);
                    swap(&num[i],&num[j]);
                 }
             }
        }
    }
}

int main(void) {
    int n;
    scanf("%d",&n);
    int num[n];
    int sum[n];
    for(int i = 0;i < n;++i) {
        scanf("%d",&num[i]);
        sum[i] = cal(num[i]);
    }

    sort(&num[0],&sum[0],n);

    for(int i = 0;i < n; ++i) {
        printf("%d %d\n",num[i],sum[i]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int num[100];
char str[100];
char tmp[10] = {-1};

int comfunc(const void* a,const void * b){
    return (*(int*)b - *(int*)a);
}

int main(void) {
    scanf("%s",str);

    int len = strlen(str);
    int index = 0;
    int k = 0;
    for(int i = 0;i < len; ++i) {
        int temp = str[i] - '0';
        if(temp >= 0 && temp < 10) {
            tmp[index] = str[i];
            index++;
        }
        else {
            if(index != 0) {
                num[k] = atoi(tmp);
                k++;
                memset(tmp,-1,10);
                index = 0;
            }
        }
    }

    if(index != 0) {
        num[k] = atoi(tmp);
        k++;
        memset(tmp,-1,10);
        index = 0;
    }
    qsort(num,k,sizeof(int),comfunc);

    for(int i = 0;i < k; ++i) {
        printf("%d ",num[i]);
    }
}
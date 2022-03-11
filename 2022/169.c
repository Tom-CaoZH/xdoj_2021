#include<stdio.h>

typedef struct File {
    int year,month,day,size;
} file;
file files[100];

int compare(int x,int y) {
    if(x > y) return 1;
    else if(x == y) return 0;
    return -1;
}

void swap(file* x,file* y) {
    file tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void) {
    int n;
    scanf("%d",&n);

    for(int i = 0;i < n; ++i) {
        scanf("%d/%d/%d %d",&files[i].year,&files[i].month,&files[i].day,&files[i].size);
    }

    for(int i = 0;i < n; ++i) {
        for(int j = i+1;j < n; ++j) {
            if(compare(files[i].year,files[j].year) == 0) {
                if(compare(files[i].month,files[j].month) == 0) {
                    if(compare(files[i].day,files[j].day) == 0) {
                        if(compare(files[i].size,files[j].size) < 0) {
                            swap(&files[i],&files[j]);
                        }
                    }
                    else if(compare(files[i].day,files[j].day) < 0) {
                        swap(&files[i],&files[j]);
                    }
                }
                else if(compare(files[i].month,files[j].month) < 0) {
                    swap(&files[i],&files[j]);
                }
            }
            else if(compare(files[i].year,files[j].year) < 0) {
                swap(&files[i],&files[j]);
            }
        }
    }

    for(int i = 0;i < n; ++i) {
        printf("%d/%d/%d %d\n",files[i].year,files[i].month,files[i].day,files[i].size);
    }

    return 0;
}
#include<stdio.h>

int ret[100];
int index = 0;

int main(void) {
    int n;
    scanf("%d",&n);

    int i = 2;
    for(;i < n; ++i) {
        if(n % i == 0) {
            ret[index] = i;
            index++;
            n /= i;
            i = 2;
        }
    }
    ret[index] = n;
    index++;
    for(int i = 0;i < index; ++i) {
        printf("%d ",ret[i]);
    }
    return 0;


    //n1 < n2
    int counter = 0 // count the number 
    for(int i = 0;i < n1; ++i) {
        counter = 0;
        for(int j = 0;j < n2; ++j) {
            if(str1[i] == str2[j]) {
                counter++;
                i++;
            }
            else {
                if(counter != 0) //store it to a array
                break;
            }
        }
    }
    // choose the max number in the array




}
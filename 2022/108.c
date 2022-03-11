#include<stdio.h>
#include<string.h>

unsigned int frac(int f) ;
unsigned int arr2num() ;
unsigned int maxPart(unsigned int number) ;

char str[100];
int num[100];//store the num we get from the str
int index = 0;

int main(void) {
    scanf("%s",str);

    // put the number into the num array
    int len = strlen(str);
    for(int i =0;i < len; ++i) {
        int tmp = str[i] - '0';
        if(tmp >= 0 && tmp <10) {
            num[index] = tmp;
            index++;
        }
    }

    // get the number
    unsigned int number = arr2num();

    if(number == 0) printf("0");
    else {
        printf("%u",maxPart(number));
    }
    return 0;
}

unsigned int frac(int f) {
    unsigned int ret = 1;
    for(int i = 0;i < f; ++i) {
        ret *= 10;
    }
    return ret;
}

unsigned int arr2num() {
    unsigned int ret = 0;
    for(int i = 0;i < index; ++i) {
        ret += (unsigned int)num[i] * frac(index - 1 - i);
    }
    return ret;
}

unsigned int maxPart(unsigned int number) {
    for(unsigned int i = number - 1;i > 1; --i) {
        if(number % i == 0) return i;
    }
    return number;
}

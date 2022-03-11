#include<stdio.h>

int frac1[50];
int num1[50];
int frac2[50];
int num2[50];

int f_frac[50];
int f_num[50];
int index;

void cal(int s,int n1,int n2) {
    int i = 0;
    int j = 0;
    for(; i < n1; ++i) {
        for(; j < n2; ++j) {
            if(frac1[i] < frac2[j]){
                break;
            }
            else if(frac1[i] == frac2[j]) {
                f_frac[index] = frac1[i];
                if(s == 0) f_num[index] = num1[i] + num2[j];
                else f_num[index] = num1[i] - num2[j];
                index++;
                i++;
            }
            else {
                f_frac[index] = frac2[j];
                if(s == 1) f_num[index] = -num2[j];
                else f_num[index] = num2[j];
                index++;
            }
        }
        f_frac[index] = frac1[i];
        f_num[index] = num1[i];
        index++;

    }
    // to check whether n2 is consumed completely
    for(; j < n2; ++j) {
        f_frac[index] = frac2[j];
        if(s == 1) f_num[index] = -num2[j];
        else f_num[index] = num2[j];
        index++;
    }
}

// to show the answer
void display() {
    for(int i =0;i < index; ++i) {
        if(i == 0) {
            if(f_num[i] == 0){
                //do not display
            }
            else if(f_num[i] == 1) {
                if(f_frac[i] == 1) {
                    printf("x");
                }
                else if(f_frac[i] == 0){
                    printf("1");
                }
                else {
                    printf("x^%d",f_frac[i]);
                }
            }
            else if(f_num[i] == -1) {
                if(f_frac[i] == 1) {
                    printf("-x");
                }
                else if(f_frac[i] == 0){
                    printf("-1");
                }
                else {
                    printf("-x^%d",f_frac[i]);
                }
            }
            else {
                if(f_frac[i] == 1) {
                    printf("%dx",f_num[i]);
                }
                else if(f_frac[i] == 0){
                    printf("%d",f_num[i]);
                }
                else {
                    printf("%dx^%d",f_num[i],f_frac[i]);
                }
            }
        }
        else {
            if(f_num[i] == 0){
                //do not display
            }
            else if(f_num[i] == 1) {
                if(f_frac[i] == 1) {
                    printf("+x");
                }
                else if(f_frac[i] == 0){
                    printf("+1");
                }
                else {
                    printf("+x^%d",f_frac[i]);
                }
            }
            else if(f_num[i] == -1) {
                if(f_frac[i] == 1) {
                    printf("-x");
                }
                else if(f_frac[i] == 0){
                    printf("-1");
                }
                else {
                    printf("-x^%d",f_frac[i]);
                }
            }
            else if(f_num[i] > 0) {
                if(f_frac[i] == 1) {
                    printf("+%dx",f_num[i]);
                }
                else if(f_frac[i] == 0){
                    printf("+%d",f_num[i]);
                }
                else {
                    printf("+%dx^%d",f_num[i],f_frac[i]);
                }
            }
            else if(f_num[i] < 0) {
                if(f_frac[i] == 1) {
                    printf("%dx",f_num[i]);
                }
                else if(f_frac[i] == 0){
                    printf("%d",f_num[i]);
                }
                else {
                    printf("%dx^%d",f_num[i],f_frac[i]);
                }
            }

        }
    }
}

int main(void) {
    int n1,n2,s;
    scanf("%d %d %d",&n1,&n2,&s);

    for(int i = 0;i < n1; ++i) {
        scanf("%d %d",&num1[i],&frac1[i]);
    }
    for(int i = 0;i < n2; ++i) {
        scanf("%d %d",&num2[i],&frac2[i]);
    }

    cal(s,n1,n2);

    display();
    return 0;
}
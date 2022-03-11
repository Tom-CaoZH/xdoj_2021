#include<stdio.h>
#include<string.h>

char str[50];

char stack[50];
int index = 0;

int main(void) {
    scanf("%s",str);
    int len= strlen(str);

    int flag = 0;
    for(int i = 0;i < len; ++i) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            flag = 1;
            stack[index] = str[i];
            index++;
        }
        else if(str[i] == ')') {
            if(stack[index - 1] == '(') index--;
            else {
                printf("no");
                return 0;
            }
        }
        else if(str[i] == ']') {
            if(stack[index - 1] == '[') index--;
            else {
                printf("no");
                return 0;
            }
        }
        else if(str[i] == '}') {
            if(stack[index - 1] == '{') index--;
            else {
                printf("no");
                return 0;
            }
        }
    }
    if(flag == 0 || index != 0) printf("no");
    else printf("yes");
    return 0;
}
#include<stdio.h>

char plane[20][20];
char record[20][20];
int pn;
int pm;
int count;

int check_out(int n,int m) {
    if(pm < 0 || pm >= m) return 1;
    if(pn < 0 || pn >= n) return 1;
    return 0;
}

int go(char flag) {
    if(record[pn][pm] == 1) return -1;

    count++;
    record[pn][pm] = 1;
    switch (flag) {
        case 'W' : pm -= 1; break;
        case 'E' : pm += 1; break;
        case 'S' : pn += 1; break;
        case 'N' : pn -= 1; break;
    }
    return 1;
}

int main(void) {
    int n,m,c;
    scanf("%d %d %d",&n,&m,&c);
    pm = c - 1;
    for(int i = 0;i < n;++i) {
        getchar();
        for(int j = 0;j < m;++j) {
            // scanf("%c",&plane[i][j]);
            plane[i][j] = getchar();
        }
    }

    while(check_out(n,m) != 1) {
        if(go(plane[pn][pm]) == -1) {
            // there is a loop
            printf("loop %d",count);
            return 0;
        }
    }

    // no loop can go out
    printf("out %d",count);

    return 0;
}
#include<stdio.h>

typedef struct Win {
    int x1,y1,x2,y2,ori;
} win;

win wins[11];
int result[50];

void swap(win* n1,win* n2) {
    win tmp;
    // win* temp;
    // win* temp = null;
    win* temp = &tmp;
    *temp = *n1;
    *n1 = *n2;
    *n2 = *temp;
}

int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i = 1;i <= n; ++i) {
        scanf("%d %d %d %d",&wins[i].x1,&wins[i].y1,&wins[i].x2,&wins[i].y2);
        wins[i].ori = i;
    }

    int x,y,index ;
    for(int j = 0;j < m; ++j ){
        index = 0;
        scanf("%d %d",&x,&y);
        for(int i = 1;i <= n; ++i) {
            if(x >= wins[i].x1 && x <= wins[i].x2 && y >= wins[i].y1 && y <= wins[i].y2) {
                index = i;
            }
        }
        if(index == 0) {
            result[j] = 11;
        }
        else {
            result[j] = wins[index].ori;
            swap(&wins[index],&wins[n]);
            for(int i = index;i < n - 1;++i) {
                swap(&wins[i],&wins[i+1]);
            }
        }
    }

    for(int i = 0;i < m; ++i) {
        if(result[i] == 11) printf("IGNORED\n");
        else printf("%d\n",result[i]);
    }

    return 0;
}
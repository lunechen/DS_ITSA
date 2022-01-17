#include <stdio.h>
#include <stdlib.h>

int judge(int *a){
    int flag=0;
    for (int i=0; i<3; i++){
        if (a[3*i]==a[3*i+1] && a[3*i]==a[3*i+2]) return 1;
        if (a[i]==a[i+3] && a[i]==a[i+6]) return 1;
    }
    if (a[0]==a[4] && a[4]==a[8]) return 1;
    if (a[2]==a[4] && a[4]==a[6]) return 1;
    return 0;
}

int main(){
    int a[9];
    for (int i=0; i<9; i++){
        scanf("%d", &a[i]);
    }
    if (judge(a)) printf("True\n");
    else printf("False\n");
    return 0;
}
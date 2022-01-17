#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int a[11]={0};
    for (int i=0; i<10; i++){
        scanf(" %c", &c);
        if (c=='X') a[i]=10;
        else a[i]=c-'0';
        if (i>0) a[i]+=a[i-1];
    }
    for (int i=0; i<10; i++){
        if (i>0) a[i]+=a[i-1];
    }
    if (a[9]%11==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    while(scanf("%d", &a)!=EOF){
        for (int i=1; i<=a; i++){
            printf("%d*%d=%d\n", i, i, i*i);
        }
    }

    return 0;
}
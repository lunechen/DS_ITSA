#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        printf("%d\n", (a+b)*(a+b));
    }

    return 0;
}
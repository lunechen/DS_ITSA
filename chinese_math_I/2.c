#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        printf("%.1lf\n", a*b/2.0);
    }

    return 0;
}
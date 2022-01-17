#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    
    while(scanf("%d", &a)!=EOF){
        scanf("%d %d", &b, &c);
        printf("Trapezoid area:%.1lf\n", (a+b)*c/2.0);
    }

    return 0;
}
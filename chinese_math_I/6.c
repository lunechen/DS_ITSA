#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    
    while(scanf("%d", &a)!=EOF){
        printf("%.1lf\n", a*1.6);
    }

    return 0;
}
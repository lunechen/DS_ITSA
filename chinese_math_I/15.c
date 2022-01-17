#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        if (a>100 || b>100) printf("outside\n");
        else printf("inside\n");
    }

    return 0;
}
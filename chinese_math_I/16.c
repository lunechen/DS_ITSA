#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        int dis=a*a+b*b;
        if (dis<40000) printf("inside\n");
        else printf("outside\n");
    }
    
    return 0;
}
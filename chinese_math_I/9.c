#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1;
    int v[32];
    for (int i=0; i<32; i++){
        v[i]=a;
        a<<=1;
    }
    
    while(scanf("%d", &a)!=EOF){
        if (a>31) printf("Value of more than 31\n");
        else printf("%d\n", v[a]);
    }

    return 0;
}
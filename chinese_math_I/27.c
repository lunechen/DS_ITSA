#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, sum=0;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        if (a>b){
            sum=a;
            a=b;
            b=sum;
        }
        sum=0;
        for (int i=a; i<=b; i++){
            sum+=i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
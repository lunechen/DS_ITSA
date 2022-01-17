#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, sum;

    while(scanf("%d", &a)!=EOF){
        sum=0;
        for (int i=3; i<=a; i+=3){
            sum+=i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
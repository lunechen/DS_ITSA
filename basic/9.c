#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    while(scanf("%d", &a)!=EOF){
        int sum=0;
        for (int i=3; i<=a; i+=3)sum+=i;
        printf("%d\n", sum);
    }
    return 0;
}
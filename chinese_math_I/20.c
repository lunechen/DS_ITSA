#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int a){
    if (a==1) return 1;
    return a*factorial(a-1);
}

int main(){
    long long int a;

    while(scanf("%lld", &a)!=EOF){
        printf("%lld\n", factorial(a));
    }

    return 0;
}
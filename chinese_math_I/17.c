#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
    if (b==0) return a;
    return GCD(b, a%b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", GCD(a, b));

    return 0;
}
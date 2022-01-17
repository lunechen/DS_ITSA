#include <stdio.h>
#include <stdlib.h>

int f(int a){
    if (a==0 || a==1) return a+1;
    return f(a-1)+f(a/2);
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", f(a));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    scanf("%d", &a);
    printf("%d days\n", a/60/60/24);
    a-=(a/60/60/24)*60*60*24;
    printf("%d hours\n", a/60/60);
    a-=(a/60/60)*60*60;
    printf("%d minutes\n", a/60);
    a-=(a/60)*60;
    printf("%d seconds\n", a);

    return 0;
}
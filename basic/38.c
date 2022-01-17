#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    double sum1=0, sum2=0;
    scanf("%d", &a);

    if (a-700>0){
        sum1+=(a-700)*5.63;
        sum2+=(a-700)*4.5;
        a=700;
    }
    if (a-500>0){
        sum1+=(a-500)*4.97;
        sum2+=(a-500)*4.01;
        a=500;
    }
    if (a-330>0){
        sum1+=(a-330)*4.39;
        sum2+=(a-330)*3.61;
        a=330;
    }
    if (a-120>0){
        sum1+=(a-120)*3.02;
        sum2+=(a-120)*2.68;
        a=120;
    }
    sum1+=a*2.10;
    sum2+=a*2.10;
    printf("Summer months:%.2lf\nNon-Summer months:%.2lf\n", sum1, sum2);

    return 0;
}
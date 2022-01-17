#include <stdio.h>
#include <stdlib.h>

int main(){
    double a[10], maxi, mini;

    for (int i=0; i<10; i++){
        scanf("%lf", &a[i]);
    }
    maxi=a[0];
    mini=a[0];
    for (int i=0; i<10; i++){
        if (a[i]>maxi) maxi=a[i];
        if (a[i]<mini) mini=a[i];
    }
    printf("maximum:%.2lf\nminimum:%.2lf\n", maxi, mini);
    return 0;
}
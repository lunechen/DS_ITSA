#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    double c;

    while(scanf("%d", &a)!=EOF){
        scanf("%d", &b);
        if (b==1){
            c=(a-80)*0.7;
            printf("%.1lf\n", c);
        }
        else{
             c=(a-70)*0.6;
            printf("%.1lf\n", c);   
        }
    }

    return 0;
}
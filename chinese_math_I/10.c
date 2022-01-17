#include <stdio.h>
#include <stdlib.h>

int main(){
    int b;
    double a;
    
    while(scanf("%lf", &a)!=EOF){
        int b=(a*9/5+32)*100;
        if (b%10>=5) b+=10;
        b/=10;
        a=b/10.0;
        printf("%.1lf\n", a);
    }

    return 0;
}
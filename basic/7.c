#include <stdio.h>
#include <stdlib.h>

int main(){
    char o;
    long long int n, a, b, c, d, e, f;
    scanf("%lld", &n);

    while(n--){
        scanf(" %c %lld %lld %lld %lld", &o, &a, &b, &c, &d);
        if (o=='+'){
            e=a+c;
            f=b+d;
        }
        else if(o=='-'){
            e=a-c;
            f=b-d;
        }
        else{
            e=a*c-b*d;
            f=a*d+b*c;
        }
        printf("%lld %lld\n", e, f);
    }

    return 0;
}
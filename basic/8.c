#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, flag;

    while(scanf("%lld", &a)!=EOF){
        flag=0;
        for (long long int i=2; i*i<=a; i++){
            if (a%i==0){
                flag=1;
                break;
            }
        }
        if (a==1 || flag) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}
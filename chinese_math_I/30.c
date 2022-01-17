#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    while(scanf("%d", &a)!=EOF){
        int flag=0;
        for (int i=2; i*i<=a; i++){
            if (a==1 || a%i==0){
                flag=1;
                break;
            }
        }
        if (flag) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}
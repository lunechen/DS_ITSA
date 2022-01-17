#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, e=0;
    int p[10]={0};
    scanf("%d %d %d %d", &a, &b, &c, &d);
    p[a]++;
    p[b]++;
    p[c]++;
    p[d]++;

    for (int i=0; i<10; i++){
        if (p[i]>0) e++;
    }
    if (e>3 || p[a]==3 || p[b]==3 || p[c]==3 || p[d]==3 ) printf("R\n");
    else if (e==1) printf("WIN\n");
    else{
        int sum=0, even=0;
        for (int i=0; i<10; i++){
            if (p[i]==2) even=2*i;
            else if (p[i]>0) sum+=i;
        }
        if (sum==0) printf("%d\n", even);
        else printf("%d\n", sum);
    }

    return 0;
}
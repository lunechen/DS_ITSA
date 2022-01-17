#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(long long int *)a - *(long long int *)b;
}

int main(){
    long long int n, T, m, k, sum;
    long long int g[1000];
    scanf("%lld", &n);

    while(n--){
        sum=0;
        scanf("%lld %lld %lld", &T, &m, &k);
        for (long long int i=0; i<k; i++){
            scanf("%lld", &g[i]);
        }
        qsort(g, k, sizeof(g[0]), cmp);
        for (long long int i=0; i<m; i++) sum+=g[i];
        if (sum>T) printf("Impossible\n");
        else printf("%lld\n", sum);
    }

    return 0;
}
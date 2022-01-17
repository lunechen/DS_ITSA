#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a, b, c;
    scanf("%d", &n);

    while(n--){
        scanf("%d %d %d", &a, &b, &c);
        if (a>=60 && b>=60 && c>=60) printf("P\n");
        else if(a>=60 && b>=60 && c<60 && a+b+c>=220) printf("P\n");
        else if(a>=60 && b<60 && c>=60 && a+b+c>=220) printf("P\n");
        else if(a<60 && b>=60 && c>=60 && a+b+c>=220) printf("P\n");
        else if(a>=60 && b>=60 && c<60) printf("M\n");
        else if(a>=60 && b<60 && c>=60) printf("M\n");
        else if(a<60 && b>=60 && c>=60) printf("M\n");
        else if(a<60 && b<60 && c>=80) printf("M\n");
        else if(a<60 && b>=80 && c<60) printf("M\n");
        else if(a>=80 && b<60 && c<60) printf("M\n");
        else printf("F\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sum=0;
    char s[200];
    char s2[1000];    
    char *ptr=s, *qtr=s2;
    scanf("%s %s", s, s2);

    while(strstr(qtr, ptr)){
        qtr=strstr(qtr, ptr);
        qtr++;
        sum++;        
    }
    printf("%d\n", sum);
    return 0;
}
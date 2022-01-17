#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int flag=0, sum=0;
    char c;
    char al[26]={0};
    
    while((c=getchar())!=EOF){
        if (isalpha(c)){
            if (flag==0) sum++;
            if (isupper(c)) al[c-'A']++;
            else al[c-'a']++;
            flag=1;
        }
        else flag=0;
    }

    printf("%d\n", sum);
    for (int i=0; i<26; i++){
        if (al[i]!=0) printf("%c : %d\n", 'a'+i, al[i]);
    }

    return 0;
}
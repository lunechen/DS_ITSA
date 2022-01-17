#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int a;

	while(scanf("%d", &a)!=EOF){
		int len=0;
		char s[100000];
		char s2[100000];
		while(a!=0){
			s[len]=a%10+'0';
			a/=10;
			len++;
		}
		s[len]='\0';
		for (int i=len-1; i>=0; i--) s2[len-1-i]=s[i];
		s2[len]='\0';
		if (strcmp(s, s2)==0) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
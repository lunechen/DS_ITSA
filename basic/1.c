#include <stdio.h>
#include <stdlib.h>


// 0=***** 1=*    * 2=    * 3=*     
int LED[10][5]={0, 1, 1, 1, 0,\
                2, 2, 2, 2, 2,\
                0, 2, 0, 3, 0,\
                0, 2, 0, 2, 0,\
                1, 1, 0, 2, 2,\
                0, 3, 0, 2, 0,\
                0, 3, 0, 1, 0,\
                0, 2, 2, 2, 2,\
                0, 1, 0, 1, 0,\
                0, 1, 0, 2, 2};

int main(){
    char a[4];
    int b;
    scanf("%c%c%c%c", &a[0], &a[1], &a[2], &a[3]);

    for (int j=0; j<5; j++){    
        for (int i=0; i<3; i++){
            b=a[i]-'0';
            if (LED[b][j]==0) printf("***** ");
            if (LED[b][j]==1) printf("*   * ");
            if (LED[b][j]==2) printf("    * ");
            if (LED[b][j]==3) printf("*     ");
        }
        b=a[3]-'0';
            if (LED[b][j]==0) printf("*****");
            if (LED[b][j]==1) printf("*   *");
            if (LED[b][j]==2) printf("    *");
            if (LED[b][j]==3) printf("*    ");
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
 int main(){
    int n = 5;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j <= n; j++)
            printf("%d ", n--);
        printf("\n");
    }

    return 0;
 }

#include<stdio.h>

int main(){
    int i,j,k=1;

    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
            }
        for(j=1;j<=k;j++){
            printf("*");
        }
        printf("\n"); 
        k=k+2;   
    }
    k=k-4;
    for(i=1;i<=4;i++){
        for (j=1;j<=i;j++){
            printf(" ");
        }
        for (j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
        k=k-2;
    }
    return 0;
}
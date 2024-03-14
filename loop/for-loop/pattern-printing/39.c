#include<stdio.h>

int main(){
    int i,j,k=1;

    //Upper half of the diamond
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf("*");
            }
        for(j=1;j<=2*i;j++){
            if(j==1 || j==2*i)
            printf("*");
            else
            printf(".");
        }
        for(j=1;j<=5-i;j++){
            printf("*");
        }
        printf("\n"); 
        k=k+2;   
    }
    k=k-4;
    //Lower half of the diamond
    for(i=5;i>=1;i--){
         for(j=1;j<=5-i;j++){
            printf("*");
        }
        for (j=1;j<=2*i;j++){
            if(j == 1 || j== 2*i)
            printf("*");
            else
            printf(".");
        }
        for (j=1;j<=5-i;j++){
            printf("*");
        }
        printf("\n");
        k=k-2;
    }
    return 0;
}
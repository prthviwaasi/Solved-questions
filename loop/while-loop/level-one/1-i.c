// Write a program to enter a number and print its reverse value.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        printf("%d",n%10);
        n=n/10;
    }
    printf("%d",n);
return 0;
}
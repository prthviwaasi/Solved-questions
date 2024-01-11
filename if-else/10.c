// wap to enter  a number if the number is divisible by 10 then display the number other wise display the previous number divisible by 10.

#include<stdio.h>

int main(){
    int n;
    printf("Enter any number:\t");
    scanf("%d", &n);
    if(n%10==0)
        printf("%d is divisible by 10\n", n);
    else if(n = n-n%10)
        printf("%d is the previous no. divisible by 10\n", n);
    
    return 0;
}
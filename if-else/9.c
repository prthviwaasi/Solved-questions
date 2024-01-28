// wap to enter  a number if the number is divisible by 10 then display the number other wise display the next number divisible by 10. 

#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number:\t");
    scanf("%d", &n);    
    if(n%2==0)
        printf("Entered number is even..\n");
    else
        printf("Entered number is odd..\n");
        
    return 0;
}
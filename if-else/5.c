#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number:\t");
    scanf("%d", &n);    
    if(n>=0)
        printf("Entered number is positive..\n");
    else
        printf("Entered number is negative..\n");
        
    return 0;
}
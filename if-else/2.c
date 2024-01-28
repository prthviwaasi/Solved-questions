// wap to enter a no and check that the no is even or odd.

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
#include<stdio.h>

int main()
{
    int n, cp ,sp;
    printf("Enter the cost price of the item:\t");
    scanf("%d", &cp);    
    printf("Enter the selling price of the item:\t");
    scanf("%d", &sp);    
    if(cp > sp)
        printf("Your loss is INR %d.\n", cp-sp);
    else
        printf("Your profit is INR %d.\n", sp - cp);
        
    return 0;
}
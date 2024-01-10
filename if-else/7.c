#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three side of a triangle:\t");
    scanf("%d%d%d", &a, &b, &c);    
    if(a + b > c && b + c > a && c + a > b)
        printf("Triangle formation is possible..\n");
    else
        printf("Triangle formation is not possible..\n");
        
    return 0;
}
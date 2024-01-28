// wap to enter three angle of a triangle and check that the triangle formation is possible or not. 

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three side of a triangle:\t");
    scanf("%d%d%d", &a, &b, &c);    
    if(a + b + c == 180)
        printf("Triangle formation is possible..\n");
    else
        printf("Triangle formation is not possible..\n");
        
    return 0;
}
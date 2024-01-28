// wap to enter two no and print the greatest no. 

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter any two numbers:\t");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("%d is the greatest no.\n", a);
    else if(b>a)
        printf("%d is the greatest no.\n", b);
    else 
        printf("%d is equal to %d\n", a, b);
    return 0;
}
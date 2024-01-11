#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers:\t");
    scanf("%d %d", &a, &b);
    c = a-(-b);
    printf("Result of %d + %d = %d\n",a, b, c);

    return 0;
}
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers:\t");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swap is %d\t%d\n",a, b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("The value of a and b after swap is %d\t%d\n",a, b);
    return 0;
}
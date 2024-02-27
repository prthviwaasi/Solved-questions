// Write a program to print the fibonacci series upto range.
#include <stdio.h>

int main()
{
    int r, a=0, b=1, c;

    printf("Enter the range of fibonacci: ");
    scanf("%d", &r);

    while (a <= r)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
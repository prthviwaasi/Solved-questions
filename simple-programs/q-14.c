#include <stdio.h>

int main()
{
    int a, b, n, m, sum;
    printf("Enter the five digit numbers:\t ");
    scanf("%d", &n);
    a = n/10000;
    b = n%10;
    printf("Sum of the first and last digit numbers is = %d\n ", a+b);
return 0;
}
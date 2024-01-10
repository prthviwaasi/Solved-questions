#include <stdio.h>

int main()
{
    int a, b, n;

    printf("Enter two number:\t");
    scanf("%d %d", &a, &b);
    printf("\n=====================================");
    printf("\n==With using third variable==");
    n = a + b;
    printf("\nSum of %d and %d is: %d.", a, b, n);
    printf("\n=====================================\n");
    printf("==Without using third variable==");
    printf("\n%d + %d = %d", a, b, a+b);
    printf("\n=====================================\n");


return 0;

}


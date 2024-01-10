#include <stdio.h>

int main()
{
    int a, b, p, s;

    printf("Enter two numbers:\t");
    scanf("%d %d", &a, &b);

    p=a*b;
    s=a+b;
    printf("\n Cube of there sum: %d, \nCube of there product: %d.\n", (s*s*s), (p*p*p) );

return 0;

}

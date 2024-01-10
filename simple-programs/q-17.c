#include <stdio.h>

int main()
{
    int n, a = 5, b = 10;

    printf("=====Swapping with a third variable=====\n");
    printf("Before: a = %d, b = %d\n",a, b);
    //swapping with a third variable
    n=a;
    a=b;
    b=n;
    printf("After: a = %d, b = %d\n\n",a, b);

    printf("=====Swapping without a third variable=====\n");
    printf("Before: a = %d, b = %d\n",a, b);
    //swapping without a third variable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After: a = %d, b = %d\n",a, b);


return 0;

}

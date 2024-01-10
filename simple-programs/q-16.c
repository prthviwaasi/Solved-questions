#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("Before: a = %d, b = %d\n",a ,b);

    a = b, b = a;
    printf("After: a = %d, b = %d\n",a ,b);

return 0;

}

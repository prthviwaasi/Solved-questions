#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter any two numbers:\t");
    scanf("%d %d", &a, &b);

    a = a*90/100;
    b = b*90/100;     
    printf("The sum Of 90%% of each number is = %d\n", a+b);

return 0;

}

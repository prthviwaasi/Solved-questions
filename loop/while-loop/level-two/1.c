// write a program to enter any number check that the number is perfect or not.
#include <stdio.h>
int main()
{
    int n, i = 1, s = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            s++;
        }
        i++;
    }
    if (s == n)
        printf("Number is perfect");
    else
        printf("Number is not perfect");

    return 0;
}
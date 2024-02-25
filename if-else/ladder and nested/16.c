/*Q.(37) Write a program to accept purchase amount from discount of 10% is given on purchase more than 10000. discount of 20% is given on purchase of more than 20000 for purchase & less than 10000 no discount is given. Enter purchase amount & print discount allocated in amount & net purchase amount? */

#include <stdio.h>

int main()
{
    float pa, da, na;

    printf("Enter the purchase amount: ");
    scanf("%f", &pa);
    // calculate discount amount and net amount
    if (pa > 20000)
        da = pa * 0.20;
    else if (pa > 10000)
        da = pa * 0.10;
    else
        da = 0;

    na = pa - da;
    // print discount and net amount
    printf("\nDiscount allocated: %.2f\n", da);
    printf("Net amount after discount: %.2f\n", na);

    return 0;
}
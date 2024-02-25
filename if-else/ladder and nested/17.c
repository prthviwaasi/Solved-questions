/*Write a program to enter the basic salary from the user and calculate the gross salary. If the condition are as follows.
a) if the basic sal is between 10000 and 20000 then Ta=2.5%of basic sal , Da=3.5%of basic sal ,Hra=4.5%of basic sal.
b) if the basic sal is less than 10000 then Ta=2.5%of basic sal , Da=2.5%of basic sal ,Hra=2.5%of basic sal.
c) if the basic sal is grater 20000 then Ta=5%of basic sal , Da=5%of basic sal ,Hra=5% of basic sal.*/

#include <stdio.h>
int main()
{
    float gs, bs, ta, da, hra;

    printf("Enter the basic salary: ");
    scanf("%f", &bs);

    // calculate the ta, da, hra according to question
    if (bs >= 10000 && bs <= 20000)
    {
        ta = (2.5 * bs) / 100;
        da = (3.5 * bs) / 100;
        hra = (4.5 * bs) / 100;
    }
    else if (bs < 10000)
    {
        ta = (2.5 * bs) / 100;
        da = (2.5 * bs) / 100;
        hra = (2.5 * bs) / 100;
    }
    else if (bs > 20000)
    {
        ta = (5 * bs) / 100;
        da = (5 * bs) / 100;
        hra = (5 * bs) / 100;
    }
    // calculate the gross salary
    gs = bs + ta + da + hra;
    printf("The gross salary:%.2f", gs);

    return 0;
}
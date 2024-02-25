/*Q.(36) .write a program to enter the basic salary, sex, mariter status from the user and compute gross salary according to the following condition.
a)if employee is male and is batchlar and earns more than 50000 then         Ta=4%of basic sal , Da=6%of basic sal ,Hra=10%of basic sal.
b)if employee is male having maried and earns more than 10000 but less than 60000 then         Ta=2.5%of basic sal , Da=3.5%of basic sal ,Hra=6.5%of basic sal.
c) if employee is female and is batchlar and earns not more than 20000  then         Ta=2.5%of basic sal , Da=2.5%of basic sal ,Hra=2.5%of basic sal. */

#include <stdio.h>

int main()
{
    float bs, ta, da, hra, gs;
    char s[10], ms[10];

    printf("Enter the basic salary: ");
    scanf("%f", &bs);
    printf("Enter the Sex:- \n(M) for male: \n(F) for female: ");
    scanf("%s", &s);
    printf("\nEnter the marital status:- \n(B) for bachelor: \n(M) forn married: ");
    scanf("%s", &ms);

    if (s == 'M' || s == 'm' && ms == 'B' || ms == 'b' && bs > 50000)
    {
        ta = bs * 0.04;
        da = bs * 0.06;
        hra = bs * 0.1;
    }
    else if (s == 'M' || s == 'm' && ms == 'M' || ms == 'm' && bs >= 10000)
    {
        ta = bs * 0.025;
        da = bs * 0.035;
        hra = bs * 0.065;
    }
    else if (s == 'F' || s == 'f' && ms == 'B' || ms == 'b' && bs <= 20000)
    {
        ta = bs * 0.025;
        da = bs * 0.025;
        hra = bs * 0.025;
    }
    else
    {
        ta = bs * 0;
        da = bs * 0;
        hra = bs * 0.15;
    }
    // calculate the gross salary
    gs = bs + ta + da + hra;
    printf("\nThe gross salary is: %.2f", gs);

    return 0;
}

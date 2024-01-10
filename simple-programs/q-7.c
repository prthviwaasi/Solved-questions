#include <stdio.h>

int main()
{
    int n , gross_sal;
    float ta, da, hra;
    printf("Enter the basic salary of the employee:\t");
    scanf("%d", &n);

    ta = n*10/100;
    da = n*15/100;
    hra = n*20/100;
    gross_sal = n + ta + da + hra;
    printf("The ta of basic salary is:\t%.2f\n", ta);
    printf("The da of basic salary is:\t%.2f\n", da);
    printf("The hra of basic salary is:\t%.2f\n", hra);
    printf("The Gross salary of employee is:\t%d\n", gross_sal);

return 0;

}

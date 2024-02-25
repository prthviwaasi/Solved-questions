/*(34) .write a program to enter the current meter reading and previous meter reading and catagories from the user and calculate total amount the condition are as follows.
a>if custumer is domestic then basic amount is 500 and rate per unit is 10 rupes per unit.
b>if custumer is commercial then basic amount is 600 and rate perunit is 10 rupes perunit */

#include <stdio.h>
int main()
{
    int cmr, pmr, unit, bill;
    char ch;
    printf("Enter the current meter reading: ");
    scanf("%d", &cmr);
    printf("Enter the previous meter reading: ");
    scanf("%d", &pmr);
    printf("Enter the category:-\n(C) for Commercial: \n(D) for Domestic: ");
    scanf(" %c", &ch);
    
    unit = cmr - pmr;

    if (ch == 'C' || ch == 'c')
    {
        bill = 600 + unit * 10;
    }
    else if (ch == 'D' || ch == 'd')
    {
        bill = 500 + unit * 10;
    }
    else
        printf("Invalid category");

    printf("The total bill is %d", bill);
    
return 0;
}
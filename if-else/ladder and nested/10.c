/*write a program to enter the month number from user & shows that how many days in this month with name.*/

#include <stdio.h>

int main(){
    int m;
    printf("Enter the month number: ");
    scanf("%d",&m);
    if  (m == 1 )
    {
        printf("January has 31 days.\n");
    }
    else if (m == 2 )
    {
        printf("February has 28 days.\n");
    }
    else if (m == 3 )
    {
        printf("March has 31 days.\n");
    }
    else if (m == 4 )
    {
        printf("April has 30 days.\n");
    }
    else if (m == 5 )
    {
        printf("May has 31 days.\n");
    }
    else if (m == 6 )
    {
        printf("June has 30 days.\n");
    }
    else if (m == 7 )
    {
        printf("July has 31 days.\n");
    }
    else if (m == 8 )
    {
        printf("August has 31 days.\n");
    }
    else if (m == 9 )
    {
        printf("September has 30 days.\n");
    }
    else if (m == 10 )
    {
        printf("October has 31 days.\n");
    }
    else if (m == 11 )
    {
        printf("November has 30 days.\n");
    }
    else if (m == 12 )
    {
        printf("December has 31 days.\n");
    }
    else
    {
        printf("Wrong input..\n");
    }
    return 0;
}
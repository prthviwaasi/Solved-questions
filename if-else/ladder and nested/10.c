/*write a program to enter the month number from user & shows that how many days in this month with name.*/

#include <stdio.h>

int main(){
    int m;
    printf("Enter the month number");
    scanf("%d",&m);
    if  (m == 1 || m==jan)
    {
        printf("January has 31 days");
    }
    else if (m == 2 || m==feb)
    {
        printf("February has 28 days");
    }
    else if (m == 3 || m==mar)
    {
        printf("March has 31 days");
    }
    else if (m == 4 || m==apr)
    {
        printf("April has 30 days");
    }
    else if (m == 5 || m==may)
    {
        printf("May has 31 days");
    }
    else if (m == 6 || m==jun)
    {
        printf("June has 30 days");
    }
    else if (m == 7 || m==jul)
    {
        printf("July has 31 days");
    }
    else if (m == 8 || m==aug)
    {
        printf("August has 31 days");
    }
    else if (m == 9 || m==sep)
    {
        printf("September has 30 days");
    }
    else if (m == 10 || m==oct)
    {
        printf("October has 31 days");
    }
    else if (m == 11 || m==nov)
    {
        printf("November has 30 days");
    }
    else if (m == 12 || m==dec)
    {
        printf("December has 31 days");
    }
    else
    {
        printf("Wrong choice");
    }
    return 0;
}
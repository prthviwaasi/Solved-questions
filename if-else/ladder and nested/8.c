/*Enter any Day number between 1 to 7, and show that Week Day.*/

#include <stdio.h>

int main(){
    int day;
    printf("Enter day number between 1 to 7: ");
    scanf("%d", &day);

    if (day==1)
        printf("Monday\n");
    else if (day==2)
        printf("Tuesday\n");
    else if (day==3)
        printf("Wednesday\n");
    else if (day==4)
        printf("Thrusday\n");
    else if (day==5)
        printf("Friday\n");
    else if (day==6)
        printf("Saturday\n");
    else if (day==7)
        printf("Sunday\n");
    else 
        printf("Invalid Choice!!\n");

    return 0;
}


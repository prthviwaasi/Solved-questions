#include<stdio.h>

int main()
{
    float m, d;
    int y;
    printf("Enter how many years(in interger):\t");
    scanf("%d", &y);
    //converting the years into months 
    m = y*12;
    //converting the years into days
    d = y*365.25;
    printf("There are %.2f days and %.f months in %d years.\n", d, m, y);    
    
    return 0;
}
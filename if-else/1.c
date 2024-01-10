#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);
    if(age>=18)
        printf("Your are eligible to vote...\n");
    else
        printf("You're not eligible to vote..!\n");
    return 0;
}
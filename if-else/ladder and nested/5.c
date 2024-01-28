/*wap to enter the total agrigate  marks of student. if marks of student is less than 500 but grater than 300 then display first division.  if marks of student is less than 300 but grater than 225 then display second division.  if marks of student is less than 225 but grater than 150 then display third division. Other wise fail. */

#include <stdio.h>

int main()
{
    int tm;
    printf("Enter the total marks (out of 500)?: ");
    scanf("%d", &tm);
     //conditions as follow
     if(tm >= 300 && tm <= 500)
        printf("You did great, You got First division..\n");
    else if (tm >= 225 && tm <= 300)
        printf("Well done, You got Second division..\n");
    else if (tm >= 150 && tm <= 225)
        printf("You Passed, You got Third division..\n");
    else 
        printf("YOU FAILED!!\n");
    return 0;
}
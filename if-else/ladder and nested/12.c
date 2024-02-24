/*Q(33).Enter marks of five subjects. Calculate Total, Percentage and Grade as following : Basis Grade
Percentage >= 60 First
Percentage >= 48 Second
Percentage >= 38 Third
Percentage >= 36 Pass In one sub. < 36 Supplementary In two or more sub.< 36 Fail.
*/
#include <stdio.h>

int main()
{

    int m1, m2, m3 ,m4 ,m5;
    int total;
    float percentage;

    // Input marks for five subjects
    printf("Enter marks of five subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &m1);
    printf("Subject 2: ");
    scanf("%d", &m2);
    printf("Subject 3: ");
    scanf("%d", &m3);
    printf("Subject 4: ");
    scanf("%d", &m4);
    printf("Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;// Calculate total marks

    percentage = (float)total / 5.0; // calculate total percentage 

    if (percentage >= 60)
        printf("First Division\n");
    else if (percentage >= 48)
        printf("Second Division\n");
    else if (percentage >= 38)
        printf("Third Division\n");
    else if (percentage >= 36)
        printf("Pass\n");
    else
    {
     int count = 0;
        if (m1 < 36) count++;
        if (m2 < 36) count++;
        if (m3 < 36) count++;
        if (m4 < 36) count++;
        if (m5 < 36) count++;
        
        if (count >= 2) {
            printf("Grade: Fail\n");
        } else {
            printf("Grade: Supplementary\n");
        }
    }
return 0;
}
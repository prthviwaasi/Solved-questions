/*Q(23) .wap to enter the three person height in feet and inch and display the sum of all person in feet and inch.*/

#include <stdio.h>

int main()
{
    int total_ft, total_inch, sum;
    int feet1, inch1;
    int feet2, inch2;
    int feet3, inch3;

    printf("Enter the first person height in (feet and inch): ");
    scanf("%d%d", &feet1, &inch1);
    printf("\nEnter the second person height in (feet and inch): ");
    scanf("%d%d", &feet2, &inch2);
    printf("\nEnter the third person height in (feet and inch): ");
    scanf("%d%d", &feet3, &inch3);

    // calculate total heigth in inches
    total_inch = inch1 + inch2 + inch3;
    total_ft = feet1 + feet2 + feet3 + (total_inch / 12);
    total_inch = total_inch % 12;
    // adjust feet and inch if total inches exceed 12
    total_ft += total_inch / 12;
    total_inch = total_inch % 12;

    printf("Total height: %d feet and %d inches\n", total_ft, total_inch);
    return 0;
}
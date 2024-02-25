/*wap to enter length and width of three rectangle and print whose area is smallest.*/
#include <stdio.h>

int main()
{
    float l1, w1, ar1;
    float l2, w2, ar2;
    float l3, w3, ar3;

    // Input length and width for three rectangles
    printf("Enter length and width for rectangle 1: ");
    scanf("%f %f", &l1, &w1);
    ar1 = l1 * w1;

    printf("Enter length and width for rectangle 2: ");
    scanf("%f %f", &l2, &w2);
    ar2 = l2 * w2;

    printf("Enter length and width for rectangle 3: ");
    scanf("%f %f", &l3, &w3);
    ar3 = 3 * w3;

    // Compare areas to find the smallest
    if (ar1 < ar2 && ar1 < ar3)
        printf("Rectangle 1 has the smallest area with %.2f square units.\n", ar1);
    else if (ar2 < ar1 && ar2 < ar3)
        printf("Rectangle 2 has the smallest area with %.2f square units.\n", ar2);
    else if (ar3 < ar1 && ar3 < ar2)
        printf("Rectangle 3 has the smallest area with %.2f square units.\n", ar3);
    else
        printf("There is a tie in smallest areas.\n");

    return 0;
}
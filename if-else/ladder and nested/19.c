/*Q(24) .wap to enter the three person height in feet and inch and check that whose person is tallest.*/

#include <stdio.h>

int main()
{
    int person_h1, person_h2, person_h3;
    int feet1, inch1;
    int feet2, inch2;
    int feet3, inch3;

    printf("Enter the first person height in (feet and inch): ");
    scanf("%d%d", &feet1, &inch1);
    printf("\nEnter the second person height in (feet and inch): ");
    scanf("%d%d", &feet2, &inch2);
    printf("\nEnter the third person height in (feet and inch): ");
    scanf("%d%d", &feet3, &inch3);

    // convert heights to inches for comparison
    person_h1 = feet1 * 12 + inch1;
    person_h2 = feet2 * 12 + inch2;
    person_h3 = feet3 * 12 + inch3;

    // Determine the tallest person
    if (person_h1 > person_h2 && person_h1 > person_h3)
        printf("First person is the tallest.\n");
    else if (person_h2 > person_h1 && person_h2 > person_h3)
        printf("Second person is the tallest.\n");
    else if (person_h3 > person_h1 && person_h3 > person_h2)
        printf("Third person is the tallest.\n");
    else
        printf("There is a tie in height.\n");

    return 0;
}

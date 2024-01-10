#include <stdio.h>

int main()
{
    float r, ar, c;

    printf("Enter the radius of the circle(in metres):\t");
    scanf("%f", &r);

    // calculate the area of circle
    ar = 3.14 * r * r;

    // calculate the circumference
    c = 2 * 3.14 * r;

    printf("The area  of the circle is:\t%.2f\n The circumference of the circle is:\t%.2f\n", ar, c);

    return 0;
}

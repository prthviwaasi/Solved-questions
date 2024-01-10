#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;

    printf("Enter the three sides of a triangle:\t");
    scanf("%lf %lf %lf", &a, &b, &c);

    // calculating the semi-perimeter
    s = (a + b + c) / 2;

    //calculate area by heron's formula
    area = sqrt(s* (s-a)* (s-b)* (s-c));

    printf("The area of the triangle is:\t%.2lf\n", area);

return 0;

}

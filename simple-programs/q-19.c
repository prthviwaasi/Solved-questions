#include <stdio.h>

int main()
{
    float x1, x2, y1, y2, m;

    //input coordinates of two points
    printf("Enter the x coordinate(x1,x2):\t");
    scanf("%f %f", &x1, &x2);
    printf("Enter the y coordinate(y1,y2):\t");
    scanf("%f %f", &y1, &y2);
    //formula for finding slope of a staright line
    m = (y2 - y1) / (x2 - x1);
    printf("The slope of a the straight line is = %.2f\n", m);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Enter the number:\t");
    scanf("%f", &num);

    //calculate the square root
    float sqr = sqrt(num);
    //calculate the cube of the square root
    float cube = pow(sqr,3);

    printf("The cube of the square root of %.2f is %.2f\n", num, cube);

return 0;

}

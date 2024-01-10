#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    printf("Enter the number:\t");
    scanf("%lf", &a);

    printf("square root of %.lf is:\t %.2lf\n",a , sqrt(a)); 
    
    return 0;
}

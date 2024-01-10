#include <stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter the values of a,b,c in ax2+bx+c=0:\t");
    scanf("%d %d %d", &a, &b, &c);


    d = (b*b) - (4*a*c); //calculate the discriminant
    printf("The sum of two number is:\t%d\n",d);

return 0;

}
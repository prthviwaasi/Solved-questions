#include <stdio.h>

int main()
{
    int p, r, t;

    printf("Enter the principle, interest rate and time(in years) respectively:\t");
    scanf("%d %d %d", &p, &r, &t);
    printf("The simple interest is:\t%d\n",(p*r*t)/100);

return 0;

}

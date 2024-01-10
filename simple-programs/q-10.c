#include <stdio.h>

int main()
{
    int f;
    int c, cen;
    printf("Enter the temperature in fahrenheit:\t");
    scanf("%d", &f);

    c = (f-32)*5/9; //convert to celcius
    //cen = (5/9)*f-32;  //convert to cetrigrade
    printf("The temperature in celcius is:\t%d\n", c);
    //printf("The temperature in centrigrade is:\t%d\n", cen);

return 0;

}

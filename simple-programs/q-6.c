#include <stdio.h>

int main()
{
    int km, m, cm;
    float ft, inch;

    printf("Enter the  distance of two city(in km):\t");
    scanf("%d", &km);
    m = km*1000;  //converting kilometre to metres
    printf("\nThe distance in metres are:\t%d m\n", m);
    cm = km*100000;   //converting kilometre to centimetre
    printf("The distance in centimetres are:\t%d cm\n", cm);
    ft = km*3280.84;  //converting kilometre to feet
    printf("The distance in feets are:\t%.2f ft\n", ft);
    inch = km*39370.1;  //converting kilometre to inch
    printf("The distance in inches are:\t%.2f inch\n", inch);


return 0;
}

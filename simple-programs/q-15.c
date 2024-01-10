#include <stdio.h>

int main()
{
    float m, km, cm;

    printf("Enter the height of bamboo(in metre) :\t");
    scanf("%f", &m);
    km = m/1000;
    cm = m*100;
    printf("The height in kilometre is: %.2f km\n",km);
    printf("The height in centimetre is: %.2f cm\n",cm);

return 0;

}

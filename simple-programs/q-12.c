#include <stdio.h>

int main()
{
    int h, i, inch;
    float cm;
    printf("Enter the height of the person(in ft):\t");
    scanf("%d", &h);
    printf("Enter the height of the person(in inch):\t");
    scanf("%d", &i);
    

    //calculate the height in inch
    inch = h*12;
    printf("The height of the person in inches are:\t%d\n", inch+i);
    //calculate the height in centimetre
    cm = inch*2.54;
    printf("The height of the person in centimetre is:\t%.2f\n",cm);

return 0;

}

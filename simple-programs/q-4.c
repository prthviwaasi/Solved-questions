#include <stdio.h>

int main()
{
    int l, w, ar, p;

    printf("Enter the length of rectangle:\t");
    scanf("%d", &l);
    printf("Enter the width of rectangle:\t");
    scanf("%d", &w);

    ar = l * w;
    p = 2 * (l + w);

    printf("the area of rectangle is \t%d\n the perimeter of rectangle is \t%d\n", ar, p ); 
    
    return 0;
}

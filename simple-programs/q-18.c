#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, midx, midy;

    printf("Enter the x coordinate(x1,x2):\t");
    scanf("%d %d", &x1, &x2);
    printf("Enter the y coordinate(y1,y2):\t");
    scanf("%d %d", &y1, &y2);

    midx = (x1+x2)/2;
    midy = (y1+y2)/2;
    printf("The coordinate of mid point is = (%d,%d)\n", midx, midy);

return 0;

}

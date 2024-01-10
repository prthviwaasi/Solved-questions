#include <stdio.h>

int main()
{
    int x, y, z, p, s;

    printf("Enter the three numbers:\t");
    scanf("%d %d %d", &x, &y, &z);
    
    p = x*y*z;
    s = x+y+z;

    printf("The difference of there product (%d) and sum (%d) is = %d\n", p, s, p-s );

return 0;

}

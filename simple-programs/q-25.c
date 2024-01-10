#include <stdio.h>

int main()
{
    int a, n;

    printf("Enter the cost of one shirt:\t");
    scanf("%d", &a);

    printf("Number of shirts?:\t");
    scanf("%d", &n);


    printf("Price for %d pieces of shirts are %d\n", n, a*n);

return 0;

}


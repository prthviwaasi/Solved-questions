#include <stdio.h>

int main()
{
    int n, sum, rev;
    int a, b, c, d;

    printf("Enter a four digit number:\t");
    scanf("%d", &n);

    a = n%10;
    n = n/10; 
    b = n%10; 
    n = n/10; 
    c = n%10; 
    n = n/10; 
    d = n%10;
    n = n/10; 
    sum = a + b + c + d; 
    rev = a*1000+b*100+c*10+d;
    printf("\nSum: %d\n",sum);
    printf("Reverse: %d\n",rev);

return 0;

}

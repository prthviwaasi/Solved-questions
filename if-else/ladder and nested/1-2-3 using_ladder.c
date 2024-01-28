// wap to enter six number print the gratest number. using nested and ladder if.

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, n;

    // Getting the input of 6 numbers from the user
    printf("Enter six numbers?: ");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    // implementing the condition to get desired output
    if (a >= b && a >= c && a >= d && a >= e && a >= f)
        n = a;
    else if (b >= c && b >= d && b >= e && b >= f)
        n = b;
    else if (c >= d && c >= e && c >= f)
        n = c;
    else if (d >= e && d >= f)
        n = d;
    else if (e >= f)
        n = e;
    else
        n = f;
        printf("The greatest number is %d.\n", n);
    return 0;
}
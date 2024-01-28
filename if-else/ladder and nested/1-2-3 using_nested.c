// wap to enter six number print the gratest number. using nested and ladder if.

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    
    printf("\n\tEnter 1st Number : ");
    scanf("%d", &a);
    printf("\n\tEnter 2nd Number : ");
    scanf("%d", &b);
    printf("\n\tEnter 3rd Number : ");
    scanf("%d", &c);
    printf("\n\tEnter 4th Number : ");
    scanf("%d", &d);
    printf("\n\tEnter 5th Number : ");
    scanf("%d", &e);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    printf("\n\t1st Number Is Greatest");
                } else
                    printf("\n\t5th Number Is Greatest");
            } else {
                if (d > e)
                    printf("\n\t4th Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            }
        } else {
            if (c > d) {
                if (c > e)
                    printf("\n\t3rd Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            } else {
                if (d > e)
                    printf("\n\t4th Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    printf("\n\t2nd Number Is Greatest");
                } else
                    printf("\n\t5th Number Is Greatest");
            } else {
                if (d > e)
                    printf("\n\t4th Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            }
        } else {
            if (c > d) {
                if (c > e)
                    printf("\n\t3rd Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            } else {
                if (d > e)
                    printf("\n\t4th Number Is Greatest");
                else
                    printf("\n\t5th Number Is Greatest");
            }
        }
    }

    return 0;
}

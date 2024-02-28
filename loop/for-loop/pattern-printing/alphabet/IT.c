#include<stdio.h>

int main()
{
    int i, j, s=0;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(i==1 || i==5 || j==3)
                printf("* ");
            else
                printf("  ");
        }
        for(s=1; s<=3; s++) {
            printf("  ");
        }
        for(j=1; j<=5; j++) {
            if(j==3 || i==1)
                printf("* ");
            else
                printf("  ");
        }
        for(s=1; s<=3; s++) {
            printf("  ");
        }

        printf("\n");
    }
    return 0;
}
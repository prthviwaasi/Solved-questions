#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i<=13; i++){
        for (j = 1; j<=13; j++){
            if( i == j && i>8 || i+j ==14 && i<8 || j==7)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    int n, abs;
    printf("Enter any number:\t");
    scanf("%d", &n);    
    if(n<0){
        abs = -n;
    }
    else{
        abs = n;
    }
    printf("The absolute value of %d is %d.\n", n, abs);
    return 0;
} 
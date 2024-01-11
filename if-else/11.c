// .wap to enter a number if the number is grater than equal to 1000 then display 20% of the given no other wise 10% of the given no.
#include<stdio.h>

int main(){
    float n;
    printf("Enter any number:\t");
    scanf("%f", &n);
    if(n>=1000)
        printf("20%% of the given no. = %.2f\n", n/100*20);
    else 
        printf("10%% of the given no. = %.2f\n", n/100*10);

    return 0;
}
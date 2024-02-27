// Write a program to enter a number and print its reverse value.

#include <stdio.h>

int main()
{
    int n, rev = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    printf("The reverse value is %d", rev);

    return 0;
}

// another way of printing the reverse value

/*int main(){
    int n, rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        printf("%d",n%10);
        n=n/10;
    }
    printf(" is the reverse number.\n");
return 0;
}*/
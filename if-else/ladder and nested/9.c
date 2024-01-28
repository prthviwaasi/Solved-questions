/*wap to enter a number from user & find it square,cube ,or square root on user choice using if-else statement*/

#include <stdio.h>
#include <math.h>

int main(){
    int num, choice, ans;
    printf("Enter any number?:\t");
    scanf("%d",&num);
    printf("Choose the operation you want to perform?:\n");
    printf("Square(1):\n");
    printf("Cube(2):\n");
    printf("Square root(3):\n");
    printf("Your choice:\t");
    scanf("%d",&choice);

   if(choice==1){
    ans = num*num;
    printf("Result: %d.", ans);
   }else if (choice==2){
    ans = num*num*num;
    printf("Result: %d.",  ans);
   }else if (choice==3){
    ans = sqrt(num);
    printf("Result: %d.",  ans);
   }else
    printf("Invalid Choice!!\n");

return 0;   
}
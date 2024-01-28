/*wap to enter the two person height in feet and inch and display the sum of both person in feet and inch.*/ 

#include <stdio.h>

int main(){
    int inchSum, ftSum, ft, inch, ft2, inch2;
    printf("Enter the persons height in (feet and inch):\t");
    scanf("%d%d", &ft, &inch);
    printf("Enter the 2nd persons height in (feet and inch):\t");
    scanf("%d%d", &ft2, &inch2);

    ftSum = ft + ft2;
    inchSum = inch + inch2;
    if(inchSum > 12){
        ftSum++;
        inchSum-=12;
    }
    printf("The sum of both persons height is %d ft %d inch.\n", ftSum, inchSum);
    return 0;
}
// wap to enter three side of a triangle and check that the triangle formation is possible or not. 

#include <stdio.h>

int main()
{
    int s1, s2, s3;

    // Input the three angles
    printf("Enter the first side: ");
    scanf("%d", &s1);

    printf("Enter the second angle: ");
    scanf("%d", &s2);

    printf("Enter the third angle: ");
    scanf("%d", &s3);
    a + b > c && b + c > a && c + a > b
    // Check if the angles can form a valid triangle
    if (s1 + s2 + s3 == 180) {
        if (s1 > 0 && s2 > 0 && s3 > 0) {
            printf("The angles form a valid triangle.\n");
        } else {
            printf("Each angle must be greater than 0.\n");
        }
    } else {
        printf("The angles do not form a valid triangle.\n");
    }
        
    return 0;
}
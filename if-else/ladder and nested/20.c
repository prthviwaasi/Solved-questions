/*Q(25) .wap to enter any alphabetic character and check that the entered character is vowel or consonant.*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("Entered character is vowel");
        else
            printf("Entered character is consonant");
    }
    else
        printf("Entered character is invalid");
    return 0;
}
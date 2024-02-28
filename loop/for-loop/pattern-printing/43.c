#include <stdio.h> // Pattern43

int main()
{
    int i, j, k = 65;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i == 1 || j == 1 || i == 7 || j == 6)
            {
                printf("%c ", k);
                k++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

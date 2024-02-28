#include <stdio.h>
                //Pattern3
int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= 1; j--)
    {
     j<=i ? printf("* ") : printf("  ");
    }
    printf("\n");
  }
  return 0;
}
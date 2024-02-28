#include <stdio.h>
                //Pattern40
int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
     printf("%c ", j+64);
    }
    printf("\n");
  }
  return 0;
}

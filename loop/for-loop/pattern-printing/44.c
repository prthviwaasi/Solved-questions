#include <stdio.h>  // Pattern44

int main()
{
  int i, j, k = 65;

  for (i = 1; i <= 7; i++)
  {
    for (j = 1; j <= 6; j++)
    {
      if (k <= 90)
      {
        printf("%c ", k++);
      }
      else 
      {
        k = 65;
        printf("%c ", k++);
      }
    }
    printf("\n");
  }
  return 0;
}
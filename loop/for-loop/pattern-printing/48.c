#include <stdio.h>
                //Pattern48
int main()
{
  int i, j;
  
  for (i = 1; i <= 6; i++)
  {
    for (j = 1; j <= i; j++)
    {
     printf("%d ", i%2);
    }
    printf("\n");
  }
  return 0;
}
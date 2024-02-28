#include <stdio.h> //Pattern10

int another_way();
int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= 1; j--)
    {
     i>=j ? printf("%d ", j): printf("  ");
    }
    printf("\n");
  }
  // printf("\n");
  // another_way();
  return 0;
}

int another_way()
{
  int i, j, k;

  for (i = 1; i <= 5; i++)
  {
    for( k = 6; k<=i; k++)
    {
      printf(" ");
    }
    
    for (j = 5; j >= 1; j--)
    {
     if(i>=j) { printf("%d ", j);} 
     else{printf("  ");}
    }
    printf("\n");
  }
  return 0;
}
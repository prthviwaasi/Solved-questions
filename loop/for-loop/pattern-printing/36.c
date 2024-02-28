#include<stdio.h> //Pattern36
 
int main(){
  int row, col, space;
  int n=4;
  for(row=0; row< 2 * n; row++){
  int totalColsInRow = row > n ? 2 * n - row : row;
     for(col=0; col < totalColsInRow; col++){
      printf("* ");
     }
     printf("\n");
  }
  return 0;
}
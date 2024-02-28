#include<stdio.h> //pattern 4

int main(){
  int row, col, space;
  int n=5;
  for(row=1; row<=n; row++){
    for(col=1; col<=n; col++){
    col>=row ? printf("* "): printf("  "); 
    }
    printf("\n");
  }
  return 0;
}
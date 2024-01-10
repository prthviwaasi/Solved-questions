#include<stdio.h>

int main()
{
    int h, m, s;
    printf("Enter the hours:\t");
    scanf("%d", &h);
    //converting the hours into minute 
    m = h*60;
    //converting the hours into seconds
    s = h*3600;
    printf("%d hours = %d minutes, \n%d hours = %d seconds.\n", h, m, h, s);    
    
    return 0;
}
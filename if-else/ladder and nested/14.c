/*Q.(35)wap to enter the student name , rollno and five subject math,hindi,english,science and socalscience marks and calculate the average marks then print the grade according to the condition. 
  a)if average marks lessthen 100 but grater than equal to 90 then grade ,A,  
  b)if average marks lessthen 90  but grater than equal to 80 then grade ,B, 
  c)if average marks lessthen 80 but grater than equal to 70 then grade ,C, 
  d)if average marks lessthen 70 but grater than equal to 60 then grade ,D, 
  e)if average marks lessthen 60 but grater than equal to 50 then grade ,E,   
  f)otherwise fail*/

#include <stdio.h>
int main()
{
    int m1, m2, m3 ,m4 ,m5;
    int  rn;
    float avg;
    char nm[50];

    printf("Enter student name: ");
    scanf("%s", &nm);
    printf("Enter roll number: ");
    scanf("%d", &rn);

    // Input marks for five subjects
    printf("Enter marks of five subjects:\n");
    printf("Enter marks for Math: ");
    scanf("%d", &m1);
    printf("Enter marks for Hindi: ");
    scanf("%d", &m2);
    printf("Enter marks for English: ");
    scanf("%d", &m3);
    printf("Enter marks for Science: ");
    scanf("%d", &m4);
    printf("Enter marks for Social Science: ");
    scanf("%d", &m5);

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0; // Calculate average marks

    // Determine grade on average marks
    printf("\nAverage marks: %.2f\n",avg);
    if(avg >= 90 && avg <= 100)
      printf("Grade: A\n");
      else if(avg >= 80 && avg <= 90)
      printf("Grade: B\n");
      else if(avg >= 70 && avg <= 80)
      printf("Grade: C\n");
      else if(avg >= 60 && avg <= 70)
      printf("Grade: D\n");
      else if(avg >= 50 && avg <= 60)
      printf("Grade: E\n");
      else 
      printf("Fail\n");
return 0;
}
  

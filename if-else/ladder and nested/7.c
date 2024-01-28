/*wap to accept the speed of car. 
if speed of car is grater than equal to 100 then display dengrous drive.  if speed of car is less than 100 but grater then equal to 60 then display fast speed.   if speed of car is less than 60 but greater then equal to 40  then display normal speed.  if speed of car is less than 40 but grater zero then display slow speed.other wise display stop the car. 
*/

#include <stdio.h>

int main(){
    int s;

    printf("Enter the speed of car:\t");
    scanf("%d", &s);

    if(s>=100){
        printf("You're driving at very Dangerous Speed!!\n");
    } else if (s<100 && s>=60){
        printf("You're driving at a Fast Speed!!\n");
    } else if (s<60 && s>=40){
        printf("You're driving at a Normal pace.\n");
    } else if (s<40 && s>0){
        printf("You're driving Slowly.\n");
    } else{
        printf("The car has stopped.\n");
    }

    return 0;
}
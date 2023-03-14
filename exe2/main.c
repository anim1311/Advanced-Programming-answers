#include<stdio.h>



void task5(void){

    int mm = -1,dd = -1,yyyy = -1;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("\nYou entered the date %0.4d%0.2d%0.2d\n",yyyy,mm,dd);
}


void task6(void){

    int totalMinutes=-1;
    int hours = -1, minutes = -1;

    printf("Enter the total number of minutes: ");
    scanf("%d",&totalMinutes);

    hours = totalMinutes/60;
    minutes = totalMinutes%60;

    printf("%0.2d minutes = %0.2d hours %0.2d minutes\n",totalMinutes,hours,minutes );
}


void task7(void){

    int totalMinutes=-1;
    int hours = -1, minutes = -1;
    
    printf("Enter the hours and minuts (hh mm): ");
    scanf("%d %d", &hours, &minutes);

    totalMinutes = hours*60 + minutes;

    printf("%0.2d hour %0.2d minutes = %0.2d minutes", hours, minutes, totalMinutes);

}
int main(void){

task7();
    
   


}
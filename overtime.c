// WRITE A PROGRAM TO CALCULATE OVERITME PAY OF 10 EMPLOYEES OVERTIME IS PAID AT THE RATE OF RS 12.00 PER HOUR FOR EVERY HOUR WORKED ABOVE 40 HOURS. ASSUSE
// ASSUME THAT EMPLOYEES DO NOT WORK FOR FRATIONAL PART OF AN HOUR.

#include <stdio.h>
int main(){
    int hour,rem,overtime;
    for(int i=0; i<10; i++){
        printf("Working hour of employee %d:",i+1);
        scanf("%d",&hour);
        if(hour>40){
            rem=hour-40;
            overtime=rem*12;
            printf("Overtime paid is %d\n",overtime);
        }
        else{
            printf("No overtime");
        }
    }
    return 0;
}
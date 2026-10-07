// WAP TO TAKE DAY, MONTH, AND YEAR AND CHECK WHETHER THE GIVEN DATE IS VALID OR INVALID.

#include <stdio.h>
int main(){
    int day,month,year;
    printf("Enter day:");
    scanf("%d",&day);
    printf("Enter month:");
    scanf("%d",&month);
    printf("Enter year:");
    scanf("%d",&year);
    if(day<=30 && month<=12 && (year%400==0 || year%4==0)){
        printf("Valid Date");
    }
    else {
        printf("Invalid Date");
    }
    return 0;
}
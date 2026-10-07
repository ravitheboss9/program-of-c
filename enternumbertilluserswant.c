// WAP TO ENTER THE NUMBERS TILL THE USER WANTS ADN AT THE END IT SHOULD DISPLAY THE COUNT OF POSITIVE, NEGATIVE, AND ZEROS ENTERED.

#include <stdio.h>
int main(){
    int num,count1=0,positive=0,negative=0,zeros=0;
    char ch;
    do{
        printf("Enter your numer:");
        scanf("%d",&num);
        if (num>0){
            positive++;
        }
        else if(num<0){
            negative++;
        }
        else{
            zeros++;
        }
        printf("Do you want to enter again??");
        scanf(" %c",&ch);
    } while(ch=='y' || ch=='Y');
    printf("Positive number=%d\n",positive);
    printf("Negative number=%d\n",negative);
    printf("Zero number= %d",zeros);
    return 0;
}
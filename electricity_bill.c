// WAP TO CHECK ELECTRICITY BILL USING C PROGRAM.
#include <stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter number of units consumed:");
    scanf("%d",&unit);
    if(unit<=100){
        bill=unit*1.5;
    }
    else if(unit<=200){
        bill=100*1.5+(unit-100)*2.5;
    }
    else if(unit<=300){
        bill=100*1.5+100*2.5+(unit-200)*3.5;
    }
    else{
        bill=100*1.5+100*2.5+100*3.5+(unit-300)*4.5;
    }
    printf("Electricity bill is:%.2f",bill);
    return 0;
}
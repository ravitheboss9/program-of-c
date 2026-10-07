#include <stdio.h>
int main(){
    int amount,balance,remaining;
    printf("Enter your balance:");
    scanf("%d",&balance);
    printf("Enter amount:");
    scanf("%d",&amount);
    if(amount%100==0 && amount<=balance){
        printf("valid withdrawal\n");
        remaining=balance-amount;
        printf("Your remaining balance is %d",remaining);
    }
    else{
        printf("Invalid withdrawal");
    }
    return 0;
}
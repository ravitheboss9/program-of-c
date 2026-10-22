// FIND THE GCD OF TWO NUMBERS USING LOOPS.

#include <stdio.h>
int main(){
    int i,num1,num2,gcd=1;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    for(i=1; i<=num1; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}
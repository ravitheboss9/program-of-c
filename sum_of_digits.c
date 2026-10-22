// find the sum of digits of a number.

#include <stdio.h>
int main(){
    int sum=0,num,i,rem;
    printf("Enter the value of num:");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digits of a no=%d",sum);
    return 0;
}
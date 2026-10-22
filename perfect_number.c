// CHECK WHETHER A NUMBER IS PERFECT NUMBER OR NOT

#include <stdio.h>
int main(){
    int num,sum=0,i;
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(i=1; i<num; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("The given number is a perfect number");
    }
    else{
        printf("The given number is not a perfect number");
    }
    return 0;
}
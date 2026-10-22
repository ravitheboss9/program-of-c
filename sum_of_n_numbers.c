// Find the sum of 1+1/2+1/3+.......+1/n

#include <stdio.h>
int main(){
    float i,n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for(i=1; i<=n; i++){
        sum=sum+(1/i);
    }
    printf("sum=%.2f",sum);
    return 0;
}
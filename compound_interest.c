// When intersts compounds 1 time per year ta an annua rate of r 5 for n years, teh principle p compounds to an amount a as per the following forla
// a=p(1+r/q)^nq

#include <stdio.h>
#include <math.h>
int main(){
    double p,r,a,n;
    int q;
    for(int i=1; i<=10; i++){
        printf("Enter the value of principal:");
        scanf("%lf",&p);
        printf("\nEnter the value of rate:");
        scanf("%lf",&r);
        printf("\nEnter the value of years:");
        scanf("%lf",&n);
        printf("\nEnter the value of compound interest:");
        scanf("%d",q);
        
        a=p*pow((1+r/q),(n*q));
        printf("Amount=%.2lf\n",a);
    }
    return 0;
}
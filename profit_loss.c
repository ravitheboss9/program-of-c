// WAP TO CHECK PROFIT OR LOSS USING C PROGRAM.
#include <stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("Enter selling price:");
    scanf("%f",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("Profit is:%.2f",profit);
    }
    else if(cp>sp){
        loss=cp-sp;
        printf("Loss is:%.2f",loss);
    }
    else{
        printf("No profit no loss");
    }
    return 0;
}
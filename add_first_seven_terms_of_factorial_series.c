// WAP to add first seven term of the following series using a for loop:1/1!+2/2!+3/3!+....

#include <stdio.h>
int main(){
    int n,i,j;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        float fact=1;
        for(j=1; j<=i; j++){
            fact=fact*j;
        }
        sum=sum+(i/fact);
    }
    printf("Sum is %.6f",sum);
    return 0;
}
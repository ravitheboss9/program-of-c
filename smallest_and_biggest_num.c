// WAP to find the range of a set of numbers. Range is the difference between the smallest and biggest number in the list.

#include <stdio.h>
int main(){
    int num,largest,smallest,range,n;
    printf("Enter the value of number of datas in set:");
    scanf("%d",&n);
    printf("Enter the first number:");
    scanf("%d",&num);
    largest=num;
    smallest=num;
    for(int i=1; i<=n-1; i++){
        printf("Enter the value of num:");
        scanf("%d",&num);
        if(num>largest){
            largest=num;
        }
        else if(num<smallest){
            smallest=num;
        }
    } 
        printf("Largest number: %d\n",largest);
        printf("Smallest number:%d\n",smallest);
        range=largest-smallest;
        printf("Difference betweeen smallest and largest number is %d",range);
        return 0;
}

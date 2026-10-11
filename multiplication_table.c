// Write a program to print the mutipication table of the number entered by the user. the table should get displayed in the following form.
// 29*1=29, 29*2=58,...

#include <stdio.h>
int main(){
    int i,num,mult;
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(i=1; i<=10; i++){
        mult=num*i;
        printf("%d*%d=%d\n",num,i,mult);
    }
    return 0;
}
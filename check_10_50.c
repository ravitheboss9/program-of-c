// WAP TO CHECK NUMBER BETWEEN 10 TO 50 USING C PROGRAM.
#include <stdio.h>
int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>=10 && num<=50){
        printf("Number is between 10 to 50");
    }
    else{
        printf("Number is not between 10 to 50");
    }
    return 0;
}
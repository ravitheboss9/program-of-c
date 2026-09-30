// WAP TO FIND THE ABSOLUTE VALUE OF A NUMBER ENTERED THROUGHT THE KEYBOARD.

#include <stdio.h>
int main(){
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num>-num){
        printf("It is absolute value");
    }
    else {
        printf("It is not absolute value");
    }
    return 0;
}
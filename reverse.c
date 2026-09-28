// WAP TO ENTER FIVE DIGIT NUMBER THROUGH THE KEYBOARD.
// OBTAIN THE REVERSE NUMBER AND TO DETEMINE WHETEHER THE ORIGINAL AND REVERSED NUMBERS ARE EQUAL OR NOT.
#include <stdio.h>
int main(){
    int num,rev,a,b,c,d,e;
    printf("Enter five digit number:");
    scanf("%d",&num);
    a=num/10000;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    rev=e*10000+d*1000+c*100+b*10+a;
    if(rev==num){
        printf("It is equal !");
    }
    else{
        printf("It is not equal !");
    }
    return 0;
}
// WRITE A PROGRAM TO PRINT ALL PRIME NUMBERS FROM 1 TO 300

#include <stdio.h>
int main(){
    for(int num=1; num<=300; num++){
        int i=2;
    while(i<=num-1){
        if(num%i==0){
            int prime=0;
            break;
        }
        i++;
    }
    if(i==num){
        printf("%d\n",num);
        }
}
    return 0;
}
// WAP TO PRINT ALL PALINDROE NUMBERS FROM 1 TO 1000

#include <stdio.h>
int main(){
    int i,temp,rem;
    for(i=1; i<=1000; i++){
        int rev=0;
        temp=i;
        while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(i==rev){
            printf("%d\n",i);
        }
    }
    return 0;
}
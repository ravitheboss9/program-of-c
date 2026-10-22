// WAP TO SWAP FIRST AND LAST DIGIT OF A GIVEN NUMBER.

#include <stdio.h>
int main(){
    int first,last,num,temp,middle,original_num,place=1;
    printf("Enter number");
    scanf("%d",&num);
    temp=num;
    last=num%10;
    while(temp>=10){
        temp=temp/10;
        place=place*10;
    }
    first=temp;
    middle=(num%place)/10;
    last=last+first;
    first=last-first;
    last=last-first;
    original_num=first*place+middle*10+last;
    printf("Number after swapping first and last digits: %d\n",original_num);
    return 0;
}
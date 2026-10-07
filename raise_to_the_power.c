// TWO NUMBERS ARE ENTERED THROUGH THE KEYBOARD. WRITE PROGRAM TO FIND THE VALUE OF ONE NUMBER RAISED TO THE POWRE FO ANOTHER.
#include <stdio.h>
int main(){
    int x,y,i,power=1;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++){
        power=power*x;
    }
    printf("The value of one number raised to the power of anohter=%d",power);
    return 0;
}
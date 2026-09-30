// GIVEN A POINT(X,Y) WRITE A PROGRAM TO FIND OUT IT IT LIES ON THE X-AXIS,Y-AXIS OR AT THE ORIGIN,VIZ(0,0)

#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    if(x==0){
        printf("It lies on Y-axis");
    }
    else if (y==0){
        printf("It lies on X-axis");
    }
    else {
        printf("It lies at the origin");
    }
    return 0;
}
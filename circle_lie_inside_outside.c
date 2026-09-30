// GIVEN THE CO ORINATES (X,Y) OF A CENER OF A CIRCLE AND ITS RADIUS, WRITE A PROGRAM WHICH WILL DETERMINE WHETHER A POINT LIES INSIDE THE CIRCLE, ON THE CIRCLE OR OUTSIDE OR INSIDE THE CIRCLE

#include <stdio.h>
#include <math.h>
int main(){
    int x,y,h,k,r;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("Enter the co-ordinates of center:");
    scanf("%d%d",&h,&k);
    printf("Enter radius:");
    scanf("%d",&r);
    if (pow(x-h,2)+pow(y-k,2)< pow(r,2)){
        printf("It lies inside the circle");
    }
    else{
        printf("It lies outside the circle");
    }
    return 0;
}
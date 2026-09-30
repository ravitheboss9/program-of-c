// WAP TO CHECK IF ALL THE THREE POINTS FALL ON THE STRAIGHT LINE. GIVEN THREE POINTS (X1,Y1) , (X2,Y2) AND (X3,Y3)

#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the value of x1,x2,x3:");
    scanf("%d%d%d",&x1,&x2,&x3);
    printf("Enter the value of y1,y2,y3:");
    scanf("%d%d%d",&y1,&y2,&y3);
    if((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)){
        printf("It falls on same line");
    }
    else {
        printf("It doesnt fall on same line");
    }
    return 0;
}
// ACCORDING TO STYDY, THE APPROXIMATE LEVEL OF INTELLIGENCE A PERSON CAN BE CALCULATED USING THE FOLLOWING FORMULLA:
// I=2+(Y+0.5X)
// WRITE A PROGRAM, WHICH WILL PRODUCE A TABLE OF VALUES OF I, Y AND X WHERE Y VARIES FROM 1 TO 6, AND, FOR EACH VALUE OF Y,X VARIES FROM 5.5 TO 12.5 IN STEPS OF 0.5

#include <stdio.h>
int main(){
    float i,x;
    int y;
    for(y=1; y<=6; y++){
        for (x=5.5; x<=12.5; x=x+0.5){
            i=2+(y+0.5*x);
            printf("%.2f\t %d\t %.2f\n",i,y,x);
        }
        printf("\n");
    }
    return 0;
}
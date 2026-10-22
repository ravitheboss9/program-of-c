// WRITE A PROGRAM TO PRODUCE THE FOLLOWING OUTPUT.
//    1
//   2  3
//  4 5  6
// 7 8 9 10

#include <stdio.h>
int main(){
    int i,j,num=1;
    for(i=1; i<=4; i++){
        for(j=1; i<=4-i; j++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            if(i==1 || j==1 || j==2*i-1|| j==3|| j==5){
                printf("%d",num);
                num++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
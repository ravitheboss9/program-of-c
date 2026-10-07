// WAP TO CHECK WHETHER THE CHESSBOARD COLOR IS BLACK OR WHITE

#include <stdio.h>
int main(){
    int row,column;
    printf("Enter row and column:");
    scanf("%d%d",&row,&column);
    if((row+column)%2==0){
        printf("It is black color");
    }
    else {
        printf("It is white color");
    }
    return 0;
}

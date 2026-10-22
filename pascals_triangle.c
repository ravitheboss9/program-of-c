// PRINT PASCALS TRIANGLE

#include <stdio.h>
int main(){
    int i,j,rows,num,space;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=0; i<rows; i++){
        for(space=0; space<rows-i; space++){
            printf(" ");
        }
        num=1;
        for(j=0; j<=i; j++){
            printf("%d ",num);
            num=num*(i-j)/(1+j);
        }
        printf("\n");
    }
    return 0;
}
// PRINT THIS PATTERN
// 1
// 23
// 456
// 78910

#include <stdio.h>
int main(){
    int i,j,rows,sum=0;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}
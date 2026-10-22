// PRINT SQUARES OF NUMBER FORM 1 TO 10

#include <stdio.h>
#include <math.h>
int main(){
    int i;
    for(i=1; i<=10; i++){
        int square=pow(i,2);
        printf("%d\n",square);
    }
    return 0;
}
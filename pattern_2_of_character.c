// WAP TO PRODUCE THE FOLLOWING OUTPUT:
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A

#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=7; i++){
        for(j=1; j<=7-i; j++){
            printf(" %c",'A'+j-1);
        }
        for(j=1; j<=i-1; j++){
                printf("    ");
        }   
        for(j=8-i; j>=1; j--){
            printf(" %c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}

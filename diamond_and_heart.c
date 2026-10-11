// WAP TO FILL THE ENTIRE SCREEN WITH DIAMOND AND HEART ALTERNATIVELY. THE ASCII VALUE FOR HEART IS 3 AND THAT OF DIAMOND IS 4.

#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=25; i++){
        for(j=1; j<=80; j++){
            if((i+j)%2==0){
                 printf(" %c",3);
            }
            else{
                printf(" %c",4);
            }
        }
        printf("\n");
    }
    return 0;
}
// WAP TO PRINT ALL THE ASCII VALUES AND EQUUIVALENT CHARACTERS USING A WHILE LOOP. THE ASCII VALUES VARY FORM 0 TO 255.

#include <stdio.h>
int main(){
    int x;
    for(x=0; x<255;x++){
        printf("\nASCII values %d equivalent character %c",x,x);
    }
    return 0;
}
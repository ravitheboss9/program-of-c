// WAP TO CREATE TRAFFIC SIGNAL USING C PROGRAM
#include <stdio.h>
int main(){
    char signal;
    printf("Enter signal:");
    scanf(" %c",&signal);
    switch (signal){
        case 'R':
        case 'r':
        printf("Stop");
        break;
        case 'Y':
        case 'y':
        printf("wait");
        case 'g':
        case 'G':
        printf("go");
    }
    return 0;
}
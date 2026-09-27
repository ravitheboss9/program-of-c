// WAP TO PRINT NUMBER TO WORD FROM 1 TO 5 USING C PROGRAM
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number (1-5): ");
    scanf("%d", &number);
    
    switch(number) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 5.");
    }
    
    return 0;
}
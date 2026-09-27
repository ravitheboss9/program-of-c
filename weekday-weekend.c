// WAP TO CHECK WEEDAY OR WEEKEND USING C PROGRAM.
#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) to check if it's a weekday or weekend: ");
    scanf("%d", &day);
    
    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("It's a weekday.");
            break;
        case 6:
        case 7:
            printf("It's a weekend.");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.");
    }
    
    return 0;
}
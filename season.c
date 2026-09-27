// WAP TO FIND SEASON USING MONTH
#include <stdio.h>
int main() {
    int month;
    printf("Enter a number (1-12) to get the corresponding season: ");
    scanf("%d", &month);
    
    switch(month) {
        case 12:
        case 1:
        case 2:
            printf("Winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.");
    }
    
    return 0;
}
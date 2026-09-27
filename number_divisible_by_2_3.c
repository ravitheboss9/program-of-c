// WAP TO CHECK WHETHTER A NUMBER IS DIVISIBLE BY 2 AND 3 USING SWITCH CASE IN C PROGRAM.
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 6) {
        case 0:
            printf("The number is divisible by both 2 and 3.\n");
            break;
        default:
            printf("The number is not divisible by both 2 and 3.\n");
    }

    return 0;
}
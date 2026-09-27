// WAP TO CHECK WHETHER A NUMBER IS MULTIPLE OF 10 USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 10 == 0) {
        printf("The number is a multiple of 10.\n");
    } else {
        printf("The number is not a multiple of 10.\n");
    }

    return 0;
}
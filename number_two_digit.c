// WAP TO CHECH WHEHTER A NUMBER IS TWO DIGIT USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 99) {
        printf("The number is a two-digit number.\n");
    } else {
        printf("The number is not a two-digit number.\n");
    }

    return 0;
}
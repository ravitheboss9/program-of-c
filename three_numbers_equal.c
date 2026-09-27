// WAP TO CHECK THREE NUMBERS ARE EQUAL OR NOT USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}
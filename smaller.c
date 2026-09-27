// WAP TO FIND SMALLER NUMBER BETWEEN TWO NUMBERS USING C PROGRAM.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2) {
        printf("%d is the smaller number.\n", num1);
    } else if (num2 < num1) {
        printf("%d is the smaller number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    
    return 0;
}

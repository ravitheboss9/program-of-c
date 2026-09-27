// WAP TO CALCULATE SALARY BONUS USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    float salary, bonus_percentage, bonus_amount;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    if (salary < 0) {
        printf("Invalid salary! Please enter a positive value.\n");
    } else if (salary <= 50000) {
        bonus_percentage = 5;
    } else if (salary <= 100000) {
        bonus_percentage = 10;
    } else {
        bonus_percentage = 15;
    }

    bonus_amount = salary * (bonus_percentage / 100);
    printf("The bonus amount is: %.2f\n", bonus_amount);

    return 0;
}
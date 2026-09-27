// WAP TO CALCULATE NET SALARY AFTER TAX USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    float salary, tax_percentage, net_salary;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    if (salary < 0) {
        printf("Invalid salary! Please enter a positive value.\n");
    } else if (salary <= 50000) {
        tax_percentage = 5;
    } else if (salary <= 100000) {
        tax_percentage = 10;
    } else {
        tax_percentage = 15;
    }

    net_salary = salary - (salary * (tax_percentage / 100));
    printf("The net salary after tax is: %.2f\n", net_salary);

    return 0;
}
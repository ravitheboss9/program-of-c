// WAP TO CHECK STUDENT ELIGIBILITY FOR EXAMINATION USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    if (age >= 18 && (gender == 'M' || gender == 'F')) {
        printf("You are eligible for the examination.\n");
    } else {
        printf("You are not eligible for the examination.\n");
    }

    return 0;
}
// WAP TO FIND AREA MENU USING SWITCH CASE IN C PROGRAM.
#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, base, height;
    float area;

    printf("Area Menu:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
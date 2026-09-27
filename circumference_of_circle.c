// WAP TO FIND CIRCUMFERENCE OF CIRCLE USING C PROGRAM.
#include <stdio.h>
int main() {
    float radius, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    circumference = 2 * 3.14159 * radius;
    
    printf("Circumference of Circle = %.2f\n", circumference);
    return 0;
}
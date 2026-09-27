// WAP TO FIND AREA OF CIRCLE USING C PROGRAM.
#include <stdio.h>
int main() {
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    area = 3.14159 * radius * radius;
    
    printf("Area of Circle = %.2f\n", area);
    return 0;
}
// GIVEN THE LENGTH AND BREADTH OF A RECTANGEL, WRITE A PRORGAM TO FIND WHETHER THE AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER.

#include <stdio.h>
int main(){
    float l,b,area,per;
    printf("Enter length and breadth:");
    scanf("%f%f",&l,&b);
    area=l*b;
    per=2*(l+b);
    printf("Area of rectangle is %f\n",area);
    printf("Perimeter of rectangle is %f\n",per);
    if (area>per){
        printf("Area is greater than its perimeter");
    }
    else{
        printf("Perimeter is greater than area");
    }
    return 0;
}
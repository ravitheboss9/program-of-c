// WAP TO CALCULATE DISCOUNT USING IF ELSE STATEMENT IN C PROGRAM.
#include <stdio.h>
int main() {
    float original_price, discount_percentage, discounted_price;

    printf("Enter the original price: ");
    scanf("%f", &original_price);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);

    if (discount_percentage < 0 || discount_percentage > 100) {
        printf("Invalid discount percentage! Please enter a value between 0 and 100.\n");
    } else {
        discounted_price = original_price - (original_price * (discount_percentage / 100));
        printf("The discounted price is: %.2f\n", discounted_price);
    }

    return 0;
}
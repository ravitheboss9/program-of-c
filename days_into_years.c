// WAP TO CONVERT DAYS INTO YEARS, AND DAYS USING C PROGRAM.
#include <stdio.h>
int main() {
    int days, years, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    remaining_days = days % 365;
    
    printf("Years: %d\n", years);
    printf("Remaining Days: %d\n", remaining_days);
    return 0;
}
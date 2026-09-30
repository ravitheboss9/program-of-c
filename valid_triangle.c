// WAP TO CHECK WHETHER A TRIANGLE IS VALID OR NOT, WHEN THE THREE ANGLES OF THE TRIANGLE ARE ENTERED THROUGH
// THE KEYBOARD. a TRIANLGE IS VALI IF TH SUM OF ALL THREE TRIANLGES IS EQUAL TO 180 DEGREES.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three angles of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b+c==180){
        printf("Trianlge is valid");
    }
    else {
        printf("Trianlge is not valid");
    }
    return 0;
}
// WAP TO CREATE A SIMPLE CALCULATOR
#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter a and b and operator:");
    scanf("%d%d%c",&a,&b,&op);
    switch(op){
        case'+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/': 
        printf("%d",a/b);
        break;
    }
    return 0;
}
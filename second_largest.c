// WAP TO PRINT SECOND LARGEST NUMBER

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b && a<c)|| (a<b && a>c)){
        printf("Second largest number is %d",a);
    }
    else if((b>a && b<c)||(b<a && b>c)){
        printf("Second largest number is %d",b);
    }
    else {
        printf("Second largest number is %d",c);
    }
    return 0;
}
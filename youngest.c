// If the ages of Ram, Shyam, and Ajay are input through the keyboard write a program to determine the youngest age of the three.
#include <stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter age of Ram:");
    scanf("%d",&ram);
    printf("Enter age of Shyam:");
    scanf("%d",&shyam);
    printf("enter age of Ajay:");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest");
    }
    else if(shyam<ram && shyam<ajay){
        printf("Shyam is youngest");
    }
    else {
        printf("ajay is youngest");
    }
    return 0;
}
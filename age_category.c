// WAP TO CHECK AGE CATEGORY USING C PROGRAM.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<18){
        printf("You are a minor.");
    }
    else if(age>=18 && age<60){
        printf("You are an adult.");
    }
    else{
        printf("You are a senior citizen.");
    }
    return 0;
}
// WAP TO CHECK WHETHER A STUDENT IS PASS OR FAIL USING C PROGRAM.K
#include <stdio.h>
int main() {
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);
    
    if (marks >= 40) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }
    
    return 0;
}
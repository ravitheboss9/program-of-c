// WAP TO PRINT VOWEL USING SWITCH CASE IN C PROGRAM.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    switch(ch) {
        case 'a':
        case 'A':
            printf("The character is a vowel.");
            break;
        case 'e':
        case 'E':
            printf("The character is a vowel.");
            break;
        case 'i':
        case 'I':
            printf("The character is a vowel.");
            break;
        case 'o':
        case 'O':
            printf("The character is a vowel.");
            break;
        case 'u':
        case 'U':
            printf("The character is a vowel.");
            break;
        default:
            printf("The character is not a vowel.");
    }
    
    return 0;
}
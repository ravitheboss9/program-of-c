//  WAP TO CHECK UPPERCASE OR LOWERCASE USING C PROGRAM
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("lower");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
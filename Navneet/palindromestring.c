#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    char str[100], cstr[100];
    int i,j=0;
    int l;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i]!='\0'; i=i+1)
    {
        if(str[i] != ' ')
        {
            cstr[j++] = tolower(str[i]);
        }
    }
    cstr[j]= '\0';
    l = strlen(cstr);

    int p = 1;

    for(i = 0; i < l/2; i=i+1)
    {
        if(cstr[i] != cstr[l-i-1])
        {
            p = 0;
            break;
        }
    }
    
    if(p = 0)
    {
        printf("%s is not a plaindrome string", str);
    }
    else
    {
        printf("%s is a palindrome string", str);
    }
}

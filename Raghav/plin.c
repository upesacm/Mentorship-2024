#include <stdio.h>
#include <string.h>
int main() 
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    int i,t=0;
    for (i = 0; i < len / 2; i++) 
        if (tolower(str[i]) != tolower(str[len - i - 1])) 
            t=1;
    if (t==0) 
        printf("%s is a palindrome.\n", str);
    else 
        printf("%s is not a palindrome.\n", str);
}

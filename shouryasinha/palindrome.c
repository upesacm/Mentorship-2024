#include <stdio.h>
#include <string.h>

int Palindrome(char *str) 
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        if (tolower(str[i]) != tolower(str[len - i - 1])) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main() 
{
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);

    if (Palindrome(str)) 
    {
        printf("%s is a palindrome.\n", str);
    } 
    else 
    {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int l = strlen(s);
    if (s[l - 1] == '\n')
    {
        s[l - 1] = '\0';
        l--;
    }
    int check = 0;
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            check = 1;
            printf("The given string %s is not a palindrome.\n", s);
            break;
        }
    }
    if (check == 0)
    {
        printf("The given string %s is a palindrome.\n", s);
    }
    return 0;
}
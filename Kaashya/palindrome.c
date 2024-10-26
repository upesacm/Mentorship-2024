#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main() 
{
    char str[10] = "Kaashya";
    int i, len, f = false;
    len = strlen(str);
    for (i = 0; i < len; i++) 
    {
        if (str[i] != str[len - i-1]) {
            f = true;
            break;
        }
    }
    if (f)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
    return 0;
}

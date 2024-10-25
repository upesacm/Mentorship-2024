#include <stdio.h>
#include <string.h>
void REVERSE(char *string) 
{
    char *start = string;
    char *end = string + strlen(string) - 1;
    char temp;
    while (start < end) 
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() 
{
    char string[100], original_string[100];
;
    printf("Enter the string: ");
    scanf("%s", string);
    strcpy(original_string, string);
    REVERSE(string);
    printf("Reversed string: %s\n", string);
    if (strcmp(original_string,string)==0)
        printf("%s is a palindrome.",original_string);
    else
        printf("%s is not a palindrome.",original_string);
    return 0;
}

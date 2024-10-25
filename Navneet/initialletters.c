#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Initial letters: ");

    if (isalpha(str[0])) 
    {
        printf("%c.", str[0]);
    }

    for (i = 1; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' && isalpha(str[i+1])) 
        {
            printf("%c", str[i+1]);
        }
    }


    return 0;
}
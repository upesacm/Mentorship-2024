#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter the string:");
    scanf("%[^\n]%*c", string);
    if (string[0] != ' ')
        printf("%c", string[0]);
    for (int i = 1; i < strlen(string); i++) 
    {
        if (string[i - 1] == ' ' && string[i] != ' ')
            printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}
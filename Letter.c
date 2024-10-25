#include <stdio.h>

int main() 
{
    char str[100];
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i]!='\0'; i++)
    {
        if ( (str[i]) && (i == 0 || (str[i - 1])))
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
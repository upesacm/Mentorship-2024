#include <stdio.h>
#include <string.h>
void main() 
{
    char str[100];
    printf("Enter a string: ");
    gets (str);
    printf("Initials: ");
    for(int i=0;i<strlen(str);i++) 
    {
        if(i==0||str[i-1]==' ') 
        {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}

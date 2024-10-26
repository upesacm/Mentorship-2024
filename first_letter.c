#include<stdio.h>
int main()
{
    char word[100];
    printf("Enter a sentence: ");
    while(scanf("%s",word) == 1)
    {
        printf("%c\n",word[0]);
    }
    return 0;
}
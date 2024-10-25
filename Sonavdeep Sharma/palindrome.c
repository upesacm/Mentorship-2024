#include <stdio.h>
#include<string.h>

int main()
{
    char string1[20];
    int i, length;
    int temp = 0;
    printf("Enter a string: ");
    scanf("%s", string1);
    length = strlen(string1);

    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1])
 {
            temp = 1;
            break;
        }
    }

    if (temp)
{
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}


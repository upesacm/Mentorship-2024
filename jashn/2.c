#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a sentence: ");
    scanf(" %s", str);  // Reads the whole line including spaces until newline

    // Print the first letter if it’s not a space
    if (str[0] != ' ') {
        printf("%c ", str[0]);
    }

    // Iterate through the string to find the first letter of each word
    while (str[i] != '\0') {
        // Check if the current character is the start of a new word
        if (str[i] != ' ' && str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
        i++;
    }

    printf("\n");  // Newline after output
    return 0;
}

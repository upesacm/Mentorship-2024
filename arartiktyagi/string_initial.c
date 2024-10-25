#include <stdio.h>
#include <string.h>

int printFirstLetters(const char *str) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        // Checking if the first place is letter or space
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            printf("%c ", str[i]);  // Printing first letter
        }
    }
}
int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("First letters of each word: ");
    printFirstLetters(str);
    return 0;
}

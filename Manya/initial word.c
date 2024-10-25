#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a sentence:\n");


    while (1) {
        scanf("%s", str); 
        if (str[0] == '\0') break; 
        printf("%c ", str[0]); 
    }
    
    printf("\n");
    return 0;
}

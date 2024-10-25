#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a sentence:\t");
    fgets(str, sizeof(str), stdin); 

    
    if (str[0] != ' ' && str[0] != '\n' && str[0] != '\0') {
        printf("Initials are: %c", str[0]); 
    }

    
    for (int i = 1; str[i] != '\0'; i++) {
        
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0') {
            char ch = str[i + 1]; 
            printf(" %c", ch); 
        }
    }

    printf("\n"); 
    return 0; 
}
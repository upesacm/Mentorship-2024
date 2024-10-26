#include <stdio.h>
#include<string.h>
int main() {
    char str[]="hello this is Kaashya Gupta's C code ";
    int i=0;
    for (int i=0; i<strlen(str); i++) {
        if (i==0 && str[i]!=' ') {
            printf("%c\t",str[i]);
        }
        else if(i>0 && str[i-1]==' ') {
            printf("%c\t",str[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    gets(str);
    printf("%c\n",str[0]);
    for (int i = 0; i < 101; i++)
    {
        if (str[i] == ' ')  
        {
            printf("%c\n",str[i+1]);
        }
        
    }
    //I am only able to do so in this code.
    //Yes, I know there is some error in this code.

    return 0;
}
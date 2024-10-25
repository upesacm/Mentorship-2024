#include <stdio.h>
#include <string.h>

int main(){

    char str[10];
    printf("Enter the word of your choice: ");
    scanf("%s",str);
    int len = strlen(str);
    int low = 0, high = len-1;
    int checker;
    while(low <= high){
        if (str[low] == str[high])
        {
            low++;
            high--;
            checker = 1;
        }
        else if (str[low] != str[high])
        {
            checker = 0;
            break;
        }   
    }
    if (checker == 1)
    {
        printf("The string is palindrome.");
    }
    else{
        printf("The string is not a palindrome.");
    }
    return 0;
}
#include <stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i , len, flag=0;
    printf("\n Enter the strinmg to check form plaindrome:");
    gets(str);
    len= strlen(str);
    for (i=0; i<len ;i++)
    {
        if(str[i]!=str[len-i-1]){
            flag= 1 ;
            break;
        }

    }

    if (flag==0)
    printf("The given string is palindrome");
    else
    printf("This is not a palindrome string");
    return 0 ;

    
}
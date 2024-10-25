#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    char revstring[20];

    printf("Enter the string:");
    scanf("%s",string);

    strcpy(revstring,string);
    strrev(revstring);

    if(strcmp(string,revstring)==0){
        printf("The string is a palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
return 0;
}
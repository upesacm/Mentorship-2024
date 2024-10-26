//=> C Program to Check Whether a String is Palindrome or Not


#include<stdio.h>
#include<string.h>

void palindrome(char [],int);

void palindrome(char string[], int x){
    int start=0,end=x-1,temp;
    char st[50];


    strcpy(st,string);

    while (start < end)
    {
        temp = st[start];
        st[start] = st[end];
        st[end] = temp;
        start++;
        end--;
    }
    
    if (strcmp(st, string) == 0) {
        printf("Yes, the word '%s' is a palindrome.\n", string);
    } else {
        printf("No, the word '%s' is not a palindrome.\n", string);
    }

}

int main(){

    char string[30];

    printf("Enter the word to check palindrome: ");
    fgets(string,sizeof(string),stdin);

    int length = strlen(string);
    if (string[length - 1] == '\n') 
    {
        string[length - 1] = '\0';
        length--;  
    }


    palindrome(string,length);


    return 0;
}
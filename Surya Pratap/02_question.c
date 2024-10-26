//=> C Program to Print the First Letter of Each Word

#include<stdio.h>

int main(){
    int num;

    printf("Enter how many words you want: ");
    scanf("%d",&num);

    

    char string[num+1];

    string[num] = '\0';

    for (int i = 0; i < num; i++)
    {

        printf("Enter the %d word: ",i+1);
        scanf(" %c",&string[i]);
        while (getchar() != '\n');

    }


    printf("First letters of each word:\n");
    for (int i = 0; i < num; i++) {
        printf("%d => %c\n", i + 1, string[i]);
    }
    
    

    return 0;
}
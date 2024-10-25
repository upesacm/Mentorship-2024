#include<stdio.h>
int main()
{
    char s[100];
    printf("enter a sentance ");
    fgets(s,100,stdin);
    printf("%c",s[0]);
    for(int i=0;i<100;i++)
    {
        if(s[i]==' ')
        {
            printf("%c",s[i+1]);
        }
    }
    return 0;
}
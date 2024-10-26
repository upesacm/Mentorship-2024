#include<stdio.h>
int FACT(int n)
{
    if(n==0)
    return 1;
    else
    return n*FACT(n-1);
}
void main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The Factorial is %d",FACT(n));
}

#include <stdio.h>
int fact(int num) 
{
    if (num == 0)
        return 1;
    else
        return (num * fact(num - 1));
}
int main()
{
    int num;
    printf("Enter a value for factorial: ");
    scanf("%d", &num);
    int factorial = fact(num);
    printf("Factorial of the number is: %d\n",factorial);
    return 0;
}

//=> C Program to Calculate the Factorial of a Number Using Recursion


#include<stdio.h>

int factorial(int);

int factorial(int n){

    if (n==0)
    {
        return 1;
    }
    
    return(n * factorial(n-1));
    
}


int main(){
    int num;
    printf("Enter the number for factorial: ");
    scanf("%d",&num);

    printf("The factorial of %d is %d",num,factorial(num));

    return 0;
}
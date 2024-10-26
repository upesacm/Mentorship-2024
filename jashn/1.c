#include <stdio.h>

// creating a function for factorial

int factorial(int n){
    if (n==0 || n==1)        // if the user wants to find the factorial of 0 or 1 then the answer will return as 1
      return 1;
    return n * factorial(n-1);     // if user wants to find the factorial of number except 0 or 1
 }                             // recursion

int main() {
    int num;
    printf("enter number");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,factorial(num));
    return 0;
}
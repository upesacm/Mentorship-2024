#include <stdio.h>

//Making the function called factorial which will be called to find the factorial of the number.
int factorial(int num){
    if (num == 0 || num == 1)//Base case of the Stopping Condition.
    {
        return 1;
    }
    else return num*factorial(num-1);//Reccursive Code.
    
}

int main(){

    int num;//Decalaring the number
    printf("Enter a number of your choice whose factorial you want to get: ");
    scanf("%d", &num);
    int Fact = factorial(num);//Storing the value of factorial of the number after calling the function.
    printf("The factorial of the number %d is %d",num,Fact);
    return 0;
}